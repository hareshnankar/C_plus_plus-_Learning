/*derived class sinthax
class {derived_class_name} : {visibility_mode} {base_class_name}
{
 class member/method...ext
};

Note:
1.default visibity mode is private
2.private will not be inherited in derived class
3.public visibility : public of base will become public of derived
4.private visibility : public of base will become private of derived
5.protected visibility : public of base will become protected of derived
*/
#include <iostream>
#include <cstring> // For strcpy
using namespace std;
/*declrae_member function inside class*/

class base1
{
    int base1_value1_private ;//it cant be inherited 
protected :
   /*we can inherit this variable bcz it is protected*/
    int base1_value2_protected;

public:
    /*we can only inherit this public member and member function*/
    int base1_value3_public;
    int base1_value4_public;

    void base1_set_all_var(int a,int b, int c,int d)
    {
        base1_value1_private = a;
        base1_value2_protected = b;
        base1_value3_public = c;
        base1_value4_public = d;
    }
    
    void base1_set_public_and_protected_var(int a,int b, int c,int d)
    {
        base1_value2_protected = b;
        base1_value3_public = c;
        base1_value4_public = d;
    }
    void base1_get_all_var()
    {
       cout<<"base1_value1_private : "<<base1_value1_private<<endl;
        cout<<"base1_value2_public : "<<base1_value2_protected<<endl;
        cout<<"base1_value2_public : "<<base1_value3_public<<endl;
        cout<<"base1_value4_public : "<<base1_value4_public<<endl;
    }

};

class base2 
{
    int base2_value1_private ;//it cant be inherited 
    protected :
    /*we can inherit this variable bcz it is protected*/
        int base2_value2_protected;

    public:
        /*we can only inherit this public member and member function*/
        int base2_value3_public;
        int base2_value4_public;


    void base2_set_all_var(int a,int b, int c,int d)
    {

        base2_value1_private = a+1;
        base2_value2_protected = b+2;
        base2_value3_public = c+3;
        base2_value4_public = d+4;
    }

    void base2_get_all_var()
    {

       cout<<"base2_value1_private : "<<base2_value1_private<<endl;
        cout<<"base2_value2_public : "<<base2_value2_protected<<endl;
        cout<<"base2_value2_public : "<<base2_value3_public<<endl;
        cout<<"base2_value4_public : "<<base2_value4_public<<endl;

    }
};

class derive : public base1,public base2 // here you can drive class is derived from bas1 as well as bas2
{
    int derive_value1_private ;//it cant be inherited 
    protected :
    /*we can inherit this variable bcz it is protected*/
        int derive_value2_protected;

    public:
        /*we can only inherit this public member and member function*/
        int derive_value3_public;
        int derive_value4_public;


    void derive_set_all_var(int a,int b, int c,int d)
    {
        base1_value2_protected = b;
        base1_value3_public = c;
        base1_value4_public = d;

        base2_value2_protected = b+2;
        base2_value3_public = c+2;
        base2_value4_public = d+2;

        derive_value1_private = a+3;
        derive_value2_protected = b+3;
        derive_value3_public = c+3;
        derive_value4_public = d+3;
    }

    void derive_get_all_var()
    {
     cout<<"base_value2_protected : "<<base1_value2_protected<<endl;
        cout<<"base_value2_public : "<<base1_value3_public<<endl;
        cout<<"base_value4_public : "<<base1_value4_public<<endl;
        cout<<endl;
     cout<<"derive1_value2_protected : "<<base2_value2_protected<<endl;
        cout<<"derive1_value3_public : "<<base2_value3_public<<endl;
        cout<<"derive1_value4_public : "<<base2_value4_public<<endl;
        cout<<endl;
       cout<<"derive2_value1_private : "<<derive_value1_private<<endl;
     cout<<"derive2_value2_protected : "<<derive_value2_protected<<endl;
        cout<<"derive2_value3_public : "<<derive_value3_public<<endl;
        cout<<"derive2_value4_public : "<<derive_value4_public<<endl;

    }
};

int main()
{
    derive s1; // Create an object of student
    s1.derive_set_all_var(10,20,30,40);
    s1.derive_get_all_var();
    return 0;
}
