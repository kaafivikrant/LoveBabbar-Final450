#include <iostream>

using namespace std;


int main(){

    int x[]={1, 3, 4, 5, 7, 9};

    int n=sizeof(x)/sizeof(x[0]);

    int last = x[n-1];

    for(int i=n-1;i>0;i--){
        x[i] = x[i-1];
    }
    x[0]=last;
    
    for(auto i:x){
        cout<<i<<" ";
    }


    return 0;
}