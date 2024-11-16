#include <iostream>
#include <cstring> // For strcpy
/*declrae_member function outside class*/

class student
{
    /*by default all data members are having provate accsess*/
    int id;
    int roll_no;
    char name[10];

public:
    void set_data(int a, int b, const char c[20]);
    void get_data();

};
void student :: set_data(int a, int b, const char c[20])
{
    id = a;
    roll_no = b;
    std::strcpy(name, c); // Use strcpy to copy the string
}
void student :: get_data(void)
{
    std::cout << "ID: " << id << std::endl;
    std::cout << "Roll No: " << roll_no << std::endl;
    std::cout << "Name: " << name << std::endl;
}
int main()
{
    student s1; // Create an object of student
    s1.set_data(1, 101, "John"); // Set data for the student
    s1.get_data(); // Get and print the data

    return 0;
}
