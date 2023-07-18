#include <bits/stdc++.h>

using namespace std;

string gameOfThrones(string s){
    // Complete this function
    int character[26] = {0};
    for(int i = 0; i < s.length(); i++){
        character[s[i] - 'a']++;
    }
    
    bool single_digit = false;
    for(int i = 0; i < 26; i++){
        if(character[i] % 2 != 0){
            if(single_digit) return "NO";
            single_digit = true;
        }
    }
    return "YES";
}

int main() {
    string s;
    cin >> s;
    string result = gameOfThrones(s);
    cout << result << endl;
    return 0;
}
