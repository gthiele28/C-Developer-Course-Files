#include <iostream>
#include "LinkedList.h"
using namespace std;

int main () {

    LinkedList myList;
    int data;

    myList.add(15);
    myList.add(22);
    myList.add(100);
    myList.add(34);
    myList.add(500);
    myList.add(444);
    myList.add(505);
    myList.add(22);

    myList.set(1515, 0);
    myList.set(2222, 7);

    myList.printList();

    // Challenge: Remove last element from linked list
    data = myList.remove(myList.size() - 1);
    cout << "Removed Last Element: " << data << endl;

    myList.add(1500, 99);

    cout << endl;
    myList.printList();

    cout << endl;

    while (!myList.isEmpty()) {
        data = myList.remove(0);
        cout << "Removed: " << data << endl;
    }

    cout << endl;
    cout << "Final Contents (should be empty): " << endl;

    myList.printList();

    return 0;
}