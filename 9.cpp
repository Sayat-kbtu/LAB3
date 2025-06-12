#include <iostream>
using namespace std;

int main() {
    int A[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> A[i][j];
        }
    }
    cout <<"Main: ";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                cout << A[i][j]<< " ";
            }
        }
    }
    cout << endl;
    cout <<"Secondary: ";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                cout<< A[i][3-j]<< " ";
            }
        }
    }

    
    // cout <<"Main: " << A[0][0] << " " <<A[1][1]<< " " << A[2][2] << " " <<A[3][3] << endl;
    // cout <<"Secondary: " << A[0][3] << " " <<A[1][2]<< " " << A[2][1] << " " <<A[3][0] << endl;
    return 0;
}