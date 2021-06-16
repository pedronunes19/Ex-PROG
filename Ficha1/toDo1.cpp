/* Premise: Write a program that uses cin >> , cin.peek() and cin.ignore()
            to read the integer number contained in "#ABcdE12345$Esc", that is 12345,
            discarding all the remaining symbols. (CLASS SUGESTION)
*/

#include <iostream>
using namespace std;

int main() {
    int a;
    while(cin){

    
        if (isdigit(cin.peek())){
            cin >> a; cout << a;
        }
        else cin.ignore();
        
        
    }
    return 0;
}
