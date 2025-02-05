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
    int size_of_array = 3; 
    int id,roll_no;
    char name[10];
    /*this is how we creat obect and access them normally*/

    student s1; // Create an object of student
    s1.set_data(1, 101, "John"); // Set data for the student
    s1.get_data(); // Get and print the data


    /*this is how we creat obect and access them using pointers using -> oprator and arry*/
    /*creat dinamic memory for student object and of size size_of_arry and give first element address to ptr*/
    student *ptr = new student[size_of_array];
    student *startptr = ptr ;

    for(int i = 0;i<size_of_array;i++)
    {
        std::cout<<"...object "<<i<<"Enter ID , Roll_No and Name...."<< std::endl;
        std::cin>>id>>roll_no>>name;
        ptr->set_data(id,roll_no,name);
        ptr++;
    }
    ptr = startptr;
    for(int i = 0;i<size_of_array;i++)
    {

        ptr->get_data();
        ptr++;
    }


    //ptr1->set_data(3, 103, "Harry"); // Set data for the student
    //ptr1->get_data(); // Get and print the data

    return 0;
}
