#include <iostream>
#include <cstring> 

                                    /* virtual class therory*/
/*
                                            [base] -----> this is virtual base class here 
                                              |
                                  ____________|_____________
                                  |                        |   
                               [derive1]               [derive2]
                                  |________________________|
                                              |
                                           [result]

as you can see here derive 1 and derive2 are derived class from base ,
and result is derived class of both derive1 and derive2
so suppose accourding to below example display function will go from base to 
derive1 and derive 2 and then to result so 
here is the abiguty becase result class will get confused from where to pick display function
from derive1 or derive 2 beacuse in normal program they both will have display funcytion 
so to resolve such kind od abiguty we introduse virtual base class 
here while deriving derive 1 and derive 2 we need to use virtual keuwaord
that tell compiler that we base class is virtual so display function will derive only once so it will not gives an error 

example how to derive virtual base class 
class derive_1 :  virtual public base
class derive_2 :  virtual public base
*/
class base
{
public:

    void display() const
    {
        std::cout << "Haresh nankar from base1" << std::endl;
    }
};
class derive_1 :  virtual public base
{
public:


};
class derive_2 :  virtual public base
{

public:


};

class result : public derive_1,public derive_2
{

public:

};

int main()
{

/* if we dont use virtual while inheriting base class into derive1 and derive 2 we will come accrioss below erro*/
 /*  error: request for member 'display' is ambiguous
     obj.display();
         ^~~~~~~     
    important to resolve this error we should use virtual while deriving derive1 and derive2 like below
    
*/
    result obj;
    obj.display();

    return 0;
}
