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

long count_a(string s, long end){
    long total = 0;
    for(long i = 0;i < end;i++){
        if(s[i] == 'a') total++;
    }
    return total;
}

int main(){
    string s;
    cin >> s;
    long n;
    cin >> n;
    
    /*
    long len = s.length();
    long total_a = count_a(s,len);
    
    if(n < len){
        cout << count_a(s,n);
    }
    else{
        cout << (n / len) * total_a + count_a(s,(n % len));
    }
    */
    
    cout << (n / s.length()) * count_a(s,s.length()) + count_a(s,(n % s.length()));
    
    return 0;
}
