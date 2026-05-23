#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;
class House {
    public:
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