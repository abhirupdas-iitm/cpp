#include "animal_hierarchy.cpp"

int main() {
    Animal* animal1 = new Feline("stripes", "feline1");

    Feline* feline_ptr = dynamic_cast<Feline*>(animal1);

    if (feline_ptr) {
        feline_ptr->do_some_feline_thingy();
    } else {
        std::cout << "Cast to Feline failed\n";
    }

    delete animal1;
}
