#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int s;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s == arr[i]){
            cout << "Found at index "<< i;
        }
    }
}