#include <iostream>
#include <ios>
#include <iomanip>

int main(){

    //std::cout
    std::cout << "Hello" << std::endl;
    std::cout << "World ";
    std::cout << "This line is being printed next to 'World' because std::endl was not used after printing 'World' " << std::endl;
    
    std::cout << std::endl;
    //std::setw(integer)
    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Bill" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;

    std::cout << std::endl;
    std::cout << "Formatted table : " << std::endl;

    std::cout << std::setw(10) << "Firstname" << std::setw(10) << "Lastname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << " 25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << " 33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << " 45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Bill" << std::setw(5) << " 21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << " 27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << " 29" << std::endl;

    std::cout << std::endl;
    std::cout << "Formatted table justified to the right: " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << "Firstname" << std::setw(10) << "Lastname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << " 25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << " 33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << " 45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Bill" << std::setw(5) << " 21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << " 27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << " 29" << std::endl;

    std::cout << std::endl;
    std::cout << "Formatted table justified to the left: " << std::endl;
    std::cout << std::left;
    std::cout << std::setw(10) << "Firstname" << std::setw(10) << "Lastname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << " 25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << " 33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << " 45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Bill" << std::setw(5) << " 21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << " 27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << " 29" << std::endl;

    //std::internal
    std::cout << std::endl;
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    //std::boolalpha and std::noboolalpha
    bool condition {true};
    bool other_condition {false};
    
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    //std::showpos and std::noshowpos
    int pos_num {34};
    int neg_sum {-45};

    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_sum : " << neg_sum << std::endl;

    //std::showpos
    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_sum : " << neg_sum << std::endl;

    //std::noshowpos
    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_sum : " << neg_sum << std::endl;

    //different number systems: std::dec, std::hex and std::oct
    
    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};
    
    std::cout << std::endl;
    std::cout << "pos_int in different bases : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;

    std::cout << std::endl;
    std::cout << "double_var in different bases : " << std::endl;
    std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
    std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
    std::cout << "double_var (oct) : " << std::oct << double_var << std::endl;

    int pos_integer = 717171;

    //std::noshowbase
    std::cout << std::endl;
    std::cout << "pos_integer (noshowbase : default) : " << std::endl;
    std::cout << std::noshowbase;
    std::cout << "pos_integer (dec) : " << std::dec << pos_integer << std::endl;
    std::cout << "pos_integer (hex) : " << std::hex << pos_integer << std::endl;
    std::cout << "pos_integer (oct) : " << std::oct << pos_integer << std::endl;

    //std::showbase
    std::cout << std::endl;
    std::cout << "pos_integer (showbase) : " << std::endl;
    std::cout << std::showbase;
    std::cout << "pos_integer (dec) : " << std::dec << pos_integer << std::endl;  
    std::cout << "pos_integer (hex) : " << std::hex << pos_integer << std::endl;
    std::cout << "pos_integer (oct) : " << std::oct << pos_integer << std::endl;

    int pos_intg = 717171;

    //std::nouppercase
    std::cout << std::endl;
    std::cout << "pos_intg (nouppercase : default) : " << std::endl;
    std::cout << "pos_intg (dec) : " << std::dec << pos_intg << std::endl;
    std::cout << "pos_intg (hex) : " << std::hex << pos_intg << std::endl;
    std::cout << "pos_intg (oct) : " << std::oct << pos_intg << std::endl;

    //std::uppercase
    std::cout << std::endl;
    std::cout << "pos_integer (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_intg (dec) : " << std::dec << pos_intg << std::endl;  
    std::cout << "pos_intg (hex) : " << std::hex << pos_intg << std::endl;
    std::cout << "pos_intg (oct) : " << std::oct << pos_intg << std::endl;

    double a {3.1415926535897932384626433832795};
    double b {2006.0};
    double c {1.34e-10};

    std::cout << std::endl;
    std::cout << "double values (default) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    //std::fixed
    std::cout << std::endl;
    std::cout << "double values (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    //std::scientific
    std::cout << std::endl;
    std::cout << "double values (scientific) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    //std::scientific and std::fixed
    std::cout << std::endl;
    std::cout << "double values (back to defaults) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    return 0;


}
