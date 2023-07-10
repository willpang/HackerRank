#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, k, b, total = 0;
    cin >> n >> k;
    vector<int> c(n);
    for(int i = 0; i < n ; i++){
        cin >> c[i];
        total += c[i];
    }
    
    total = (total - c[k]) / 2;
    
    cin >> b;
    
    if(b - total == 0) cout << "Bon Appetit";
    else cout << b - total;
    
    return 0;
}
