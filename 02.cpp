#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

//    int i=1;
//    while(i<=n){
//        int j=1;
//        while(j<=n){
//            cout<<n-j+1<<" ";
//            j++;
//        }
//        cout<<endl;
//        i++;
//    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<n-j<<" ";
        }
        cout<<endl;
    }

    // here for loop using different values see:)
    // that is bcz our for is starting from 0 




    return 0;
}