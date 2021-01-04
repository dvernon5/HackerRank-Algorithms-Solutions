#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Completed plusMinus Function below
void plusMinus(vector<int> arr)
{
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            positiveCount++;
        }
        else if (arr[i] < 0)
        {
            negativeCount++;
        }
        else
        {
            zeroCount++;
        }
    }
    
    double positiveRatio = (double)positiveCount / arr.size();
    double negativeRatio = (double)negativeCount / arr.size();
    double zeroRatio     = (double)zeroCount / arr.size();
    
    cout << fixed << showpoint;
    cout << setprecision(6);
    
    cout << positiveRatio << endl;
    cout << negativeRatio << endl;
    cout << zeroRatio << endl;
}// End of plusMinus Function

int main(void)
{
    int vectorSize;
    cin >> vectorSize;
    
    vector<int> array(vectorSize);
    
    // Fill in array from keyboard
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> array[i];
    }
    
    plusMinus(array);
    
    return 0;
}//End of main
