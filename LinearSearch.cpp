#include<iostream>
using namespace std;

void LinearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            cout<<"Element Present at index"<< i;
        }else{
            cout<<"Not Found";
        }
    }
}
int main(){
    int n;
    int arr[5]={1,2,3,4,5};
    int size=5;
    cin>>n;

    LinearSearch(arr,size,n);
    return 0;

}