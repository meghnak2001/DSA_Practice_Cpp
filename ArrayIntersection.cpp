#include<iostream>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5};
    int n=5;
    vector<int> arr1={1,78,9,6,5,0};
    int m=6;
    vector<int> arr2;

    for(int i=0;i<n;i++){
        int element=arr[i];

        for(int j=0;j<m;j++){
            if(element==arr1[j]){
                arr2.push_back(element);
                arr1[j]=-1;
                break;
            }
        }
    }
    cout<<arr2;
    
}