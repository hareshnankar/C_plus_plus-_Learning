#include <iostream>
using namespace std;
/*
Memory Management: Using new and delete allows for dynamic memory allocation, which is useful when the size of the data structure is not known at compile time.
Dangling Pointers: After a memory block is deleted, the pointer still holds the address of the memory location, but the memory is no longer valid. Accessing this memory can lead to undefined behavior.
Memory Leaks: If memory allocated with new is not properly deallocated with delete, it can lead to memory leaks, where the program consumes more and more memory over time.*/
int main()
{
 // stasticx memory alloaction
 int a = 20 ;
 //dynamic memory allocation
 int *ptr_b = new int(80);//this is way how we can allocate single mem datatype can be anything

 cout<<"value of a = "<<a<<endl;
 cout<<"value ptr ptr_b is refrering = "<<*ptr_b<<endl;
 delete ptr_b;
 cout<<"value ptr ptr_b is refrering = "<<*ptr_b<<endl;//we will getgarbage value because we deleted/free mem before this line

 /*suppose you want to initializ array*/
 int *arry = new int[5];//array of 5 element created dynamically
 arry[0]    = 10;
 arry[1]    = 20;
 arry[2]    = 30;
 arry[3]    = 40;
 arry[4]    = 50;
 cout<<"arr of 0 = "<<arry[0]<<endl;
 cout<<"arr of 1 = "<<arry[1]<<endl;
 cout<<"arr of 2 = "<<arry[2]<<endl;
 cout<<"arr of 3 = "<<arry[3]<<endl;
 cout<<"arr of 4 = "<<arry[4]<<endl;
//you can put value like this also
 *(arry+0)    = 100;
 *(arry+1)    = 200;
 *(arry+2)    = 300;
 *(arry+3)    = 400;
 *(arry+4)    = 500;
 cout<<"arr of 0 = "<<arry[0]<<endl;
 cout<<"arr of 1 = "<<arry[1]<<endl;
 cout<<"arr of 2 = "<<arry[2]<<endl;
 cout<<"arr of 3 = "<<arry[3]<<endl;
 cout<<"arr of 4 = "<<arry[4]<<endl;
 delete arry;


    return 0;
}
