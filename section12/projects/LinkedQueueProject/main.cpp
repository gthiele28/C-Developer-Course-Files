#include <iostream>
#include "LinkedQueue.h"
using namespace std;

int main () {

    LinkedQueue queue;

    cout << "Adding to queue..." << endl;

    for (int i = 0; i < 20; i++) {
        queue.enqueue(i - 5);
        cout << (i - 5) << " ";
    }
    cout << endl;

    queue.enqueue(100);

    cout << "Emptying..." << endl;

    while (!queue.isEmpty()) {
        cout << queue.dequeue() << " ";
    }
    cout << endl;

    queue.dequeue();
    
    return 0;
}