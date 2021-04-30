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

class Solution {
public:
    static int calculate(const string& s) {

        stack<int> temp;
        int finalSum = 0;
        int sign = 1;

        // Traversing through the whole string
        for(int i=0;i<s.size();i++){
            // Checking if the char is number or not
            if(s[i]>= '0' && s[i]<= '9'){
                long int tempNum = 0;
                // Looping till the char is number to get a number with more than 1 digit
                while(i<s.size() && s[i]>='0' && s[i]<= '9'){
                    // adding number to make a static digit
                    tempNum = tempNum * 10 + s[i] - '0';
                    i++;
                }
                // updating the finalsum with the sign
                finalSum += tempNum * sign;
                i--;
            }else{
                // if the char is + then change the sign to 1
                if(s[i] == '+'){
                    sign = 1;
                // if the char is - then change the sign to -1
                }else if(s[i] == '-'){
                    sign = -1;
                // if the char is ( then push values into the finalsum and sign and update
                }else if(s[i] == '('){
                    temp.push(finalSum);
                    temp.push(sign);
                    finalSum = 0;
                    sign = 1;
                // if the char is ) then we have the final value update it to the finalsum
                }else if(s[i] == ')'){
                    finalSum = temp.top()*finalSum;
                    temp.pop();
                    finalSum+=temp.top();
                    temp.pop();
                }
            }
        }
        return finalSum;
    }
};

int main(){

}