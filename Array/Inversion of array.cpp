//Inversion of array 

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

    vector<int> x={2,4,1,3,5};
    int n=5;

    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(x[i]>x[j]){
                count++;
            }
        }
    }
    cout<<count;

    return 0;
}



