#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {
    string time;
    int num;
    stringstream convert;
    
    cin >> time;
    if(time.substr(0,2).compare("12")!=0 && time.find("PM")<time.length()){
        num = atoi(time.substr(0,2).c_str());
        num = (num + 12) % 24;
        convert << num;
        time.replace(0,2,convert.str());
        time.replace(8,2,"");
    }
    else if(time.substr(0,2).compare("12")==0 && time.find("AM")<time.length()){
        time.replace(0,2,"00");
        time.replace(8,2,"");
    }
    else{
        time.replace(8,2,"");
    }
    cout << time;
    
    return 0;
}
