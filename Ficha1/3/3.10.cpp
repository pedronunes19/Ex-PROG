#include <iostream>
using namespace std;

unsigned long long factorial_ite(unsigned int num){
    unsigned long long fac = 1;
    for (int i = 1; i <= num; i++){
        fac *= i;
    }
    return fac;
}

unsigned long long factorial_rec(unsigned int num){
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial_rec(num - 1);
}

int main() {
    unsigned int n;
    cout << "Input a number in the interval [0, 20]: ";
    cin >> n;
    if (n > 20){
        cerr << n << " is not in the interval [0, 20]";
        return 0;
    }
    cout << "Iterative: " << n << "! = " << factorial_ite(n) << endl
         << "Recursive: " << n << "! = " << factorial_rec(n);

    
    return 0;
}