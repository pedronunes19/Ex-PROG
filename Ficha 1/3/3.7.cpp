#include <iostream>
using namespace std;

bool readInt(int &x){
    cin >> x;
    if (cin.good() && cin.peek() == '\n'){
        cin.clear();
        cin.ignore(10000, '\n');
        return true;
    }
    else{
        cin.clear();
        cin.ignore(10000, '\n');
        return false;
    }


}

int main() {
    int num;
    cout << "Write a number: ";
    if (readInt(num))
        cout << num;
    
    
    return 0;
}