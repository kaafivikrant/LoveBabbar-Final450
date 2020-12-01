#include <iostream>
using namespace std;

int main(){

    int x[]={-10,1,-2,-1,-2,1,2,1,2,-20,2};
    int n=sizeof(x)/sizeof(x[0]);

    int j=0;
    for(int i=0;i<n;i++){
        if(x[i]<0){
            if(i!=j){
                swap(x[i],x[j]);
                j++;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<x[i]<<" ";
    }

    return 0;
}