#include <iostream>
#include <ctime>
using namespace std;

time_t timeElapsed(){
    static int firstCall = time(NULL);
    long int timeCurr = time(NULL);
    return (timeCurr - firstCall);
}

int main() {
    char c;
    cout << "Press any character to call the function\nPress CTRL-Z to end  ";
    cin >> c;
    while (cin.good()){
        cout << timeElapsed() << endl;
        cin >> c;
    }
    
    return 0;
}