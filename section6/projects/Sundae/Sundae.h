#ifndef SUNDAE_H
#define SUNDAE_H

#include <string>
#include <vector>
using namespace std;

class Sundae {
    public:
        Sundae(string flavor);
        void addTopping(string topping);
        string getFlavor() const;
        vector<string> getToppings() const;
        void printSundae() const;

    private:
        string flavor;
        vector<string> toppings;
};

#endif
