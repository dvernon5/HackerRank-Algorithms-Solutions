#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Completed diagonalDifference function below
int diagonalDifference(vector<vector<int>> arr)
{
    int rightToLeftDiagonal = 0;
    int leftToRightDiagonal = 0;
    int length = arr.size();
    
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i == j)
            {
                leftToRightDiagonal += arr[i][j];
            }
            
            if (i + j == length - 1)
            {
                rightToLeftDiagonal += arr[i][j];
            }
        }
    }
    
    return abs(leftToRightDiagonal - rightToLeftDiagonal);
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
