#include <iostream>
#include <cstring> // For strcpy

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

    // Copy constructor
	/*The use of const in the copy constructor declaration student(const 
	student &s) serves an important purpose related to ensuring that 
	the original object is not modified during the copying process*/
	
    student(const student &s)
    {
        std::cout << "Copy constructor calling...\n";
        id = s.id;
        roll_no = s.roll_no;
        std::strcpy(name, s.name); // Use strcpy to copy the string
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

    // Create a new student object using the copy constructor
    student s2 = s1; // This will invoke the copy constructor
	//or 
	student s3(s1);
    s2.get_data(); // Get and print the data

    return 0;
}
