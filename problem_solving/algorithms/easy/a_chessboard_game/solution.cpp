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
        int x, y;
        cin >> x >> y;
        if((x - 1) % 4 < 2 && (y - 1) % 4 < 2) cout << "Second" << endl;
        else cout << "First" << endl;
    }
    return 0;
}
