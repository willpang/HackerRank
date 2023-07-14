#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, k;
    cin >> n >> k;
    
    int page = 1;
    int special = 0;
    for(int i = 0;i < n;i++){
        int t;
        cin >> t;
        
        int fill = 0;
        for(int j = 1; j <= t; j++){
            if(fill == k){
                page++;
                fill = 1;
            }
            else fill++;
            if(j == page) special++;
        }
        page++;
    }
    cout << special;
    
    return 0;
}
