#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct {
    int age;
    string first_name;
    string last_name;
    int standard;
} personalInformation;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>personalInformation.age; 
    cin>>personalInformation.first_name;
    cin>>personalInformation.last_name;
    cin>>personalInformation.standard; 
    
    cout<<personalInformation.age<<" "<<personalInformation.first_name<<" "<<personalInformation.last_name<<" "<<personalInformation.standard;
    return 0;
}
