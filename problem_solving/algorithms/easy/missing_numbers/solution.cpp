#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    cin >> m;
    vector <int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int temp1[101] = {0}, temp2[101] = {0};
    int minimal = min(a[0],b[0]);
    
    for(int i = 0; i < n; i++) temp1[a[i] - minimal]++;
    for(int i = 0; i < m; i++) temp2[b[i] - minimal]++;
    
    for(int i = 0; i < 100; i++){
        if(temp1[i] != temp2[i]) cout << i + minimal << " ";
    }
    
    return 0;
}
