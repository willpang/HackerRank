#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b){
    return a * b / gcd(a,b);
}

bool isDiv(int num, vector<int>& div){
    for(int i=0; i<div.size(); i++){
        if(num % div[i] != 0) return false;
    }
    return true;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
        cin >> b[b_i];
    }
    
    int c_lcm = a[0];
    for(int i=1; i<a.size(); i++){
        c_lcm = lcm(c_lcm,a[i]);
    }
    
    int c_gcd = b[0];
    for(int i=1; i<b.size(); i++){
        c_gcd = gcd(c_gcd,b[i]);
    }
    
    //int min = *min_element(b.begin(), b.end());
    
    vector<int> divB;
    for(int i=1; i<=pow(c_gcd,0.5); i++){
        if(c_gcd % i == 0) divB.push_back(i);
    }
    
    int len = divB.size();
    if(c_gcd / divB[len-1] == divB[len-1]) len--;
    
    for(int i=len-1; i>=0; i--){
        divB.push_back(c_gcd/divB[i]);
    }

    int x = 0;
    for(int i=0; i<divB.size(); i++){
    //    if(isDiv(divB[i],a)) x++;
        if(divB[i] % c_lcm == 0) x++;
    }
    cout << x;
    
    return 0;
}
