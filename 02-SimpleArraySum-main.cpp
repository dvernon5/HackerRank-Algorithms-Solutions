#include <iostream>
#include <vector>
using namespace std;

int simpleArraySum(vector<int> array)
{
    int sum = 0;
    
    for (int i = 0; i < array.size(); i++)
    {
        sum += array[i];  // sum = sum + array[i];
    }
    
    return sum;
}

int main(void)
{
    int vectorSize;
    cin >> vectorSize;
    
    vector<int> array(vectorSize);
    
    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }
    
    int result = simpleArraySum(array);
    
    cout << result << endl;
    
    return 0;
}
