#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int arr_2d[4][4];
    for (int i=0;i<4;i++){
        for(int j =0;j<4;j++){
            cin >> arr_2d[i][j];
            sum += arr_2d[i][j];
        }
        cout << sum << endl;
        sum = 0;
        
    }
    return 0;
}