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

class base
{
    int base_value1_private ;//it cant be inherited 
protected :
   /*we can inherit this variable bcz it is protected*/
    int base_value2_protected;

public:
    /*we can only inherit this public member and member function*/
    int base_value3_public;
    int base_value4_public;

    void base_set_all_var(int a,int b, int c,int d)
    {
        base_value1_private = a;
        base_value2_protected = b;
        base_value3_public = c;
        base_value4_public = d;
    }
    
    void base_set_public_and_protected_var(int a,int b, int c,int d)
    {
        base_value2_protected = b;
        base_value3_public = c;
        base_value4_public = d;
    }
    void base_get_all_var()
    {
        cout<<"base_value1_private : "<<base_value1_private<<endl;
        cout<<"base_value2_public : "<<base_value2_protected<<endl;
        cout<<"base_value2_public : "<<base_value3_public<<endl;
        cout<<"base_value4_public : "<<base_value4_public<<endl;
    }

};

class derive1 : public base
{
    int derive1_value1_private ;//it cant be inherited 
    protected :
    /*we can inherit this variable bcz it is protected*/
        int derive1_value2_protected;

    public:
        /*we can only inherit this public member and member function*/
        int derive1_value3_public;
        int derive1_value4_public;


    void derive1_set_all_var(int a,int b, int c,int d)
    {
        base_value2_protected = a;
        base_value3_public = b;
        base_value4_public = c;

        derive1_value1_private = a+1;
        derive1_value2_protected = b+2;
        derive1_value3_public = c+3;
        derive1_value4_public = d+4;
    }

    void derive1_get_all_var()
    {
        cout<<"base_value1_private : "<<derive1_value1_private<<endl;
        cout<<"base_value2_public : "<<base_value2_protected<<endl;
        cout<<"base_value2_public : "<<base_value3_public<<endl;
        cout<<"base_value4_public : "<<base_value4_public<<endl;

        cout<<"derive1_value1_private : "<<derive1_value1_private<<endl;
        cout<<"derive1_value2_public : "<<derive1_value2_protected<<endl;
        cout<<"derive1_value2_public : "<<derive1_value3_public<<endl;
        cout<<"derive1_value4_public : "<<derive1_value4_public<<endl;

    }
};
class derive2 : public derive1
{
    int derive2_value1_private ;//it cant be inherited 
    protected :
    /*we can inherit this variable bcz it is protected*/
        int derive2_value2_protected;

    public:
        /*we can only inherit this public member and member function*/
        int derive2_value3_public;
        int derive2_value4_public;


    void derive2_set_all_var(int a,int b, int c,int d)
    {
        base_value2_protected = b;
        base_value3_public = c;
        base_value4_public = d;

        derive1_value2_protected = b+2;
        derive1_value3_public = c+2;
        derive1_value4_public = d+2;

        derive2_value1_private = a+3;
        derive2_value2_protected = b+3;
        derive2_value3_public = c+3;
        derive2_value4_public = d+3;
    }

    void derive2_get_all_var()
    {
        cout<<"base_value2_protected : "<<base_value2_protected<<endl;
        cout<<"base_value2_public : "<<base_value3_public<<endl;
        cout<<"base_value4_public : "<<base_value4_public<<endl;
        cout<<endl;
        cout<<"derive1_value2_protected : "<<derive1_value2_protected<<endl;
        cout<<"derive1_value3_public : "<<derive1_value3_public<<endl;
        cout<<"derive1_value4_public : "<<derive1_value4_public<<endl;
        cout<<endl;
        cout<<"derive2_value1_private : "<<derive2_value1_private<<endl;
        cout<<"derive2_value2_protected : "<<derive2_value2_protected<<endl;
        cout<<"derive2_value3_public : "<<derive2_value3_public<<endl;
        cout<<"derive2_value4_public : "<<derive2_value4_public<<endl;

    }
};

int main()
{
    derive2 s1; // Create an object of student
    s1.derive2_set_all_var(10,20,30,40);
    s1.derive2_get_all_var();
    return 0;
}
