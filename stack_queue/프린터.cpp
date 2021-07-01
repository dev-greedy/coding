#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int firstElement = 0;
    
    int i = 0;
    //int numberOfPop = 0;
    bool isMax = true;
    while(priorities.size() > 0){
        firstElement = priorities.front();
        isMax = true;
        
        for(int j = 1; j<priorities.size(); j++){
            priorities[j-1] = priorities[j];
            if(priorities[j]>firstElement){
                isMax = false;
            }
        }
        priorities.back() = firstElement;
        
        if(i == location && !isMax){
            location += priorities.size();
        }else if(i == location && isMax){
            answer++;
            break;
        }
        

        if(isMax){
            //cout<<firstElement<<" ";
            priorities.pop_back();
            answer++;
            //numberOfPop++;
        }
        //판별

        i++;
    }
    cout << endl;
    return answer;
}

int main (){
    vector<int> v1 = {2,1,3,2};
    vector<int> v2 = {1,1,9,1,1,1};

    cout<<"answer: "<<solution(v2,5)<<endl;
    return 0;
}