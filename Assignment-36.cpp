// 36. W.A.P a program to print a 2 * 2 array using for loop.
#include <iostream>
using namespace std;
int main(){
    int arr [2][2] = {
        {1,1},
        {2,2}
    };
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j ++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}