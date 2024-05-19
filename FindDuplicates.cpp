///''' For an array which has 1 to n-1 elements from which only 1 element is present two times make perfrom XOR operation on the aaray and make 1 more array with n-1 elements again perform XOR operation''
#include<iostream>
using namespace std;

int main(){
    int arr[7]={1,2,3,4,5,5,6};
    int ans=0;
    int size=7;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];

    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }

    cout<<ans;
}