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
    
    string step;
    cin >> step;
    
    int level = 0, valley = 0;
    for(int i = 0; i < n; i++){
        if(step[i] == 'U') level++;
        else level--;
        
        if(step[i] == 'U' && level == 0) valley++;
    }
    
    cout << valley;
    
    return 0;
}
