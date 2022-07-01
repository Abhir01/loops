#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int i=0;


// here i used i=0 
//  but keeping it 1 :-> we have a formula to print -> A+i+j-2

while(i<n){
    int j=1;
    char x='A'+i;

    while(j<=n){
       

        cout<<x<<" ";
        x++;
        j++;

    }
    cout<<endl;
    i++;

    
}

    return 0;
}