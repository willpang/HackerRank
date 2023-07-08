#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, temp=0;
    cin >> n;
    for(int i=0;i<n*n;i++){
        if(i%n+temp>=n-1) cout << "#";
        else cout << " ";
        
        if(i%n==n-1){
            temp++;
            cout << endl;
        }
    }
    return 0;
}
