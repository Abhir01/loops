#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    // basic square pattern
    // where we are printing n 
    // here i<=n means rows= 1 to n 
    // similarly cols
    // increment always remember

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<n<<" ";
        }
        cout<<endl;
    }

    // similarly by for loop 

    

    return 0;
    
}