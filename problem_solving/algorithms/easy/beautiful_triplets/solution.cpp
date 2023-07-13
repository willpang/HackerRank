#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, d;
    cin >> n >> d;
    
    int a;
    int arr[20001] = {0};
    int triplet = 0;
    for(int i = 0;i < n; i++){
        cin >> a;
        if(arr[a] == 2) triplet++;
        arr[a + d]++;
        arr[a + d + d]++;
    }
    
    cout << triplet;
    
    return 0;
}
