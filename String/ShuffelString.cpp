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
#include <unordered_set>
#include <set>
#include <list>
#include <stack>
#define ll long long
#define dd double
#include <stack>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    string x = "ABCD";
    string y = "1234";
    string final;

    for(int i=0;i<x.size()-1;i++){
        final.push_back(x[i]);
        final.push_back(y[i]);
    }

    for(auto o: final){
        cout<<o;
    }
}
