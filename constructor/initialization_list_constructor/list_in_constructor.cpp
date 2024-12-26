#include<iostrean>
using namespace std;
/*
sythax for iitializing list in conctructor

constructor (argument-list) : initialization-section
{
    assignment + order code;
}


}*/

class test
{
    /*in below sequence only assigment of value will be done */
    int a;
    int b;
    public :
        test(int i,int j):a(i),b(j)//first value is assigned to a and then to b 
        {
            cout <<"constructor called"<<endl;
            cout <<"value of a is "<<a<<endl;
            cout <<"value of b is "<<b<<endl;
        }
}}