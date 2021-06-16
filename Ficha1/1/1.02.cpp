#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const unsigned PRECISION = 3;
    int a, b, c;
    double mean, aMean, bMean, cMean;

    cout << "Please input 3 integer numbers" << endl;
    cout << "A ? ";
    cin >> a;
    cout << "B ? ";
    cin >> b;
    cout << "C ? ";
    cin >> c;

    mean = (a+b+c) / 3.0;
    aMean = a - mean;
    bMean = b - mean;
    cMean = c - mean;

    cout << fixed << setprecision(PRECISION) << endl;
    cout << "mean = " << mean << endl;
    cout << "A-mean = " << aMean << endl;
    cout << "B-mean = " << bMean << endl;
    cout << "C-mean = " << cMean << endl;

    return 0;
}