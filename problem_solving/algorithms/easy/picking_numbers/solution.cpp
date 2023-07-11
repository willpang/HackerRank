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
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    
    int num[101], num2[100];
    memset(num, 0, sizeof(num));
    memset(num2, 0, sizeof(num2));
    for(int a_i = 0;a_i < n;a_i++){
        num[a[a_i]]++;
    }
    
    for(int a_i = 1;a_i < n;a_i++){
        num2[a_i] = num[a_i] + num[a_i - 1];
    }
    
    cout << num2[distance(num2, max_element(num2, num2 + n))];
    
    return 0;
}
