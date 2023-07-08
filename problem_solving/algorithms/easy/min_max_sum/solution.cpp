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
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;
    
    long int min, max;
    
    if(b < a){
        min = b;
        max = a;
    }
    else{
        min = a;
        max = b;
    }
    
    if(c < min) min = c;
    else if(c > max) max = c;
    
    if(d < min) min = d;
    else if(d > max) max = d;
        
    if(e < min) min = e;
    else if(e > max) max = e;
    
    cout << a + b + c + d + e - max << " " << a + b + c + d + e - min;
        
    return 0;
}
