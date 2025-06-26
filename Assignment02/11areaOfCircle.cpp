#include <iostream>
using namespace std;

float areaCircle(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = areaCircle(radius);
    cout << "The area of the circle is: " << area << endl;
}