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
        dog_age   = new int;     // Memory allocated on the heap
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
        dog_age   = new int;     // Memory allocated on the heap
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

    // Helper function
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
    std::cout << "Creating dog1...\n";
    Dog dog1;

    std::cout << "\nCreating dog2...\n";
    Dog dog2("Rocky", "Bulldog", 4);

    std::cout << "\nLeaving main...\n";
    return 0;   // destructors called automatically
}
