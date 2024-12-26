/*theory for constructor in inheritance
1. we can use constructors in derived classin c++
2.if base class constructor does not have any arguments,ther is no need of any constructor in derived class 
3.but if there aer one or morearguments in the base class constructor,derived class need to pass arguments to 
the base class constructor.
4.if both base and derived classes have constructors,base class constructor is executed first.
5.in multiple inheritance, base classes are constructed in order ther appear in the class declaration
6.in multileve; inheritance, the constructors are executed in the order of inheritance

case1 
class B :public A{
    //order of execution of constructor -> first A() then B()
};

case2 
class A :public B, public C{
    //order of execution of constructor -> first B() then C() and A()
};

case3
class B :public A{
    //order of execution of constructor -> first A() then B()
};

*/
#include <iostream>
using namespace std;
class base1
{
    int data1;
    public :
    base1(int i)
    {
        data1 = i;
        cout<<"base1 class constructor called"<< endl;
    }
    void printdatabase1(void)
    {
      cout<<"the value of data1 = "<<data1<< endl;
    }
};
class base2
{
    int data2;
    public :
    base2(int i)
    {
        data2 = i;
      cout<<"base2 class constructor called"<< endl;
    }
    void printdatabase2(void)
    {
      cout<<"the value of data2 = "<<data2<< endl;
    }
};

class dereive : public base1 ,public base2 // in this base1 constructor called first then base 2 and then derive
{
    int drv1,drv2;
    public :
    dereive(int a,int b,int c,int d):base1(a),base2(b)//spectial sintax for constructor passing value to base constructor
    {
        drv1 = c;
        drv2 = d;
      cout<<"dereive class constructor called"<< endl;
    }
    void printdatadrv(void)
    {
      cout<<"the value of drv1 = "<<drv1<< endl;
      cout<<"the value of drv2 = "<<drv2<< endl;
    }
};
int main()
{
dereive obj(1,2,3,4);
obj.printdatabase1();
obj.printdatabase2();
obj.printdatadrv();
}