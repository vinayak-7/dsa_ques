#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> waveP;
    for(int i  = 0 ; i < mCols ; i++)
    {
        if( i%2 != 0 )
        {
            for(int j = nRows - 1 ; j >= 0 ; j--)
            {
                waveP.push_back(arr[j][i]);
            }
        }
        else
        {
            for(int j = 0 ; j < nRows ; j++)
            {
                waveP.push_back(arr[j][i]);
            }
        }
    }
        return waveP ; 
}
