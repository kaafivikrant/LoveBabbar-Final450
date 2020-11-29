#include <iostream>
using namespace std;

int main(){

    int x[]={1,2,3,4,5,6,7,10,8,0,9};

    int min=INT16_MAX;
    for(int i=0;i<sizeof(x)/sizeof(x[0]);i++){
        if(x[i]<min){
            min=x[i];
        }
    }
    cout<<min<<endl;

    int max=INT16_MIN;
    for(int i=0;i<sizeof(x)/sizeof(x[0]);i++){
        if(x[i]>max){
            max=x[i];
        }
    }
    cout<<max<<endl;

    return 0;
}