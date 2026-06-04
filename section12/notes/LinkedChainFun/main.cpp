#include <iostream>
#include "Node.h"
using namespace std;

Node* createChain();
void printChain(Node* const head);
void deleteChain(Node*& head);

int main() {

    Node *theHead = createChain();

    printChain(theHead);
    deleteChain(theHead);

    return 0;
}

Node* createChain() {
    Node *head = nullptr;
    for (int i = 0; i < 25; i++) {
        head = new Node(i, head);
    }
    cout << "Chain Created Successfully" << endl;
    return head;
}

//Challenge: Also print number of nodes
void printChain(Node* const head) {
    Node *walker = head;
    int nodeCount = 0;

    while (walker != nullptr) {
        cout << walker->getData() << endl;
        walker = walker->getNext();
        nodeCount++;
    }

    cout << "There are " << nodeCount << " total nodes in the chain" << endl;
}

void deleteChain(Node*& head) {
    Node *nodeToDelete;
    while (head != nullptr) {
        nodeToDelete = head;
        head = head->getNext();
        delete nodeToDelete;
    }
    cout << "Chain Deleted" << endl;
}
