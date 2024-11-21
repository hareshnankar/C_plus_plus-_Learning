#include <iostream>
#include <cstring> // For strcpy
using namespace std;

class student
{
public:
    int id = 10;
    int *roll_no_prt = new int(4);

public:
    student()//need default constructor here 
    {

    }
    student(student &obj)//deep copy example
    {
       id = obj.id; 
       *roll_no_prt = *(obj.roll_no_prt);//for each object mem loc will be diffrent
    }
    void get_data() const
    {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Roll No pointer containt: " << *roll_no_prt << std::endl;
    }
};

int main()
{

    student s1;
    cout<<"containt of S1 object....."<<endl;
    s1.get_data(); // Get and print the data
    s1.id = 20;
    *(s1.roll_no_prt) = 200;
    cout<<"containt of S2 object....."<<endl;
	student s2(s1);
    s2.get_data(); // Get and print the data

    return 0;
}
/*................EXPLAINATION.......................*/
/*
issue with pointer solved here  

 Initial State (s1)   
+-------------------+
| id: 10            |    
| roll_no_prt: ---->| 4  mem loc :1000                 |
+-------------------+
After Modifying s1
+-------------------+
| id: 20            |
| roll_no_prt: ---->| 200  mem loc :2000                    |
+-------------------+
After Shallow Copy (s2(s1))

s1
+-------------------+
| id: 20            |
| roll_no_prt: ---->| 200  mem loc :1000                    |
+-------------------+

s2
+-------------------+
| id: 20            |
| roll_no_prt: ---->| 200   mem loc :2000                   |
+-------------------+
After Modifying s2

+-------------------+
| id: 20            |
| roll_no_prt: ---->| 200    mem loc :1000                  |
+-------------------+

s2
+-------------------+
| id: 30            |
| roll_no_prt: ---->| 300     mem loc :2000                 |
+-------------------+

After Deleting s1.roll_no_prt

+-------------------+
| id: 20            |
| roll_no_prt: ---->| (deleted memory)  mem loc :1000       |
+-------------------+

s2
+-------------------+
| id: 30            |
| roll_no_prt: ---->| 300      mem loc :2000     |
+-------------------+
issue due to shallow copy, pointer will  same memory even oject is differant*/