#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        string new_str, init;
        for(int len = 1; len <= s.length()/2 && s != new_str; len++){
            init = new_str = s.substr(0, len);
            for(int i = 1; new_str.length() < s.length(); i++)
                new_str += to_string(stoll(init) + i);
        }
        cout << (s == new_str ? "YES " + init : "NO") << endl;
    }
    return 0;
}
