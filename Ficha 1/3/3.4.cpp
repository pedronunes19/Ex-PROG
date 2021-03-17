#include <iostream>
#include <cmath>
using namespace std;

double round(double x, unsigned n){
    int nx = pow(10, n);
    return floor(x * nx + 0.5) / nx;
}

int main() {
    double x;
    unsigned n;
    cout << "Input a number to round: ";
    cin >> x;
    cout << "Input the number of decimal places: ";
    cin >> n;
    cout << round(x, n);
    
    return 0;
}