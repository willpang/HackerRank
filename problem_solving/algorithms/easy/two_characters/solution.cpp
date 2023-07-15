#include <bits/stdc++.h>

using namespace std;

int maxLen(string s){
    // Complete this function
    
    if(s.length() <= 1) return 0;
    
    char gra[26][26];
    int idx[26][26] = {0};
    
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < 26; j++){
            if(gra[s[i] - 'a'][j] != s[i])
                idx[s[i] - 'a'][j] = idx[j][s[i] - 'a'] += idx[s[i] - 'a'][j] == -1 ? 0 : 1;
            else idx[s[i] - 'a'][j] = idx[j][s[i] - 'a'] = -1;
            gra[s[i] - 'a'][j] = gra[j][s[i] - 'a'] = s[i];
        }
    }
    
    int max = 0;
    for(int i = 0; i < 26; i++){
        for(int j = i + 1; j < 26; j++){
            if(idx[i][j] > max) max = idx[i][j];
        }
    }
    
    return max;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = maxLen(s);
    cout << result << endl;
    return 0;
}
