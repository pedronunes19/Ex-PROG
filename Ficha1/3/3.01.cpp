#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2-x1, 2) + pow(y2 -y1, 2));
}
double area(double x1, double y1, double x2, double y2, double x3, double y3) {
    double s, a, b, c;
    a = distance(x1, y1, x2, y2);
    b = distance(x2, y2, x3, y3);
    c = distance(x3, y3, x1, y1);
    s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    char cs;
    cout << "Enter the coordinates of the three points in format (x, y)" << endl;
    cin >> cs >> x1 >> cs >> y1 >> cs >> cs >> x2 >> cs >> y2 >> cs >> cs >> x3 >> cs >> y3 >> cs;
    cout << "Area: " << area(x1, y1, x2, y2, x3, y3);
    return 0;
}