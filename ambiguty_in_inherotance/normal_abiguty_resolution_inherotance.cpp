#include <iostream>
#include <cstring> 


class base1
{
public:

    void display() const
    {
        std::cout << "Haresh nankar from base1" << std::endl;
    }
};
class base2
{
public:

    void display() const
    {
        std::cout << "Haresh nankar from base2" << std::endl;
    }
};
class derive : public base1,public base2
{

public:

    /*two method to deal with abiguty*/

    /*method 1*/
    /*void display() const
    {
        std::cout << "Haresh nankar from derive" << std::endl;
    }*/

    /*method 2*/
    void display() const
    {
       base2::display();
    }
};

int main()
{

    base1 obj;
    obj.display();
    base2 obj1;
    obj1.display();
    
/*if we comment line 28 to 40 and try to exicute below code then 
it will give error as below 
error: request for member 'display' is ambiguous obj3.display();

because we are trying to derive function which is having same name
this will creat abiguty 

important points
1.if we have same name of function which we are trying to derived from base1 and base2
then it will use function which is mentioned in derive and there will be no abiguty 
like method 1
2.there is other method also to deal with abiguty is we need to mention 
from which class we will use function like menthod 2

*/
    derive obj3;
    obj3.display();

    return 0;
}
