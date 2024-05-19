#include<iostream>
using namespace std;

int main(){
    int n, row,col;
    cin>>n;
    row=1;
    
    while(row<=n){
        int space=n-row;
        while(space){
            cout<< " ";
            space=space-1;
         }
        col=1;
        while(col<=row){
            cout<< col;
            col=col+1;
        }
        int start=row-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
    row=row+1;
    }
    
}