/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std ;
int main() {
    int rows,cols,n ;
    cin>>n ;
    rows=n ;cols=n ;
    int arr[rows][cols] ;
    int num=1 ;
        for(int i=0 ;i<rows ;i++){
        if(i%2==0){
            for(int j=0 ;j<cols ;j++){
                arr[i][j]=num ;
                num++ ;
            }
    }
    else{
        for(int j=cols-1 ;j>=0 ;j--)
        {
            arr[i][j]=num ;
            num++ ;
        }
        
    }
        }
    for(int i=0 ;i<rows ;i++){
        for(int j=0 ; j<cols ; j++)
        cout<<arr[i][j]<<" " ;
        cout<<endl ;
    }
    return 0 ;
}


