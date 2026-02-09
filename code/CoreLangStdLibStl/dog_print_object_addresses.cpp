#include <iostream>
#include <string>


class Dog
{
public:
    // Default constructor
    Dog()
    {
        dog_name  = "None";
        dog_breed = "None";
        dog_age   = new int;
        *dog_age  = 0;

        std::cout << "Dog : " << dog_name
                  << " constructed at " << this << std::endl;
    }

    // Parameterized constructor
    Dog(const std::string& name_param,
        const std::string& breed_param,
        int age_param)
    {
        dog_name  = name_param;
        dog_breed = breed_param;
        dog_age   = new int;
        *dog_age  = age_param;

        std::cout << "Dog : " << dog_name
                  << " constructed at " << this << std::endl;
    }

    // Destructor
    ~Dog()
    {
        delete dog_age;
        std::cout << "Dog : " << dog_name
                  << " destroyed at " << this << std::endl;
    }

    void print_info() const
    {
        std::cout << "Name  : " << dog_name  << std::endl;
        std::cout << "Breed : " << dog_breed << std::endl;
        std::cout << "Age   : " << *dog_age  << std::endl;
    }

private:
    std::string dog_name;
    std::string dog_breed;
    int* dog_age;
};


int main()
{
    std::cout << "Creating dog1..." << std::endl;
    Dog dog1;

    std::cout << "\nCreating dog2..." << std::endl;
    Dog dog2("Max", "German Shepherd", 6);

    std::cout << "\nExiting main..." << std::endl;
    return 0;
}
