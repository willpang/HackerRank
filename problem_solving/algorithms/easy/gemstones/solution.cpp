#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    int N;
    cin >> N;
    int character[26] = {0};
    bool temp_character[26] = {0};
    string s;
    
    for(int i = 0; i < N; i++){
        cin >> s;
        
        memset(temp_character, 0, sizeof(temp_character));
        for(int j = 0; j < s.length(); j++){
            temp_character[s[j] - 'a'] = true;
        }
        
        for(int j = 0; j < 26; j++){
            if(temp_character[j]) character[j]++;
        }
    }
    
    int total = 0;
    for(int j = 0; j < 26; j++){
        if(character[j] == N) total++;
    }
    cout << total;
    
    return 0;
}
