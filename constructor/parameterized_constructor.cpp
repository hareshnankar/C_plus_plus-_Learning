#include <iostream>
#include <cstring> // For strcpy
/*
1. Definition: A parameterized constructor is a constructor that takes one or more parameters, allowing you to initialize member variables with specific values when an object is created.
2. Initialization: Use the constructor to initialize member variables to specific values provided as arguments.
3. No Default Values: If you define a parameterized constructor, the compiler will no longer provide a default constructor unless you explicitly define one.
4. Multiple Parameterized Constructors: A class can have multiple parameterized constructors with different parameter lists (constructor overloading).
5. No Return Type: Constructors do not have a return type, not even `void`.
6. Name Matching: The constructor name must match the class name.
7. Access Specifiers: Can be `public`, `protected`, or `private`.
8. Inheritance: If a base class has a parameterized constructor, derived classes must explicitly call it in their constructors.
9. Initialization List: It is often a good practice to use an initializer list to initialize member variables in the constructor.
10. Flexibility: Parameterized constructors provide flexibility in creating objects with different initial states.
*/


class student
{
    /* by default all data members are having private access */
    int id;
    int roll_no;
    char name[10];

public:
    // Parameterized constructor
    student(int student_id, int student_roll_no, const char* student_name)
    {
        std::cout << "Parameterized constructor calling...\n";
        id = student_id;
        roll_no = student_roll_no;
        std::strcpy(name, student_name); // Use strcpy to copy the string
    }

    void get_data() const
    {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Roll No: " << roll_no << std::endl;
        std::cout << "Name: " << name << std::endl;
    }
};

int main()
{
    // Create a student object using the parameterized constructor
    student s1(10, 20, "Haresh");
    s1.get_data(); // Get and print the data

    return 0;
}
