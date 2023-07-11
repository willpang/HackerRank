#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reversed(int x){
    int r_x = 0;
    
    while(x != 0){
        r_x += x % 10;
        r_x *= 10;
        x /= 10;
    }
    
    r_x /= 10;
    
    return r_x;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i, j, k;
    cin >> i >> j >> k;
    
    int b_d = 0;
    for(int c = i; c <= j; c++){
        if(abs(c - reversed(c)) % k == 0) b_d++;
    }
    
    cout << b_d;
    
    return 0;
}
