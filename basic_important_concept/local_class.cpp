#include <iostream>
using namespace std;
/*IMPORTANT POINTS*/
/*
• A local class name can only be used locally i.e., inside the function and not outside it.
• The methods of a local class must be defined inside it only.
• A local class can have static functions but, not static data members
*/
/*Following are some interesting facts about Local Classes in C++:
1) A local class type name can only be used in the enclosing function.
2) All the methods of Local classes must be defined inside the class only*/
void fun() {
    class Test // local to fun
    {
    public:
    // Fine as the method is defined 
    // inside the local class
        void method() {
            cout << "Local Class method()";
        }
    };
    // Error as the method is defined outside the local 

    /* class void Test::method() { cout << "Local Class method()";*/
    
    // Create an instance of Test and call method()
    Test t;
    t.method();
}

int main() {
    fun();
    return 0;
}
