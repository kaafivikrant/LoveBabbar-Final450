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

void spiralmatrix(const vector<vector<int>>& matrix,int Srow,int Scolumn, int row, int column){

        if (Srow >= row or Scolumn >= column)
            return;


        for (int p = Srow; p < column; p++)
            cout << matrix[Srow][p] << " ";


        for (int p = Srow + 1; p < row; p++)
            cout << matrix[p][column - 1] << " ";


        if ((row - 1) != Srow)
            for (int p = column - 2; p >= Scolumn; p--)
                cout << matrix[row - 1][p] << " ";


        if ((column - 1) != Scolumn)
            for (int p = row - 2; p > Srow; p--)
                cout << matrix[p][Scolumn] << " ";

    spiralmatrix(matrix, Srow + 1, Scolumn + 1, row - 1, column - 1);
}


    int main()
{
    vector<vector<int>> matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int row = matrix.size();
    int column = matrix[0].size();
    spiralmatrix(matrix,0,0,row,column);
    //cout<<row<<" "<<column;

    return 0;
}


