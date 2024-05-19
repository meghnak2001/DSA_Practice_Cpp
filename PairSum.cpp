#include<iostream>
using namespace std;

int main(){
    <vector>int arr={1,2,3,4,5};
    int s=5;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==s){
                vector<int> ans;
                ans.push_back(min(arr[i],arr[j]))
            }
        }
    }
    cout<< ans;
}