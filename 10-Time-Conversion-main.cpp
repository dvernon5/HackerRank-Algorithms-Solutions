#include <iostream>

using namespace std;

// Completed timeConversion function below.
string timeConversion(string s)
{
    string hourString = s.substr(0,2);
    int hour = stoi(hourString);
    
    size_t finder = s.find("PM");
    if (finder != string::npos)
    {
        if (hour + 12 < 24)
        {
            hourString = to_string(hour + 12);
        }
    }
    else
    {
        if (hour == 12)
        {
            hourString = "00";
        }
    }
    
    return s.replace(0, 2, hourString).erase(s.size() - 2);
}

int main()
{
    string s;
    getline(cin,s);
    
    string result = timeConversion(s);
    
    cout << result << "\n";
    
    return 0;
}

