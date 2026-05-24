#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;
class House {
    public:
    //Constructor: automatically called when an object is created
        House();

        //Challenge: create + use a parameterized constructor
        House(int numStories, int numWindows, string color);
    
    //Destructor: used to "destroy" an object and free up memory
        virtual ~House() final;
        //Mark destructors with virtual keyword if there is a chance they
        //will be inherited from
        //final keyword: prevents overriding of the function by any inheriting classes

    //"Setters"
        void setNumStories(int numStories);
        void setNumWindows(int numWindows);
        void setColor (string color);

    //"Getters"
        int getNumStories() const;
        int getNumWindows() const;
        string getColor() const;

    //Misc
        void print() const;

    private:
        int numStories;
        int numWindows;
        string color;
};

#endif
