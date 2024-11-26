#include <iostream>
using namespace std;
int a = 30;

class student {
    int a ;
public:
    student() {
        a = 20; // Initialize class member variable 'a' to 1
    }

    // Local parameter 'a' hides class member 'a'
    void disp_data(int a);
};
void student :: disp_data(int a) {
    a=10;
    cout <<"local a value using statderd cout "<<a<<endl; 
    cout <<"class object a value using this keyword "<<this->a<<endl; 
    cout <<"class object using scope resolution operator a value "<<student::a<<endl; 
    cout <<"gloable value of a using scop resolution operator "<<::a<<endl;
}
// Driver Code
int main() {
    student obj;
    int k = 3;
    obj.disp_data(k); // Calls func with local variable 'k'
    return 0;
}
/*output*/
/*
local a value using statderd cout 10
class object a value using this keyword 20
class object using scope resolution operator a value 20
gloable value of a using scop resolution operator 30
*/