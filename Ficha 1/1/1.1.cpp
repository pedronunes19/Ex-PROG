#include <iostream>
using namespace std;

int main() {

    char inputSymbol;   // input symbol

    cout << "Enter a symbol: ";
    cin >> inputSymbol;

    cout << "The ASCII code of '" << inputSymbol << "' is " << int(inputSymbol) << endl;
    
    return 0;
} 