#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int i=1;

while(i<=n){
    
    int space=n-i;

    // space print

    while(space){
        cout<<" ";
        space--;
    }

    int j=1;
    int cnt=1;
    
    // first triangle

    while(j<=i){
        cout<< cnt;
        cnt++;
        j++; 
    }

    // second triangle

    // kaha se start hora dekho:)
    
    int startsecond=i-1;

    while(startsecond){
        cout<<startsecond;
        startsecond--;
    }


    
    // int second=i-1;
    // while(second>=1){
    //     cout<<second;
    //     second--;
    // }

    cout<<endl;
    i++;
}

    return 0;
}

