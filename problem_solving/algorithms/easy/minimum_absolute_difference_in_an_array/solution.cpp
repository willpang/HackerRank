#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
        cin >> a[a_i];
    }
    // your code goes here
    sort(a.begin(), a.end());
    int min = 1000000000;
    for(int a_i = 1; a_i < n; a_i++){
        if(a[a_i] - a[a_i - 1] < min) min = a[a_i] - a[a_i - 1];
    }
    cout << min;
    return 0;
}
