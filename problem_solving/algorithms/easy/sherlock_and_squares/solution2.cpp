#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    
    for(int i = 0;i < t;i++){
        int a, b;
        cin >> a >> b;
        
        cout << floor(pow(b,0.5)) - ceil(pow(a,0.5)) + 1 << endl;
    }
    
    return 0;
}
