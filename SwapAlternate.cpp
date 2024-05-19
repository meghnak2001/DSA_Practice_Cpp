
'''Just increament i by 2 ... i+=2'''
'''swap is a function present in cpp'''


#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
}
void SwapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
            /* code */
        }
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    SwapAlternate(arr,size);
    printArray(arr,size);
    return 0;

}