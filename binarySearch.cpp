#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int num){
    int start,end;

    start=0;
    end=size-1;
    int mid=start+ (end-start)/2;
    while(start<=end){
        if(arr[mid]==num){
            return mid;
        }
        if(arr[mid]>num){
            start=mid-1;

        }
        if(arr[mid]<num){
            end=mid+1;
        }
        mid=start+ (end-start)/2;
    }
    return -1;
}


int main(){

    int array[5]={1,2,6,7,9};
    int a= binarySearch(array,5,9);
    cout << a;

    return 0;
}