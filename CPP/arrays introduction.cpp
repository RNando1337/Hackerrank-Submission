#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int inputCount;
    
    cin>>inputCount;
    int a[inputCount];
    
    for(int start = 0; start<inputCount; start++)
    {
        cin>>a[start];
    }
    
    for(int start = inputCount-1; start>=0; start--)
    {
        cout<< a[start] << " ";
    }
    
    return 0;
}
