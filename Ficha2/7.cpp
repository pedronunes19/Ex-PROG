#include <vector>
#include <iostream>
using namespace std;

template <typename T> 

pair<T, T> minMax(const vector <T> &v){
    int min = v[0], max = v[0];
    for (auto it = v.begin() + 1; it != v.end(); it++){
        if (*it < min) min = *it;
        else if (*it > max) max = *it;
    }
    return pair<T, T>(min, max);
}

int main(){
    vector <int> v1 = {1, 3, 5, 32423, 3, -8, 44};
    vector <double> v2 = {1.0, 56.3, 56.4};
    cout << minMax(v1).first << ' ' << minMax(v2).second << "\n"  << minMax(v2).first << ' ' << minMax(v2).second;
}