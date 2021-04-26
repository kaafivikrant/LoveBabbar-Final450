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
    string y = "DCBA";

    int count = 0;

    for(int i=0, j=x.size()-1;i<x.size();i++){
        if(x[i] == y[j--]){
            count++;
        }
    }

    count == x.size() ? cout<<"Yes" : cout<<"No";
}
