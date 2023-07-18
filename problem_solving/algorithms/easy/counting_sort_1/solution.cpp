#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, input, *number = new int[100];
    fill_n(number, 100, 0);
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> input;
        number[input]++;
    }
    for(int i=0;i<100;i++) cout << number[i] << " ";
    
    return 0;
}
