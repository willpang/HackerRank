#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int n, m;
        cin >> n >> m;
        if(n % 2 == 1 && m != 1) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}
