#include <bits/stdc++.h>

using namespace std;

int anagram(string s){
    // Complete this function
    int len = s.length();
    if(len % 2 == 1) return -1;
    
    int s1[26] = {0};
    int s2[26] = {0};
    
    for(int i = 0; i < len / 2; i++){
        s1[s[i] - 'a']++;
    }
    for(int i = len / 2; i < len; i++){
        s2[s[i] - 'a']++;
    }
    
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(s1[i] > s2[i]) ans += s1[i] - s2[i];
    }
    return ans;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = anagram(s);
        cout << result << endl;
    }
    return 0;
}
