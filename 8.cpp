#include <iostream>
using namespace std;

int main() {
    int A[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> A[i][j];
        }
    }
    int maxSum = -1;
    int maxRow = 0;
    for(int i = 0; i < 4; i++){
        int rowSum = 0; 
        for(int j = 0; j < 4; j++){
            rowSum += A[i][j];
        }
        if(rowSum > maxSum){
            maxSum = rowSum;
            maxRow = i;
        }
    }
    cout << "Row " << (maxRow + 1) << " has the maximum sum: " << maxSum << endl;

    return 0;
}