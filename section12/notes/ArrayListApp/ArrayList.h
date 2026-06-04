#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>
#include "List.h"
using namespace std;

class ArrayList : public List {
    public:
        ArrayList(int s = 16) : MAX_SIZE(s) {
            mArray = new int[MAX_SIZE];
            mNumElements = 0;
        } //end constructor

        void add(int newEntry) override {
            if (mNumElements >= MAX_SIZE) {
                cout << "List is full!" << endl;
                return;
            }
            //Increment numElements and assign location properly
            mArray[mNumElements++] = newEntry;
        } //end add

        void add(int newEntry, int position) override {
            if (mNumElements >= MAX_SIZE) {
                cout << "List is full!" << endl;
                return;
            }

            if (position < 0 || position > mNumElements) {
                cout << "Position out of range" << endl;
                return;
            }

            for (int i = mNumElements; i > position; i--) {
                mArray[i] = mArray[i - 1]; //Shift everything past index one to the right
            }

            mArray[position] = newEntry;
            mNumElements++;
        } //end add

        void set(int newEntry, int position) override {
            if (position < 0 || position > mNumElements) {
                cout << "Invalid position for set" << endl;
                return;
            }
            mArray[position] = newEntry;
        } //end set

        bool contains (int entry) const override {
            for (int i = 0; i < mNumElements; i++) {
                if (mArray[i] == entry) {
                    return true;
                }
            }
            return false;
        } //end contains

        int find(int entry) const override {
            for (int i = 0; i < mNumElements; i++) {
                if (mArray[i] == entry) {
                    return i;
                }
            }
            return -1;
        } //end find

        int remove(int position) override {
            if (position < 0 || position > mNumElements) {
                cout << "Position out of range" << endl;
                return -1;
            }

            int value = mArray[position];

            for (int i = position; i < mNumElements - 1; i++) {
                mArray[i] = mArray[i + 1];
            }

            mNumElements--;
        } //end remove

        int size() const override {
            return mNumElements;
        } //end size

        void makeEmpty() override {
            mNumElements = 0;
        } //end makeEmpty

        bool isEmpty() const override {
            return mNumElements == 0;
        } //end isEmpty

        void printList() const override {
            for (int i = 0; i < mNumElements; i++) {
                cout << "Index " << i << ": " << mArray[i] << endl;
            }
        } //end printList


    private:
        int *mArray;
        const int MAX_SIZE;
        int mNumElements;
};

#endif