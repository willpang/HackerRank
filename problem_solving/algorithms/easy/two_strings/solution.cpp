#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int includeletter(string word, char letter){
    if(word.find(letter)<100000) return 1;
    return 0;
}

int sameletter(string word1, string word2){
    /* Answer 1
    if(word1.length()>=word2.length()){
        for(int i=0;i<word2.length();i++){
            if(includeletter(word1,word2[i])==1) return 1;
        }
    }
    else{
        for(int i=0;i<word1.length();i++){
            if(includeletter(word2,word1[i])==1) return 1;
        }
    }
    return 0;
    */
    
    // Answer 2
    if(word1.length()<=word2.length()){
        for(int i='a';i<='z';i++){
            if(word1.find(i)<100000){
                if(word2.find(i)<100000) return 1;
            }
        }
    }
    else{
        for(int i='a';i<='z';i++){
            if(word2.find(i)<100000){
                if(word1.find(i)<100000) return 1;
            }
        }
    }
    return 0;
    
}

int main() {
    int n;
    string word1,word2;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> word1;
        cin >> word2;
        
        if(sameletter(word1,word2)==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
