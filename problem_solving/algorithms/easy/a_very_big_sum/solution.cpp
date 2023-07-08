#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, temp;
    long long int tot=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        tot += temp;
    }
    cout << tot;
    return 0;
}
