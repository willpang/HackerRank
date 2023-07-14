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


int main(){
    long long t;
    cin >> t;
    
    long long rep = 3;
    
    while(t > rep){
        t -= rep;
        rep *= 2;
    }
    
    cout << rep - t + 1;
    
    /*
    
    //From discussion using math
    
    long long s = log2(floor((t-1)/3+1));
    long long a = 3 * (pow(2,s) - 1) + 1;
    long long b = 3 * pow(2,s);
    
    cout << a + b - t;
    
    */
    
    return 0;
}
