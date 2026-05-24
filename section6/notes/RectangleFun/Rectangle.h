#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    public:
    // Constructors
        Rectangle();
        Rectangle(double length, double width);
    
    //Getters
        double getLength() const;
        double getWidth() const;

    //Setters
        void setLength(double length);
        void setWidth(double width);

    //Other
        double area() const;

        //Challenge: add + test a perimeter() method
        double perimeter() const;

    private:
        double length;
        double width;
};

#endif
