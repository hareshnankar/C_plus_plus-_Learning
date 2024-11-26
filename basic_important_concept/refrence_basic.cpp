#include <iostream>

int a;

int main()
{
    a = 10; // Assign a value to variable a
    int &ref_a = a; // Declare a reference variable ref_a that refers to a

    std::cout << "Value of a: " << a << std::endl; // Output the value of a
    std::cout << "Value of ref_a: " << ref_a << std::endl; // Output the value of ref_a

    ref_a = 20; // Modify the value through the reference

    std::cout << "After modifying ref_a:" << std::endl;
    std::cout << "Value of a: " << a << std::endl; // Output the value of a
    std::cout << "Value of ref_a: " << ref_a << std::endl; // Output the value of ref_a

    return 0;
}
