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

//bool subsequence(const char *value1, const char *value2) {
//    int checkvalue1=0, checkvalue2=0;
//
//    while(checkvalue1 < strlen(value1) && checkvalue2 < strlen(value2)){
//        if(value2[checkvalue2]==value1[checkvalue1]){
//            checkvalue1++;
//            checkvalue2++;
//        }else{
//            checkvalue2++;
//        }
//        if(checkvalue1!=strlen(value1)){
//            return 0;
//        }else{
//            return 1;
//        }
//    }
//}
//We can use two pointer and recursion for this on an array also.

bool subsequence(string s, string t) {
    int i = 0, j = 0;
    while (i < s.size() and j < t.size()) {
        if (s[i] == t[j++])
            i++;
    }
    return i == s.size();
}

int main () {
    bool check;
    char value1[100], value2[100];

    cout<<"Enter the first value:- ";
    gets(value1);

    cout<<"Enter the second value:- ";
    gets(value2);

    if (strlen(value1) < strlen(value2))
        check = subsequence(value1, value2);
    else
        check = subsequence(value2, value1);

    cout<<endl;

    (check) ? cout<<"Yes":cout<<"No";

    return 0;
}



