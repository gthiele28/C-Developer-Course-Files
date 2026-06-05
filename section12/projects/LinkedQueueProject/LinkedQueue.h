#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include "Queue.h"
#include <iostream>
using namespace std;

// ------ Doubly Linked Node ------ //
class Node {
    public:
        Node(int data, Node *next = nullptr, Node *previous = nullptr) {
            this->data = data;
            this->next = next;
            this->previous = previous;
        } //end ctor

        int getData() const {
            return data;
        } //end getData

        int setData(int val) {
            data = val;
        } //end setData

        Node* getNext() const {
            return next;
        } //end getNext

        Node* setNext(Node *n) {
            next = n;
        } //end setNext

        Node* getPrevious() const {
            return previous;
        } //end getNext

        Node* setPrevious(Node *n) {
            previous = n;
        } //end setNext

    private:
        int data;
        Node *next;
        Node *previous;
};

// ------ Linked Queue ------ //
class LinkedQueue : public Queue {
    public:
        LinkedQueue() : front(nullptr), back(nullptr) {
        } //end ctor

        virtual ~LinkedQueue() {
            makeEmpty();
        } //end dtor

        void enqueue(int newEntry) override {
            Node *newNode = new Node(newEntry);

            if (isEmpty()) {
                front = back = newNode;
            } else {
                back->setNext(newNode);
                front->setPrevious(back);
                back = newNode;
            }
        } //end enqueue

        int dequeue() override {
            if (isEmpty()) {
                cout << "Queue is empty" << endl;
                return 0;
            }

            Node *temp = front;
            int data = temp->getData();
            front = front->getNext();
            
            if (front == nullptr) {
                back = nullptr;
            } else {
                front->setPrevious(nullptr);
            }

            delete temp;
            return data;
        } //end dequeue

        int peekFront() const override {
            if (!isEmpty()) {
                return front->getData();
            } else {
                cout << "Queue is empty" << endl;
                return 0;
            }
        } //end peekFront

        bool isEmpty() const override {
            return front == nullptr;
        } //end isEmpty

        void makeEmpty() override {
            while (!isEmpty()) {
                dequeue();
            }
        } //end makeEmpty


    private:
        Node *front;
        Node *back;
};

#endif