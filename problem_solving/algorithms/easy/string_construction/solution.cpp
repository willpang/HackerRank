#include <bits/stdc++.h>

using namespace std;

int stringConstruction(string s){
    // Complete this function
    int character[26] = {0};
    int total = 0;
    
    for(int i = 0; i < s.length(); i++){
        if(character[s[i] - 'a'] == 0){
            character[s[i] - 'a'] = 1;
            total++;
        }
    }
    
    return total;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = stringConstruction(s);
        cout << result << endl;
    }
    return 0;
}
