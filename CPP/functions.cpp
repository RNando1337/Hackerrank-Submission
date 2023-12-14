// C++20
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int greaterNumber(int a[])
{
    int basedNumber = 0;
    
    for(int number = 0; number < 4; number++)
    {
        if(basedNumber < a[number])
        {
            basedNumber = a[number];
        }
    }
    return basedNumber;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[4];
    
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    
    cout<<greaterNumber(a);
    
    return 0;
}
