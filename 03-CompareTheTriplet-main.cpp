#include <iostream>
#include <vector>
using namespace std;

// Completed compareTriplets function below
vector<int> compareTriplets(vector<int> aliceArray, vector<int> bobArray)
{
   vector<int> result;
    int aliceScore = 0, bobScore = 0;
    
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] > b[i])
        {
            ++aliceScore;
        } else if (a[i] < b[i]) {
            ++bobScore;
        }
    }
    
    result.push_back(aliceScore);
    result.push_back(bobScore);
    
    return result;
}


int main(void)
{
    int arraySize;
    
    cout << "Please enter a number: ";
    cin  >> arraySize;
    
    vector<int> aliceArray(arraySize);
    
    // Fill in the vector for alice.
    for (int i = 0; i < arraySize; i++)
    {
        cout << "aliceArray[" << i << "] = ";
        cin  >> aliceArray[i];
    }
    
    vector<int> bobArray(arraySize);
    
    // Fill in the vector for bob.
    for (int i = 0; i < arraySize; i++)
    {
        cout << "bobArray[" << i << "] = ";
        cin  >> bobArray[i];
    }
    
    vector<int> result = compareTriplets(aliceArray, bobArray);
    
    // Display the result.
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
