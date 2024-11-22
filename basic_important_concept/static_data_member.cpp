#include <iostream>
#include <cstring> // For strcpy

/* Declare member function inside class */

class student
{
    /* By default, all data members are private */
    int id;
    static int count; // Static member variable shared among all objects of the class we cant init sttic variable gere with value

public:
    void set_data(int a)
    {
        id = a;
    }

    void get_data()
    {
        std::cout << "ID: " << id << std::endl;
        count++;
        std::cout << "Number of students = " << count << std::endl;
        
    }
};

int student::count = 5; // Initialize static member variable ,here we can give start value else by default it is 0

int main()
{
    student s1, s2, s3; // Create objects of student

    s1.set_data(10); // Set data for the student
    s1.get_data();   // Get and print the data

    s2.set_data(20); // Set data for the student
    s2.get_data();

    s3.set_data(30); // Set data for the student
    s3.get_data();

    return 0;
}
