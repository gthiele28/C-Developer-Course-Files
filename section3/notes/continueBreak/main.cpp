#include <iostream>
using namespace std;

int main () {

    int count = 0;

    while (count <= 10) {

        if (count == 5) {
            count++;
            continue; //Skip to next loop iteration without performing the rest of the body (i.e. printing 5 in this case)
            //Note we will cause an infinite loop here if we don't increment count.
        }

        if (count == 8) {
            break; //Exit the loop completely, skipping any additional future iterations
            //In this case, no point in incrementing count since the loop is forced to end
        }

        cout << "Count: " << count << endl;
        count++;
    }

    return 0;
}