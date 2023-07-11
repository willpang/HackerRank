#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    
    int like = 2;
    int before = 2;
    
    for(int i = 1; i < n; i++){
        int add = (before * 3) / 2;
        before = add;
        like += add;
    }
    
    cout << like;
    
    return 0;
}
