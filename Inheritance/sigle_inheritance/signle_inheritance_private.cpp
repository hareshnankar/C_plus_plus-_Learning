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
/*declrae_member function inside class*/

class base
{
    int roll_no_private ;//it cant be inherited 

public:
    /*we can only inherit this public member and member function*/
    int id;
    char name[20];

    void set_data_base(int a,int b, const char c[20])
    {
        id = a;
        roll_no_private = b;
        std::strcpy(name, c); // Use strcpy to copy the string
    }

    void get_data_base()
    {
        std::cout << "roll_no_private: " << roll_no_private << std::endl;
    }

};

class derive : private base /* private visibility : public of base will become private of derived */
{
        char schoolname[10];

        public :

        void set_data_derive( const char c[20])
        {
            //id name and roll no are private so we are setting this from this function of derive class 
            set_data_base(1,10,"Haresh Nankar");
            std::strcpy(schoolname, c); // Use strcpy to copy the string
        }

        void get_data_derive()
        {
            /*here id and name are inherited from student class and schoolname is private member of school*/
            std::cout << "ID: " << id << std::endl;
            std::cout << "Name: " << name << std::endl;
            std::cout << "schoolname: " << schoolname << std::endl;
        }
};

int main()
{
    derive s1; // Create an object of student

    /*you can see here we can't access id and name of base class from derive class ,
    because private visibility : public of base will become private of derived and private member of any call 
    we cant directly use in main function for that reasone we have not commented below two line if you want to see error 
    you can uncomment this line and you can see whether it is accessable or not*/

    // s1.id = 10;
    // std::strcpy(s1.name, "parry"); 

    /* we cant access 

    s1.roll_no_private = 20 //bcz it is private member of base class cant be inherited

    */

    /*you can see here we can't access set_data_base and get_data_base of base class from derive class ,
    because private visibility : public of base will become private of derived and private member of any call 
    we cant directly use in main function for that reasone we have not commented below two line if you want to see error 
    you can uncomment this line and you can see whether it is accessable or not*/

    // s1.set_data_base(1,10,"Haresh Nankar"); // Set data for the student
    // s1.get_data_base(); // Get and print the data
    s1.set_data_derive("ST. Xaviers"); // Set data for the student
    s1.get_data_derive(); // Get and print the data
    return 0;
}
