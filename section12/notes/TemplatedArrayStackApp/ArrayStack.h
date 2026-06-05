#ifndef TEMPLATED_ARRAY_STACK_H
#define TEMPLATED_ARRAY_STACK_H

#include <iostream>
#include "Stack.h"
using namespace std;

//Have to put on top of every method in separate compilation or if methods are below class header
template <typename T>
class ArrayStack {
    public:
        ArrayStack(int s = 16) : MAX_SIZE(s){
            top = -1;
            mArray = new T[MAX_SIZE];
        } //end ctor

        ~ArrayStack() {
            delete[] mArray;
        }

        void push(const T& newEntry) {
            if (top < MAX_SIZE - 1) {
                top++;
                mArray[top] = newEntry;
            } else {
                cout << "Push failed: Stack is full" << endl;
            }
        } //end push

        T pop() {
            if (!isEmpty()) {
                return mArray[top--];
            } else {
                cout << "Pop failed: Stack is empty" << endl;
                return T();
            }
        } //end pop

        T peek() const {
            if (!isEmpty()) {
                return mArray[top];
            } else {
                cout << "Peek failed: Stack is empty" << endl;
                return T();
            }
        } //end peek

        bool isEmpty() const {
            return top == -1;
        } //end isEmpty

        void makeEmpty() {
            top = -1;
        } //end makeEmpty


    private:
        T *mArray;
        const int MAX_SIZE;
        int top;
};

#endif