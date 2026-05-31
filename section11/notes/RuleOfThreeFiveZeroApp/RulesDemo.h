#ifndef RULES_DEMO_H
#define RULES_DEMO_H

#include <iostream>
#include <cstring>
#include <memory>

using namespace std;

class RuleOfThree{
    public:
        RuleOfThree(const char *text = "default") {
            data = new char[strlen(text) + 1];
            strcpy(data, text);
            cout << "[Three] Constructed with: " << data << endl;
        }

        RuleOfThree(const RuleOfThree& other) {
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
            cout << "[Three] Copied: " << data << endl;
        }

        RuleOfThree& operator=(const RuleOfThree& other) {
            if (this != &other) {
                delete[] data;
                data = new char[strlen(other.data) + 1];
                strcpy(data, other.data);
            }
            cout << "[Three] assigned: " << data << endl;
            return *this;
        }

        ~RuleOfThree() {
            cout << "[Three] Destroyed: " << data << endl;
            delete[] data;
        }

    private:
        char* data;
};

class RuleOfFive{
    private:
        char* data;

    public:
        RuleOfFive(const char* text = "default") {
            data = new char[strlen(text) + 1];
            strcpy(data, text);
            cout << "[Five] Constructed with: " << data << endl;
        }

        RuleOfFive(const RuleOfFive& other) {
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
            cout << "[Five] Copied: " << data << endl;
        }

        RuleOfFive& operator=(const RuleOfFive& other) {
            if (this != &other) {
                delete[] data;
                data = new char[strlen(other.data) + 1];
                strcpy(data, other.data);
            }
            cout << "[Five] assigned: " << data << endl;
            return *this;
        }

        RuleOfFive(RuleOfFive&& other) noexcept {
            data = other.data;
            other.data = nullptr;
            cout << "[Five] Moved!" << endl;
        }

        RuleOfFive& operator=(RuleOfFive&& other) noexcept {
            if (this != &other) {
                delete[] data;
                data = other.data;
                other.data = nullptr;
            }
            cout << "[Five] move-assigned" << endl;
            return *this;
        }

        ~RuleOfFive() {
            cout << "[Five] Destroyed" << endl;
            delete data;
        }
};

// class RuleOfZero{
//     public:
//         RuleOfZero(const char* text = "default") {
//             data = make_unique<char[]>(strlen(text) + 1);
//             strcpy(data.get(), text);
//             cout << "[Zero] Constructed With: " << data.get() << endl;
//         }

//         void print() const {
//             cout << "[Zero] Content: " << data.get() << endl;
//         }

//     private:
//         unique_ptr<char[]> data;
// };

#endif
