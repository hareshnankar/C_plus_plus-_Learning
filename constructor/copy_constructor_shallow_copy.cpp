#include <iostream>
#include <cstring> // For strcpy
using namespace std;

class student
{
public:
    int id = 10;
    int *roll_no_prt = new int(4);

public:

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
    /*here you can see that we are using copy constructor and we are not provided explicit defination of copy constructor 
    so compiler will provide implicit copy construcor abd important part here if compiler used implicit copy constructor 
    that time shallow copy is used made to store the copied containt*/
    /*important points while using shaallow copy/impicit copy constructor
    1.when we use norman variable then its okay to use this type
    2, we we use pointer variable that time issue will happen 
    issue with pinter 

 Initial State (s1)   
+-------------------+
| id: 10            |    
| roll_no_prt: ---->| 4  mem loc :1000                 |
+-------------------+
After Modifying s1
+-------------------+
| id: 20            |
| roll_no_prt: ---->| 200  mem loc :1000                    |
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
| roll_no_prt: ---->| 200   mem loc :1000                   |
+-------------------+
After Modifying s2

+-------------------+
| id: 20            |
| roll_no_prt: ---->| 300    mem loc :1000                  |
+-------------------+

s2
+-------------------+
| id: 30            |
| roll_no_prt: ---->| 300     mem loc :1000                 |
+-------------------+

After Deleting s1.roll_no_prt

+-------------------+
| id: 20            |
| roll_no_prt: ---->| (deleted memory)  mem loc :1000       |
+-------------------+

s2
+-------------------+
| id: 30            |
| roll_no_prt: ---->| (dangling pointer)  mem loc :1000     |
+-------------------+
issue due to shallow copy, pointer will  same memory even oject is differant*/

	student s2(s1);
    s2.get_data(); // Get and print the data

    return 0;
}
