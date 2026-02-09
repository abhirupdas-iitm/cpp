#include <iostream>
#include <string>


class Dog
{
public:
    // Constructors
    Dog()
    {
        dog_name  = "None";
        dog_breed = "None";
        dog_age   = new int;
        *dog_age  = 0;
    }

    Dog(std::string name_param,
        std::string breed_param,
        int age_param)
    {
        dog_name  = name_param;
        dog_breed = breed_param;
        dog_age   = new int;      // dynamic memory allocation
        *dog_age  = age_param;
    }

    // Destructor
    ~Dog()
    {
        delete dog_age;  // release heap memory
        std::cout << "Dog destructor called for "
                  << dog_name << std::endl;
    }

    // Utility function (just to observe state)
    void print_info() const
    {
        std::cout << "Name  : " << dog_name  << std::endl;
        std::cout << "Breed : " << dog_breed << std::endl;
        std::cout << "Age   : " << *dog_age  << std::endl;
    }

private:
    std::string dog_name;
    std::string dog_breed;
    int* dog_age;   // pointer owning heap memory
};

int main()
{
    std::cout << "Creating dog1..." << std::endl;
    Dog dog1;
    dog1.print_info();

    std::cout << "\nCreating dog2..." << std::endl;
    Dog dog2("Buddy", "Golden Retriever", 5);
    dog2.print_info();

    std::cout << "\nExiting main..." << std::endl;
    return 0;   // destructors called automatically here
}
