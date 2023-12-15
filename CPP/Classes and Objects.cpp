#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    private:
        int scores[5];
    
    public:
        void input();
        int calculateTotalScore();
};

void Student::input(){
    int loop, currentScore = 0, kristenGrade, bestScore = 0;
    cin>>loop;
    int summaryScore[loop];
    for(int start = 0;start<loop; start++){
        for(int start2 = 0; start2<5; start2++){
            cin>>scores[start2];
        }
        summaryScore[start] = calculateTotalScore();
    }
    kristenGrade = summaryScore[0];
    
    for (int start = 1; start<loop; start++) {
        if(summaryScore[start] > kristenGrade){
            bestScore++;
        }
    }
    
    cout<<bestScore;
}

int Student::calculateTotalScore(){
    int sum = 0;
    for(int index = 0; index<5; index++){
        sum += scores[index];
    }
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Student student;
    student.input();
    
    return 0;
}
