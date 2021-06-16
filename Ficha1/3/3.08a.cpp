#include <iostream>
using namespace std;

bool readFraction(int &numerator, int &denominator){
    if (denominator == 0)
        return false;
    return true;
}

int main() {
    int numerator, denominator;
    char c;
    cout << "Write a fraction: ";
    cin >> numerator >> c >> denominator;
    if (c != '/'){
        cerr << "Invalid Format";
        return 0;
    }
    else if (readFraction(numerator, denominator))
        cout << "That's a fraction indeed";
    else
        cout << "That's not a valid fraction";
    
    
    return 0;
}