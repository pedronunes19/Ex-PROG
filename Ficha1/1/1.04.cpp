#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f, x, y;
    cout << "Input the values a, b, c, d, e, f for the equations: a*x + b*y = c" << endl <<
            "                                                     d*x + e*y = f" << endl;
    cin >> a  >> b >> c >> d >> e >> f;

    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);

    cout << "x=" << x;
    cout << "y=" << y;
    
    return 0;
}