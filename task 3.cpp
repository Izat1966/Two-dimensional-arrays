/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int maindiagonalsum = 0;
    for (int i = 0; i < n; i++) {
        maindiagonalsum += arr[i][i];
    }
    int secondarydiagonalsum = 0;
    for (int i = 0; i < n; i++) {
        secondarydiagonalsum += arr[i][n - 1 - i];
    }
    cout  << maindiagonalsum <<" "<<secondarydiagonalsum;
    
    return 0;
}



