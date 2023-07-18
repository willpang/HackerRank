#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int word_del(string word){
    int flag=0;
    for(int i=1;i<word.length();i++){
        if(word[i]==word[i-1])flag++;
    }
    return flag;
}

int main() {
    int n;
    string word;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> word;
        cout << word_del(word) << endl;
    }
    
    return 0;
}
