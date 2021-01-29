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

    vector<int> x={7,1,5,3,6,4};

    int result=0;
    for(int i=1;i<x.size();i++){
        result+=max(x[i]-x[i-1],0);
    }

    cout<<result;


    return 0;
}



