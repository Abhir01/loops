#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int i=1;

while(i<=n){
    int j=1;

    // first pattern

    int cnt=1;

    while(j<=n-i+1){
        cout<<cnt;
        cnt++;
        j++;
    }

    // 2nd pattern

    int first=i-1;
    while(first){
        cout<<"**";
        first--;
    }

    // 3rd pattern

    int second=n-i+1;
    while(second)
    {
        cout<<second;
        second--;
    }
    


    cout<<endl;
    i++;
}


    return 0;
}

// done for patterns