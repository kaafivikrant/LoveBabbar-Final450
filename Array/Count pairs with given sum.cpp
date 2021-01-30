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

    int k=6;
    vector<int> x = {1, 5, 7, 1};

    int count=0;

    for(int i=0;i<x.size();i++){
        for(int j=i;j<x.size();j++){
            if( i!=j && x[i]+x[j]==k){
                count++;
            }
        }
    }

    cout<<count;

    return 0;
}



