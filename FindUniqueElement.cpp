''' Perform XOR operation on all elements'''

#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,1,3,3};
    int size=5;
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }

    cout<< ans;
}