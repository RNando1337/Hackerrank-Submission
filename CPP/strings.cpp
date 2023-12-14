#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void result(string a, string b){
    const string concatSentence = a+b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<concatSentence<<endl;
    for(int start = 1; start <= a.size(); start++){
        if(start == 1){
            cout<<concatSentence[a.size()];
        }else{
            cout<<concatSentence[start-1];
        }
    }
    cout<<" ";
    for(int start = (a.size()+1); start <= concatSentence.size(); start++){
        if(start == a.size()+1){
            cout<<concatSentence[0];
        }else{
            cout<<concatSentence[start-1];
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string firstSentence, secondSentence;
    cin>>firstSentence>>secondSentence;
    result(firstSentence, secondSentence);
    
    return 0;
}
