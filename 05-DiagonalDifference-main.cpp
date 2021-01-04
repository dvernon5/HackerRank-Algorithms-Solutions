#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Completed diagonalDifference function below
int diagonalDifference(vector<vector<int>> arr)
{
    int rightToLeftDiagonal = 0;
    int leftToRightDiagonal = 0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i == j)
            {
                rightToLeftDiagonal += arr[i][j];
            }
            
            if (i + j == arr.size() - 1)
            {
                leftToRightDiagonal += arr[i][j];
            }
        }
    }
    
    return abs(rightToLeftDiagonal - leftToRightDiagonal);
} // end of diagonalDifference

int main(void)
{
    int vectorSize;
    cin >> vectorSize;
    
    vector<vector<int>> array(vectorSize, vector<int>(vectorSize));
    
    // Fill in array from keyboard
    for (int i = 0; i < vectorSize; i++)
    {
        for (int j = 0; j < vectorSize; j++)
        {
            cin >> array[i][j];
        }
    }
    
    int result = diagonalDifference(array);
    
    cout << result << endl;
    
    return 0;
} // End of main
