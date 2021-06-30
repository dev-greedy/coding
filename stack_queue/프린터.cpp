#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int temporary = 0;
    
    int i = 0;
    bool isMax = true;
    while(priorities.size() > 0){
        temporary = priorities.front();
        isMax = true;
        
        for(int j = 1; j<priorities.size(); j++){
            priorities[j-1] = priorities[j];
            if(priorities[j]>temporary){
                isMax = false;
            }
        }
        priorities.back() = temporary;
        
        if(isMax){
            cout<<temporary<<" ";
            priorities.pop_back();
            answer++;
        }
        //판별
        /*
        if(i == location){
            break;
        }
        i++;
        */
    }
    return answer;
}

int main (){
    vector<int> v = {2,1,3,2};

    cout<<"answer: "<<solution(v,2)<<endl;
    return 0;
}