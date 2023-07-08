#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, num, tot=0, temp=0;
    cin >> n;
    for(int i=0;i<n*n;i++){
        cin >> num;
        if((i%n)-temp==0){
            tot += num;
        }
        if((i%n)+temp==n-1){
            tot -= num;
        }
        if(i%n==n-1){
            temp++;    
        }
    }
    if(tot>=0) cout << tot;
    else cout << tot * -1;
    return 0;
}
