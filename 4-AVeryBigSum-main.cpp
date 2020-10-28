#include <iostream>
#include <vector>
using namespace std;

// Completed aVeryBigSum function below
long aVeryBigSum(vector<long> ar)
{
    long sum = 0;
    
    for (int i = 0; i < ar.size(); i++)
    {
        sum += ar[i];  // sum = sum + ar[i];
    }
    
    return sum;
}

int main(void)
{
    int arraySize;
    cin  >> arraySize;
    
    vector<long> array(arraySize);
    
    for (int i = 0; i < arraySize; i++)
    {
        cin  >> array[i];
    }
    
    long result = aVeryBigSum(array);
    
    cout << result << endl;
    
    return 0;
}
