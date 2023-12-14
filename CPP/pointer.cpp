#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sumOperation(int *a, int *b){
    return *a+*b;
}

int substractOperation(int *a, int *b)
{
    int substraction = *a-*b;
    
    return (substraction < 0) ? substraction*(-1) : substraction;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b;
    scanf("%d\n%d", &a, &b);
    
    cout<<sumOperation(&a, &b)<<endl;
    cout<<substractOperation(&a,&b);
    return 0;
}
