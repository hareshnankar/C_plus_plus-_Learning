/*Pure Virtual Functions in C++
Pure virtual function is a function that doesn’t perform any operation and 
the function is declared by assigning the value 0 to it. Pure virtual functions 
are declared in abstract classes.*/

/*Abstract Base Class in C++
Abstract base class is a class that has at least one 
pure virtual function in its body. The classes which are inheriting the base 
class must need to override the virtual function of the abstract class otherwise compiler will throw an error.
To demonstrate the concept of abstract class and pure virtual function an example program is shown below
*/
#include <iostream>
#include <cstring>
using namespace std;
/*
1.We created a class “CHW” which contains protected data members “title” which has “string” data type and “rating” which has “float” data type.
2.The class “CWH” has a parameterized constructor which takes two parameters “s” and “r” and assign their values to the data members “title” and “rating”
The class “CHW” has a pure virtual function void “display” which is declared by 0. The main thing to note here is that as the “display” 
function is a pure virtual function it is compulsory to redefine it in the derived classes.
*/
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display()=0;
};
/*
1.We created a class “CHWVideo” which is inheriting “CWH” class and contains private data members “videoLength” which has “float” data type.
2.The class “CWHVideo” has a parameterized constructor which takes three parameters “s”, “r” and “vl”. The constructor of 
the base class is called in the derived class and the values of the variables “s” and “r” are passed to it. The value of 
the parameter “vl” will be assigned  to the data members “videoLength”
3.The class “CHWVideo” has a function void “display” which will print the values of the data members “title”, “rating” and “videoLength”
*/
class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};  
/*
We created a class “CHWText” which is inheriting “CWH” class and contains private data members “words” which has “int” data type.
The class “CWHText” has a parameterized constructor which takes three parameters “s”, “r” and “wc”. The constructor of 
the base class is called in the derived class and the values of the variables “s” and “r” are passed to it. The value of the parameter “wc” will be assigned  to the data members “words”
The class “CHWText” has a function void “display” which will print the values of the data members “title”, “rating” and “words”
*/
class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};
/*
1.We created a string variable “title”, float variables “rating”, “vlen” and integer variable “words”
2.For the code with harry video class we have assigned “Django tutorial” to the string “title”, “4.56” to the float “vlen” and “4.89” to the float “rating”.
3.An object “djVideo” is created of the data type “CWHVideo” and the variables “title”, “rating” and “vlen” are passed to it.
4.For the code with harry text class we have assigned “Django tutorial text” to the string “title”, “433” to the integer “words” and “4.19” to the float “rating”.
5.An object “djText” is created of the data type “CWHText” and the variables “title”, “rating” and “words” are passed to it.
6.Two pointers array “tuts” is created of the “CWH” type
7.The address of the “djVideo” is assigned to “tuts[0]” and the address of the “djText” is assigned to “tuts[1]”
8.The function “display” is called using pointers “tuts[0]” and “tuts[1]”
*/
int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}