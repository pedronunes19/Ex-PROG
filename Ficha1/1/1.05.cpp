#include <iostream>
using namespace std;

int main() {
    int t1Hours, t1Minutes, t1Seconds, t2Hours, t2Minutes, t2Seconds;

    cout << "Time1 (hours minutes seconds) ? ";
    cin >> t1Hours >> t1Minutes >> t1Seconds;
    cout << "Time2 ( hours minutes seconds) ";
    cin >> t2Hours >> t2Minutes >> t2Seconds;

    int fDays = 0;
    int fHours = t1Hours + t2Hours;
    int fMinutes = t1Minutes + t2Minutes;
    int fSeconds = t1Seconds + t2Seconds;

    if (fSeconds >= 60){
        fMinutes ++;
        fSeconds -= 60;
    }
    if (fMinutes >= 60){
        fHours ++;
        fMinutes -= 60;
    }
    if (fHours >= 24){
        fDays ++;
        fHours -= 24;
    }
    
    cout << "Time1 + Time2 = " << fDays << " days, " << fHours << " hours, " << 
    fMinutes << " minutes, and " << fSeconds << " seconds" << endl;

    return 0;
}