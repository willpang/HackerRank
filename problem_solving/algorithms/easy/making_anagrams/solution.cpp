#include <bits/stdc++.h>

using namespace std;

int makingAnagrams(string s1, string s2){
    // Complete this function
    vector <int> c1(26);
    vector <int> c2(26);
    int deletion = 0;
    
    for(int i = 0; i < s1.size(); i++){
        c1[s1[i] - 'a']++;
    }
    
    for(int i = 0; i < s2.size(); i++){
        c2[s2[i] - 'a']++;
    }
    
    for(int i = 0; i < 26; i++){
        deletion += abs(c1[i] - c2[i]);
    }
    
    return deletion;
}

int main() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int result = makingAnagrams(s1, s2);
    cout << result << endl;
    return 0;
}
