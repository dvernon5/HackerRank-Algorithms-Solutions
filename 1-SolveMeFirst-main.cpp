#include <iostream>
using namespace std;

int solveMeFirst(int number1, int number2)
{
    return number1 + number2;
}

int main(void)
{
    // Two integer number
    int x, y;
    cin >> x >> y;
    
    int result = solveMeFirst(x, y);
    
    cout << result << endl;
    
    return 0;
}
