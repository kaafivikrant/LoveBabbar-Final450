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
#define MAX 1000001
using namespace std;

// Longest Proper Prefix Suffix Array.
/*
 * A string “VTRDF” the prefix are – “”, “V”, “VT”, “VTR”, “VTRD”, “VTRDF”
    but proper prefix are – “”, “V”, “VT”, “VTR”, “VTRD” (length of proper prefix is less than length of given string)
    similarly the suffix are – “”, “F”, “DF”, “RDF”, “TRDF”, “VTRDF”.
 *
 * ababcdabcb LPS array for this is 0012001230
 *
 * */

void lps_func(string txt, vector<int>&Lps){
    // Initilizing the first value to zero as it don't have any repeat charaters
    Lps[0] = 0;
    //length of the iteration
    int len = 0;
    //current pointer
    int i=1;
    //Traversing the whole pattern string
    while (i<txt.length()){
        //if the value of the i and len is same
        if(txt[i]==txt[len]){
            //increment the len
            len++;
            //declare the len to the vector
            Lps[i] = len;
            //increment the value by 1
            i++;
            continue;
        }
        else{
            //If len and i is not same then len is zero and the vector by it is also zero
            if(len==0){
                Lps[i] = 0;
                i++;
                continue;
            }
            else{
                // going back to the value and redeclare it to back same
                len = Lps[len-1];
                continue;
            }
        }
    }
}

void KMP(string pattern,string text){

    // Storing the length of the text and pattern
    int LengthText = text.length();
    int LengthPattern = pattern.length();

    //Initializing the vector with 5 so that changing it to zero will be visually better
    vector<int>Lps(LengthPattern, 5);

    // Creating the LPS array and storing it to Lps vector
    lps_func(pattern,Lps);


    int i=0,j=0;
    // Looping through the Length of the text
    while(i < LengthText){
        
        if(pattern[j]==text[i]){i++;j++;} // If there is a match continue.
        if (j == LengthPattern) {
            cout << "Found at:- " << i - LengthPattern << endl;    // if j==LengthPattern it is confirmed that we have found the pattern and we output the index
            // and update j as Lps of last matched character.
            j = Lps[j - 1];
        }
        else if (i < LengthText && pattern[j] != text[i]) {  // If there is a mismatch
            if (j == 0) {       // if j becomes 0 then simply increment the index i
                i++;
            }
            else { //Update j as Lps of last matched character
                j = Lps[j - 1];
            }
        }
    }
}
int main()
{
    string text = "AABAACAADAABAABAA";
    string pattern = "AABAA";
    KMP(pattern, text);

    return 0;
}