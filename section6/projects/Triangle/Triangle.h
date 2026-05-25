#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
    public:
        //Constructors
        Triangle();
        Triangle(double sideA, double sideB, double sideC);

        //Getters
        double getSideA() const;
        double getSideB() const;
        double getSideC() const;

        //Setters
        void setSideA(double newA);
        void setSideB(double newB);
        void setSideC(double newC);

        //Other
        bool isValid() const;
        double perimeter() const;
        double area() const;

    private:
        double sideA;
        double sideB;
        double sideC;

};

#endif