
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    for(int i = 1; i <= n; i++)
    {for (int j = 1; j < n; j++){
        cout<< "*";
    }  
    cout<< endl;  
    }
           /* code */
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    for(int i = 1; i <= n; i++)
    {for (int j = 1; j <= i; j++){
        cout<< "*";
    }  
    cout<< endl;  
    }
           /* code */
}


#include<iostream>
using namespace std;

int main(){
    int n,row,col,value;
    cin>> n;
    row=1;
    while(row<=n){
        col=1;
        while(col<=row){
            cout<<col+row-1;
            
            col=col+1;
        }
        cout<< endl;
        row=row+1;
    }
    
}


#include<iostream>
using namespace std;

int main(){
  int n,row,col;
  cin>>n;
  row=1;
  while(row<=n){
      col=1;
      char start='A'+n-row+col-1;
      while(col<=row){
          cout<<start;
          start=start+1;
          col=col+1;
          
      }
      row=row+1;
      cout<<endl;
  }
}
    