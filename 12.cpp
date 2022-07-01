#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int i=1;
char x='A';

while(i<=n){
    int j=1;
    
    

    while(j<=n){

        cout<<x<<" ";
    
        j++;
    }
    cout<<endl;
    i++;
    x++;
    
}

// also A + i - 1 is applicable 


    return 0;
}