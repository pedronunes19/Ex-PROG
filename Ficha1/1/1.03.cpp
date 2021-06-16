#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int PI = atan(1) * 4;
    int m, p, r;

    cout <<  "mass of material (kg/m^3) ? "; cin >> p;
    cout << "radius (m) ? "; cin >> r;

    m = (4/3.0) * p * PI * pow(r, 3);

    cout << "sphere's mass is " << m << " kg";
    
    return 0;
}