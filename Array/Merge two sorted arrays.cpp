// #include <iostream>
// #include <utility>
// #include <vector>
// #include <numeric>
// #include <queue>
// #include <cmath>
// #include <map>
// #include <string>
// #include <cstring>
// #include <algorithm>
// #include <fstream>
// #include <unordered_map>
// #define ll long long

// using namespace std;


// int main()
// {
//     vector<int> first = {1,2,3,4,5};
//     vector<int> second = {6,7,8,9,10};

//     map<int,bool> final;

//     for(int & i : first)
//         final[i] = true;

//     for(int & i : second)
//         final[i] = true;

//     for(auto i : final)
//         cout<<i.first<<" ";

//     return 0;
// }

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

using namespace std;

void merges(vector<int> x,vector<int> y,int xs,int ys){
    int i=0,j=0;
    vector<int> final;
    while(i<xs && j<ys){
        if(x[i]<y[j]){
            final.push_back(x[i]);
            i++;
        }else{
            final.push_back(y[j]);
            j++;
        }
    }

    //For remaining elements
    while(i<xs){
        final.push_back(x[i]);
        i++;
    }

    while(j<ys){
        final.push_back(y[j]);
        j++;
    }

    //Printing
    for(auto u:final){
        cout<<u<<" ";
    }
}

int main(){
    vector<int> x={1,3,5,7,9,11,13,15};
    vector<int> y={2,4,6,8,10,12,14,16};
    merges(x,y,x.size(),y.size());
}

