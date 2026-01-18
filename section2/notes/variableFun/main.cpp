#include <iostream>
//using namespace std;

int main() {

    int myInt; //declaration
    myInt = 15; //initialization
    int myInt2 = 15;
    double myDouble = 3.14159;

    int x = 10; //copy initialization
    int y(10); //direct initialization
    int z{ 10 }; //uniform (brace) initialization (often preferred by cpp standard 11+ devs)
    //Brace initialization can throw errors when passed the wrong data type, making it safer in 
    //complex applications (less potential for bugs down the line).  
    //Other methods just cast (i.e 3.14 -> 3 automatically if assigned to an int).

    std::cout << myInt << std::endl;

    //Challenge: print the double
    std::cout << myDouble << std::endl; //Passes



    return 0;
}