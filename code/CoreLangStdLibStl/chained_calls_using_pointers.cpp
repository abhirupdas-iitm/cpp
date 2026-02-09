#include <iostream>
#include <string>

class Dog
{
public:
    Dog(std::string name, std::string breed, int age)
        : dog_name(name), dog_breed(breed)
    {
        dog_age = new int(age);
    }

    ~Dog()
    {
        delete dog_age;
    }

    void print_info() const
    {
        std::cout << "Name  : " << dog_name << std::endl;
        std::cout << "Breed : " << dog_breed << std::endl;
        std::cout << "Age   : " << *dog_age << std::endl;
    }

    // ---- chained setters (pointer version) ----
    Dog* set_name(const std::string& name)
    {
        this->dog_name = name;
        return this;
    }

    Dog* set_dog_breed(const std::string& breed)
    {
        this->dog_breed = breed;
        return this;
    }

    Dog* set_dog_age(int age)
    {
        if (dog_age)
        {
            *dog_age = age;
        }
        return this;
    }

private:
    std::string dog_name;
    std::string dog_breed;
    int* dog_age {};
};

int main()
{
    Dog* p_dog1 = new Dog("Milou", "Shepherd", 3);
    p_dog1->print_info();

    std::cout << "\nAfter chained call:\n";

    p_dog1->set_name("Mario")
          ->set_dog_breed("Wire Fox Terrier")
          ->set_dog_age(5);

    p_dog1->print_info();

    delete p_dog1;
    return 0;
}
