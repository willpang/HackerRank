#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string reduceString(string s, int flag){
    if(s.length() == 0) return "Empty String";
    if(flag >= s.length() - 1) return s;
    
    while(flag < s.length() - 1){
        if(s[flag] == s[flag + 1]){
            s.erase(flag,2);
            if(flag != 0) flag--;
            break;
        }
        flag++;
    }
    return reduceString(s, flag);
}

int main() {
    string s;
    cin >> s;
    
    cout << reduceString(s,0);
        
    return 0;
}
