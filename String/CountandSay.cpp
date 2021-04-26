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

string countAndSay(int n)
{
    if(n==1) return "1";
    auto s = countAndSay(n-1) + ' ';
    string out;
    for(auto i=0, j=0; i<size(s); ++i) {
        if (s[i] != s[j]) {
            out += to_string(i - j) + s[i - 1];
            j = i;
        }
    }

    return out;
}

int main() {
    cout<<countAndSay(4);
}
