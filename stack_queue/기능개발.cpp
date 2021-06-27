#include <string>
#include <vector>
#include <iostream>
using namespace std;

/*while 돌면서
**interator로 front를 가리키자.
*/
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    int i = 0;
    int j = 0;
    int doneProgresses = 0;
    while (i < progresses.size()){
    	for(int j=i; j<progresses.size() ; j++){
    		progresses[j] += speeds[j];
    	}

    	doneProgresses = 0;
    	for(int j=i; j<progresses.size(); j++){
    		if(progresses[j] >= 100){
    			doneProgresses += 1;
    		}else{
    			break;
    		}
    	}
    	if(doneProgresses != 0){
    		answer.push_back(doneProgresses);
    		i+=doneProgresses;
    	}
    }
    return answer;
}

int main (){
	vector<int> testProgresses = {95, 90, 99, 99, 80, 99};
	vector<int> testSpeeds = {1, 1, 1, 1, 1, 1};
	vector<int> v= solution(testProgresses,testSpeeds);
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i] <<" ";
	}
	cout<<endl;
	return 0;
}