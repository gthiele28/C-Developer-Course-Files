#ifndef LINKED_STACK_H
#define LINKED_STACK_H

#include "Stack.h"
#include <iostream>
using namespace std;

// ------ Node ------ //
class Node {
    public:
        Node (int data, Node *next) {
            this->data = data;
            this->next = next;
        } //end ctor

        int getData() const {
            return data;
        } //end getData

        void setData(int data) {
            this->data = data;
        } //end setData

        Node* getNext() const {
            return next;
        } //end getNext

        void setNext(Node *next) {
            this->next = next;
        } //end setNext

    private:
        int data;
        Node *next;
};

// ------ Linked Stack ------ //
class LinkedStack : Stack {
    public:
        LinkedStack() : top(nullptr) {
        } //end ctor

        virtual ~LinkedStack() {
            makeEmpty();
        } //end dtor

        void push(int newEntry) override {
            Node *newNode = new Node(newEntry, top);
            top = newNode;
        } //end push

        int pop() override {
            if (isEmpty()) {
                cout << "You cannot pop on an empty stack!" << endl;
                return 0;
            }

            Node *temp = top;
            int data = temp->getData();
            top = top->getNext();

            delete temp;
            temp = nullptr;
            return data;
        } //end pop

        int peek() const override {
            if (isEmpty()) {
                cout << "You cannot pop on an empty stack!" << endl;
                return 0;
            }

            return top->getData();
        } //end peek

        bool isEmpty() const override {
            return top == nullptr;
        } //end isEmpty

        void makeEmpty() override {
            while (top != nullptr) {
                Node *temp = top;
                top = top->getNext();
                delete temp;
            }
        } //end makeEmpty

    private:
        Node *top;
};

#endif