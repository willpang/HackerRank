#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, n;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> n;
        // Pattern S,F,F,F,F,F,S,S,F,F,F,F,F,S,S,F,F,F,F,F,S,S,...
        if(n % 7 <= 1) cout << "Second\n";
        else cout << "First\n";
    }
    
    return 0;
}
