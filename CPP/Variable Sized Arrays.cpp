#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int totalInput, queryTotal, from, index;
    vector<vector<int>> arr;
    int arraySize = 0, push;
    cin>>totalInput>>queryTotal;
    for(int start = 0; start<totalInput; start++)
    {
        cin>>arraySize;
        vector<int> inputArr;
        for(int count = 0;count<arraySize; count++)
        {   
            cin>>push;
            inputArr.push_back(push);
        }
        arr.push_back(inputArr);
    }
    
    for (int start = 0; start<queryTotal; start++) {
        cin>>from>>index;
        cout<<arr[from][index]<<endl;
    }
    
    return 0;
}
