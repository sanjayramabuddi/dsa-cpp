#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
} 