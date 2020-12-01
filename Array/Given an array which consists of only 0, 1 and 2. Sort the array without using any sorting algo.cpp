#include <iostream>
using namespace std;

int main(){

    int x[]={0,1,2,0,1,2,0,1,2,0,1,2,0,0,2};
    int n=sizeof(x)/sizeof(x[0]);

    int zero=0;
    int one=0;
    int two=0;

    for(int i=0;i<n;i++){
        if(x[i]==0){
            zero++;
        }
        if(x[i]==1){
            one++;
        }
        if(x[i]==2){
            two++;
        }
    }

    while(zero--){
        cout<<"0";
    }
    while(one--){
        cout<<"1";
    }
    while(two--){
        cout<<"2";
    }


    return 0;
}