#include <iostream>
#include <random>
#include <ctime>
using namespace std;


int gcd(int n0, int n1){
    if (n0 == n1) return n0;
    if (n0 == 0) return n1;
    if (n1 == 0) return n0;
    do{
        if (n0 < n1) n1 -= n0;
        else n0 -= n1;
    }while (n0 != n1);
    return n0;
}

void sumF(int &numerator, int &denominator, int numerator1, int denominator1){
    int temp = denominator;
    if (denominator == denominator1)
        numerator += numerator1;
    else{
        numerator *= denominator1;
        denominator *= denominator1;
        numerator1 *= temp;
        numerator += numerator1;
        }
}

void subF(int &numerator, int &denominator, int numerator1, int denominator1){
    int temp = denominator;
    if (denominator == denominator1)
        numerator -= numerator1;
    else{
        numerator *= denominator1;
        denominator *= denominator1;
        numerator1 *= temp;
        numerator -= numerator1;
        }
}

void multF(int &numerator, int &denominator, int numerator1, int denominator1){
    numerator *= numerator1;
    denominator *= denominator1;
}

void divF(int &numerator, int &denominator, int numerator1, int denominator1){
    numerator *= denominator1;
    denominator *= numerator1;
}

void reduceFraction(int &numerator, int &denominator){
    int g = gcd(numerator, denominator);
    while (g != 1){
        numerator /= g;
        denominator/= g;
        g = gcd(numerator, denominator);
    }
}

bool readFraction(int &numerator, int &denominator){
    if (denominator == 0)
        return false;
    return true;
}

int main(){
    int num;
    cout << "How many tests? ";
    cin >> num;
    char c = '/';
    for (int i = 1; i <= num; i++){
        srand(time(NULL) + rand());
        int randOP = rand()%(4-1 + 1) + 1;
        int numerator = rand()%(100), denominator = rand()%(100), numerator1 = rand()%(100), denominator1 = rand()%(100);
        if (!readFraction(numerator, denominator)){
            cout << numerator << c << denominator << " is not a valid fraction";
            return 0;
        }
        if (!readFraction(numerator1, denominator1)){
            cout << numerator1 << c << denominator1 << " is not a valid fraction";
            return 0;
        }
        
        if (randOP == 1){
            cout << numerator << c << denominator << " + " << numerator1 << c << denominator1 << " = ";
            sumF(numerator, denominator, numerator1, denominator1);
        }
        else if (randOP == 2) {
            cout << numerator << c << denominator << " - " << numerator1 << c << denominator1 << " = ";
            subF(numerator, denominator, numerator1, denominator1);
        }
        else if (randOP == 3) {
            cout << numerator << c << denominator << " * " << numerator1 << c << denominator1 << " = ";
            multF(numerator, denominator, numerator1, denominator1);
        }
        else if (randOP == 4) {
            cout << numerator << c << denominator << " / " << numerator1 << c << denominator1 << " = ";
            divF(numerator, denominator, numerator1, denominator1);
        }
        
        reduceFraction(numerator, denominator);
        cout << numerator << c << denominator << endl;
    }




    return 0;
}