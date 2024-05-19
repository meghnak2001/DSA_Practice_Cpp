#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int count=0;
    for (int i = 1; i <= a; i++)
    {
        if(a%i==0){
            count+=1;
        }else{
            continue;
        }
    }
    if (count>2){
        cout<< "It is not a prime number";
    }
    else{
        cout<< "It is a prime number";
    }

}