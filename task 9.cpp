/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int na, ma, nb, mb;
    cin >> na >> ma;
    int A[na][ma];
    for (int i = 0; i < na; i++) {
        for (int j = 0; j < ma; j++) {
            cin >> A[i][j];
        }
    }
    cin >> nb >> mb;
    int B[nb][mb];
    for (int i = 0; i < nb; i++) {
        for (int j = 0; j < mb; j++) {
            cin >> B[i][j];
        }
    }
    if (ma != nb) {
        cout << "-1" << endl;
        return 0;
    }
    int nc = na;
    int mc = mb;
    int C[nc][mc];
    for (int i = 0; i < nc; i++) {
        for (int j = 0; j < mc; j++) {
            C[i][j] = 0;
            for (int k = 0; k < ma; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << nc << " " << mc << endl;
    for (int i = 0; i < nc; i++) {
        for (int j = 0; j < mc; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}






