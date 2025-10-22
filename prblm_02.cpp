#include <iostream>
#include <cmath>   // for M_PI
using namespace std;

int main() {
    double radius, area;
    cout << "Enter the radius: ";
    cin >> radius;
    area = M_PI * radius * radius;
    cout << "Area of circle: " << area << endl;
    return 0;
}
