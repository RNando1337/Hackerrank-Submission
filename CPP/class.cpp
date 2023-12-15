#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class PersonalInformation
{
    private:
        int age, standard;
        string first_name, last_name;
    
    public:
        void setAge(int age_param){
            age = age_param;
        }
        int getAge(){
            return age;
        }
        void setStandard(int standard_param){
            standard = standard_param;
        }
        int getStandard(){
            return standard;
        }
        void setFirstName(string first_name_param){
            first_name = first_name_param;
        }
        string getFirstName(){
            return first_name;
        }
        void setLastName(string last_name_param){
            last_name = last_name_param;
        }
        string getLastName(){
            return last_name;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    PersonalInformation personal_info;
    int age, standard;
    string first_name, last_name;
      
    cin>>age;
    cin>>first_name;
    cin>>last_name;
    cin>>standard;
    
    personal_info.setAge(age);
    personal_info.setFirstName(first_name);
    personal_info.setLastName(last_name);
    personal_info.setStandard(standard);
    
    cout<<personal_info.getAge()<<endl;
    cout<<personal_info.getLastName()<<", "<<personal_info.getFirstName()<<endl;
    cout<<personal_info.getStandard()<<endl;
    cout<<endl;
    cout<<personal_info.getAge()<<","<<personal_info.getFirstName()<<","<<personal_info.getLastName()<<","<<personal_info.getStandard();
    return 0;
}
