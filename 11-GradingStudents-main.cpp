#include <iostream>
#include <vector>
#include <string>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 *  Complete the 'gradingStudents' function below.
 *
 *  The function is expected to return an INTEGER_ARRAY.
 *  The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades)
{
    int length = grades.size();
    
    for (int i = 0; i < length; i++)
    {
        if (grades[i] < 40)
        {
            if (40 - grades[i] < 3)
            {
                grades[i] = 40;
            }
            else
            {
                grades[i];
            }
        }
        
        if (grades[i] >= 40 && grades[i] < 45)
        {
            if (45 - grades[i] < 3)
            {
                grades[i] = 45;
            }
            else
            {
                grades[i];
            }
        }
        
        if (grades[i] >= 45 && grades[i] < 50)
        {
            if (50 - grades[i] < 3)
            {
                grades[i] = 50;
            }
            else
            {
                grades[i];
            }
        }
        
        if (grades[i] >= 50 && grades[i] < 55)
        {
            if (55 - grades[i] < 3)
            {
                grades[i] = 55;
            }
            else
            {
                grades[i];
            }
        }
        
        if (grades[i] >= 55 && grades[i] < 60)
        {
            if (60 - grades[i] < 3)
            {
                grades[i] = 60;
            }
            else
            {
                grades[i];
            }
        }
        
        if (grades[i] >= 60 && grades[i] < 65)
        {
            if (65 - grades[i] < 3)
            {
                grades[i] = 65;
            }
            else
            {
                grades[i];
            }
        }
        
        if (grades[i] >= 65 && grades[i] < 70)
        {
            if (70 - grades[i] < 3)
            {
                grades[i] = 70;
            }
            else
            {
                grades[i];
            }
        }
        
        if (grades[i] >= 70 && grades[i] < 75)
        {
            if (75 - grades[i] < 3)
            {
                grades[i] = 75;
            }
            else
            {
                grades[i];
            }
        }
        
        if (grades[i] >= 75 && grades[i] < 80)
        {
            if (80 - grades[i] < 3)
            {
                grades[i] = 80;
            }
            else
            {
                grades[i];
            }
        }
        
        if (grades[i] >= 80 && grades[i] < 85)
        {
            if (85 - grades[i] < 3)
            {
                grades[i] = 85;
            }
            else
            {
                grades[i];
            }
        }
        
        if (grades[i] >= 85 && grades[i] < 90)
        {
            if (90 - grades[i] < 3)
            {
                grades[i] = 90;
            }
            else
            {
                grades[i];
            }
        }
        
        if (grades[i] >= 90 && grades[i] < 95)
        {
            if (95 - grades[i] < 3)
            {
                grades[i] = 95;
            }
            else
            {
                grades[i];
            }
        }
        
        if (grades[i] >= 95 && grades[i] <= 100)
        {
            if (100 - grades[i] < 3)
            {
                grades[i] = 100;
            }
            else
            {
                grades[i];
            }
        }
    }
    
    return grades;
}

int main(void)
{
    string grades_count_temp;
    getline(cin, grades_count_temp);
    
    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));
    
    vector<int> grades(grades_count);
    
    for (int i = 0; i < grades_count; i++)
    {
        string grades_item_temp;
        getline(cin, grades_item_temp);
        
        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));
        
        grades[i] = grades_item;
    }
    
    vector<int> result = gradingStudents(grades);
    
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        
        if (i != result.size() - 1)
        {
            cout << "\n";
        }
    }
    
    cout << "\n";
    
    return 0;
    
}

string ltrim(const string &str)
{
    string s(str);
    
    s.erase
    (
        s.begin(), find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
    
    return s;
}

string rtrim(const string &str)
{
    string s(str);
    
    s.erase
    (
     find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(), s.end()
    );
    
    return s;
}
