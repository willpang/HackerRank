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
    
    int a;
    int number[101] = {0};
    for(int i = 0;i < n; i++){
        cin >> a;
        number[a]++;
    }
    
    int max = 0;
    for(auto i : number){
        if(i > max) max = i;
    }
    
    cout << n - max;
    
    return 0;
}
