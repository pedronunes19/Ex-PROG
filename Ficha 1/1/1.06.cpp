#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double s, a, b, c, area, x1, y1, x2, y2, x3, y3;
    char cs;
    cout << "Enter the coordinates of the three points in format (x, y)" << endl;
    cin >> cs >> x1 >> cs >> y1 >> cs >> cs >> x2 >> cs >> y2 >> cs >> cs >> x3 >> cs >> y3 >> cs;
    a = sqrt(pow(x2-x1, 2) + pow(y2 -y1, 2));
    b = sqrt(pow(x3-x2, 2) + pow(y3 -y2, 2));
    c = sqrt(pow(x1-x3, 2) + pow(y1 -y3, 2));
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "Area: " << area;
    return 0;
}