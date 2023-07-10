#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
        cin >> a[a_i];
    }
    // write your code here
    int pair = 0;
    for(int a_i = 0; a_i < a.size(); a_i++){
        for(int b_i = a_i + 1; b_i < a.size(); b_i++){
            if((a[a_i] + a[b_i]) % k == 0) pair++;
        }
    }
    cout << pair;
    
    return 0;
}
