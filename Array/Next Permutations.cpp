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

void nextpermutations(vector<int>&nums){
    int cur = 0;
    for (int i = nums.size()-1; i > 0; --i) {
        if (nums[i-1] < nums[i]) {
            cur = i;
            int exchange = i;
            for (int j = i; j < nums.size(); ++j)
                if (nums[j] > nums[i-1])
                    exchange = j;
                else
                    break;

            swap(nums[exchange], nums[cur-1]);
            break;
        }
    }
    reverse(nums.begin()+cur,nums.end());
}


int main()
{
    vector<int> number = {1,3,4,5,6,7};
    nextpermutations(number);
    for(auto &u: number)
        cout<<u<<" ";

    return 0;
}


