#include <iostream>
#include <utility>
#include <vector>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
#include <fstream>
#include <unordered_map>
#define ll long long

using namespace std;

int main () {


    vector<int> A = {1, 5, 10, 20, 40, 80};
    vector<int> B = {6, 7, 20, 80, 100};
    vector<int> C = {3, 4, 15, 20, 30, 70, 80, 120};

    int i,j,k;
    i=j=k=0;

    while(i<A.size() && j<B.size() && k<C.size()){

        if(A[i]==B[j] && B[j]==C[k]) {
            cout<<A[i]<<" ";
            i++;
            j++;
            k++;
        }else if(A[i]<B[j]){
            i++;
        }else if(B[j]<C[k]){
            j++;
        }else{
            k++;
        }

    }

    return 0;
}



