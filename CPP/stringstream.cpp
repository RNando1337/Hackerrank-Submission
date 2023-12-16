#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    stringstream ss;
    vector<int> parsing;
    string input, word;
    
    cin>>input;
    ss<<input;
    
    while (getline(ss,word,',')) {
        parsing.push_back(stoi(word));
    }
    
    for (int start = 0; start<parsing.size(); start++) {
        cout<<parsing[start]<<endl;
    }
    
    return 0;
}
