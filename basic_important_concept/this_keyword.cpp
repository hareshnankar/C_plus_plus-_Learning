#include <iostream>
using namespace std;
/*thsi keyword uses
Accessing Member Variables: When a member variable and a local variable 
have the same name, this can be used to refer to the member variable.

Returning the Current Object: this can be used to return the current 
object from a method, which is useful for method chaining.

Passing the Current Object as a Parameter: this can be used to pass the 
current object to another function or method.*/

class student
{
    int id;/*this->id which is used in set_data will represent id variable of current object*/
    int roll_no;/*this->roll_no which is used in set_data will represent roll_no variable of current object*/
    public:
    student& set_data(int id, int roll_no)
    {
        this->id = id;
        this->roll_no = roll_no;
        return *this; //returning current object pointer 
    }
    void disp_data()
    {
        cout<<"id = "<<id<<endl;;
        cout<<"roll no = "<<roll_no<<endl;
    }

};

int main()
{
    student s1;
    s1.set_data(10,1).disp_data();
    return 0;
}