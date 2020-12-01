#include <iostream>
#include <vector>
using namespace std;

void printunion(int x[], int y[], int n, int m){

    vector<int> uniono;
    for(int i=0;i<n;i++){
        int d = x[i];
        uniono.push_back(d);
    }

    for(int i=0;i<m;i++){
        int d = y[i];
        uniono.push_back(d);
    }

    sort(uniono.begin(),uniono.end());
    uniono.erase(unique(uniono.begin(),uniono.end()),uniono.end());

    for(auto i:uniono){
        cout<<i<<" ";
    }

}

void printintersection(int x[],int y[],int n,int m){

    int i=0, j=0;
    while(i<m && j<n){
        if(x[i]<y[j])
            i++;
        else if(y[j]<x[i])
            j++;
        else{
            cout<<y[j]<<" ";
            i++;
            j++;
        }
    }
}

int main(){

    int x[]={1, 3, 4, 5, 7, 9};
    int y[]={2, 3, 5, 6, 9};
    int n=sizeof(x)/sizeof(x[0]);
    int m=sizeof(y)/sizeof(y[0]);

    printunion(x,y,n,m);
    cout<<endl;
    printintersection(x,y,n,m);


    return 0;
}