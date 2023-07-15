#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

char tolower(char letter){
    if(letter >= 'A' && letter <= 'Z') return letter-('Z'-'z');
    else return letter;
}

string tolower_s(string word){
    for(int i=0;i<word.length();i++){
        word[i]=tolower(word[i]);
    }
    return word;
}

int ispangram(string word){
    string temp;
    
    temp = tolower_s(word);
    
    for(int i='a';i<='z';i++){
        if(temp.find(i)>1000) return 0;
    }
    return 1;
}

int main() {
    string input;
    
    getline(cin,input);
    if(ispangram(input)==1) cout << "pangram";
    else cout << "not pangram";
    
    return 0;
}
