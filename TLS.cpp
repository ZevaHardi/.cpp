#include<iostream>
#include<cmath> 
using namespace std;

int main() {
    int choice;
    float area;

    cout << "Choose a shape:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Trapezium" << endl;
    cout << "5. Parallelogram" << endl;
    cout << "Insert Number:" << endl;
    cin >>choice;

    switch(choice) {
        case 1: {
            float radius;
            cout << "Enter radius of the circle: ";
            cin >> radius;
            area = M_PI * radius * radius;
            cout << "Area of the circle: " << area << endl;
            break;
        }
        case 2: {
            float length, breadth;
            cout << "Enter length and breadth of the rectangle: ";
            cin >> length >> breadth;
            area = length * breadth;
            cout << "Area of the rectangle: " << area << endl;
            break;
        }
        case 3: {
            float base, height;
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of the triangle: " << area << endl;
            break;
        }
        case 4: {
            float length1, length2, height;
            cout << "Enter length of base 1, length of base 2, and height: ";
            cin >> length1 >> length2 >> height;
            area = 0.5 *(length1+length2)*height;
            cout << "Area of the trapezium: " << area << endl;
            break;
        }
        case 5: {
            float base,height;
            cout << "Enter length of base and perpendicular height: ";
            cin >> base>> height;
            area = base*height;
            cout << "Area of the parallelogram: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}