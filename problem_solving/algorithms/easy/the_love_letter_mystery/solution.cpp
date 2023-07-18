#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countReduce(string text){
    int a, b, op = 0, len = text.length();
    for(int i=0; i<len/2; i++){
        a = text[i];
        b = text[len-i-1];
        op += abs(a - b);
    }
    return op;
}

int main() {
    int n;
    string input;
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> input;
        cout << countReduce(input) << "\n";
    }
    
    return 0;
}
