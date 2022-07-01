#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*"<<" ";
             j++;
        }
        cout<<endl;
        i++;

    }

    // yaha for traingle pattterns
    // inner loop j ko --> less than equal to i tak..
    // when i==1 than j==1
    // whne i==1 than j==1 j==2
    // and so on
    
return 0;
}