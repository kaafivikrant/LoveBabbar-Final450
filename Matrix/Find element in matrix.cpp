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

static bool compare(const vector<int>& v, int target)
{
    return v.back() < target;
}

bool findaint(vector<vector<int>> matrix,int target){
    if(matrix.empty() || matrix[0].empty()) return false;
    auto it = lower_bound(matrix.begin(), matrix.end(), target, compare);
    return it != matrix.end() && binary_search(it->begin(), it->end(), target);
}

int main(){

    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    findaint(matrix, target) ? cout << "Found" : cout << "Not Found";

    return 0;
}


