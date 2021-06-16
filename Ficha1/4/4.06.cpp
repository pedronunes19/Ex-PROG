// tecnically is 4.5 as well

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void removeDuplicates(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        for (int j = i + 1; j < v.size(); j++){
            if (v.at(i) == v.at(j)){
                v.erase(v.begin()+j);
                j--;
            }
        }
    }
}

void vectorUnion(const vector<int> &v1, const vector<int> &v2, vector<int> &v3){
    v3.clear(); // just in case v3 isn't empty
    for (int i = 0; i < v1.size(); i++){
        v3.push_back(v1[i]);
    }
    for (int j = 0; j < v2.size(); j++){
        v3.push_back(v2[j]);
    }
    removeDuplicates(v3);
}


void vectorIntersection(const vector<int> &v1, const vector<int> &v2, vector<int> &v3){
    v3.clear(); // just in case v3 isn't empty
    for (int i = 0; i < v1.size(); i++){
        if (find(v2.begin(), v2.end(), v1[i]) != v2.end())
            v3.push_back(v1[i]);
    }
    for (int i = 0; i < v2.size(); i++){
        if (find(v1.begin(), v1.end(), v2[i]) != v1.end())
            v3.push_back(v2[i]);
    }
    removeDuplicates(v3);
}


int main(){
    vector <int> v1 = {1, 1, 1, 1, 2};
    vector <int> v2 = {3, 1, 2, 2, 1, 6};
    vector <int> v3;
    vectorUnion(v1, v2, v3);
    for (int i = 0; i < v3.size(); i++){
        cout << v3[i] << endl;
    }
    cout << endl;
    vectorIntersection(v1, v2, v3);
    for (int i = 0; i < v3.size(); i++){
        cout << v3[i] << endl;
    }
    return 0;
}