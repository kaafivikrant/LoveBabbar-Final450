#include <iostream>
using namespace std;

int main(){

    int x[]={1,2,3,4,5,6,7,10,8,0,9};
    int n=sizeof(x)/sizeof(x[0]);
    sort(x,x+11);
    int min=4; //positions
    int max=4;
    cout<<x[min-1]<<endl;
    cout<<x[n-max]<<endl;

    return 0;
}