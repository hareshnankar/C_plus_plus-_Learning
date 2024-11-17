#include <iostream>
#include <cstring> // For strcpy
/*declrae_member function inside class*/

/*
1.Automatic Provision: If no constructors are defined, the compiler provides a default constructor.
2.No Parameters: A default constructor can be called with no arguments.
3.Explicit Definition: You can define a default constructor to initialize member variables.
4.No Return Type: Constructors do not have a return type.
5.Name Matching: The constructor name must match the class name.
6.Single Default Constructor: A class can have only one default constructor.
7.Initialization: Use the constructor to initialize member variables.
8.Access Specifiers: Can be public, protected, or private.
10.Inheritance: Base class default constructor must be accessible if used by derived classes.
*/

class student
{
    /*by default all data members are having provate accsess*/
    int id;
    int roll_no;
    char name[10];

public:
    student()
    {
		std::cout<<"Default constructor calling...\n";
        id = 10;
        roll_no = 20;
        std::strcpy(name, "Haresh"); // Use strcpy to copy the string
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
    student s1; // when object is created that time constructor is called by compiler
    s1.get_data(); // Get and print the data

    return 0;
}
