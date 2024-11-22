#include <iostream>
#include <cstring> // For strcpy

/* Declare member function inside class */

class student
{
    /* By default, all data members are private */
    int id; // Non-static member variable, unique to each object

    static int count; // Static member variable shared among all objects of the class
    // Static member variables are shared across all instances of the class.
    // They are initialized outside the class definition.

public:
    void set_data(int a)
    {
        id = a; // Set the ID for the current object
        count++; // Increment count when data is set
        // This increments the static member variable each time data is set for a student.
    }

    void get_data()
    {
        std::cout << "ID: " << id << std::endl; // Print the ID of the current object
        std::cout << "Number of students = " << count << std::endl; // Print the current count of students
        count++; 
    }    

    static int get_student_count() // Static member function
    {
        return count; // Access and return the static member variable
        // Static member functions can access only static data members and other static member functions.
        // They do not have access to non-static data members or non-static member functions.
    }
};

int student::count = 0; // Initialize static member variable, here we can give start value else by default it is 0
// Static member variables must be initialized outside the class definition.

int main()
{
    student s1, s2, s3; // Create objects of student

    s1.set_data(10); // Set data for the student
    s1.get_data();   // Get and print the data

    s2.set_data(20); // Set data for the student
    s2.get_data();

    s3.set_data(30); // Set data for the student
    s3.get_data();

    // Accessing static member function
    std::cout << "Total number of students (using static function): " << student::get_student_count() << std::endl;
    // Static member functions can be called using the class name and the scope resolution operator (::).
    // This function returns the total number of students whose data has been set.

    return 0;
}
