#include <iostream>
using namespace std;

// Completed staircase function below
void staircase(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j)
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
        }
        
        cout << endl;
    }
}

int main(void)
{
    int n;
    cin >> n;
    
    staircase(n);
    
    return 0;
}
