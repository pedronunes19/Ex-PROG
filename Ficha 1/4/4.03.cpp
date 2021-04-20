#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &v){
    bool lastSort;
    int iter = 0;
    do{
        lastSort = true;
        for(int i = 0; i < v.size() - iter; i++){
            if (v[i] > v[i+1]){
                lastSort = false;
                if (i+1 == v.size() - iter){
                    int temp = v[i];
                    v.erase(v.begin() + i);
                    v.push_back(temp);

                    
                }
                else{
                    int temp = v[i];
                    v[i] = v[i+1];
                    v[i+1] = temp;
                }
            }
        }
        iter += 1;
    }while(!lastSort);
}

int main() {
    vector<int> v;
    int size;
    cout << "Pick vector size: ";
    cin >> size;
    for(int i = 0; i < size; i++){
        int aux;
        cin >> aux;
        v.push_back(aux);
    }
    bubbleSort(v);
    cout << "Rearranged:" << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    
    return 0;
}
