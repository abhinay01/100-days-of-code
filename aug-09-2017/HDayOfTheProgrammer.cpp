#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function
    string result="";
    if(year>=1700 && year<1918)
    {
        if(year%4==0)
        {
         result="12.09." +to_string(year); 
        }
        else
        {
            result="13.09." +to_string(year);
        }
    }
    else if(year >1918 && year <=2700)
    {
        if(year%400==0 || (year%4==0 && year%100!=0))
        {
            result="12.09." +to_string(year);
        }
        else
        {
            result="13.09." +to_string(year);
        }
        
    }
    else if(year==1918)
    {
        result="26.09." +to_string(year);
    }
    return result;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
