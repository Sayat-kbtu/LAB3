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
    int s= 0;
    for(int i = 0; i < n; i++){
        s += arr[i];
    }
    cout << "Sum = " << s <<endl;
    return 0;
    


}