#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include <iostream>
#include "Stack.h"
using namespace std;

class ArrayStack : public Stack {
    public:
        ArrayStack(int s = 16) : MAX_SIZE(s){
            top = -1;
            mArray = new int[MAX_SIZE];
        } //end ctor

        void push(int newEntry) override {
            if (top < MAX_SIZE - 1) {
                top++;
                mArray[top] = newEntry;
            } else {
                cout << "Push failed: Stack is full" << endl;
            }
        } //end push

        int pop() override {
            if (!isEmpty()) {
                return mArray[top--];
            } else {
                cout << "Pop failed: Stack is empty" << endl;
                return 0;
            }
        } //end pop

        int peek() const override {
            if (!isEmpty()) {
                return mArray[top];
            } else {
                cout << "Peek failed: Stack is empty" << endl;
                return 0;
            }
        } //end peek

        bool isEmpty() const override {
            return top == -1;
        } //end isEmpty

        void makeEmpty() override {
            top = -1;
        }


    private:
        int *mArray;
        const int MAX_SIZE;
        int top;
};

#endif