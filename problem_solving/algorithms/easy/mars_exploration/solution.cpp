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
    string S;
    cin >> S;
    
    int total = 0;
    for(int i = 0;i < S.length();i++){
        switch(i % 3){
            case 0: if(S[i] != 'S') total++; break;
            case 1: if(S[i] != 'O') total++; break;
            case 2: if(S[i] != 'S') total++; break;
        }
    }
    cout << total;
    
    return 0;
}
