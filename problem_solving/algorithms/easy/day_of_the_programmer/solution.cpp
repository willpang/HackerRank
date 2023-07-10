#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function
    if(year < 1918){ //Julian
        if(year % 4 == 0) return "12.09." + to_string(year); // leap year
        return "13.09." + to_string(year); // not leap year
    }
    else if(year == 1918){ //Mixed
        return "26.09.1918";
    }
    else{ //Gregorian
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return "12.09." + to_string(year); // leap year
        return "13.09." + to_string(year); // not leap year
    }
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
