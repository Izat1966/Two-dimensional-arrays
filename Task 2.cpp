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
    rows=n ; cols=n ;
    int arr[rows][cols] ;
    int sum=0 ;
    int k=0 ;
    for(int i=0 ;i<rows ;i++)
        for(int j=0 ;j<cols ;j++)
            cin>> arr[i][j] ;
    
    for(int i=0 ;i<rows ;i++)
        for(int j=0 ;j<cols ;j++)
        {
            if(arr[i][j]<0 && arr[i][j]%2==0){
            sum=sum+arr[i][j] ;
            k+=1 ;
            }
            
            }
    cout<<k <<" "<<sum<<endl ;
    return 0 ;
}


