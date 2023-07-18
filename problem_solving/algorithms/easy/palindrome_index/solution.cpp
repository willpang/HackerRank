#include <bits/stdc++.h>

using namespace std;

int palindromeIndex(string s){
    // Complete this function
    int len = s.length();
    for(int i = 0; i < len/2; i++){
        if(s[i] != s[len-i-1]){
            for(int j = i; j < len/2; j++){
                if(s[j] != s[len-j-2]) return i;
            }
            return len-i-1;
        }
    }
    return -1;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = palindromeIndex(s);
        cout << result << endl;
    }
    return 0;
}
