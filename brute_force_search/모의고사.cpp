#include <string>
#include <vector>

using namespace std;

/*
class Student
{
private:
	vector<int> pattern;
public:
	Student(vector<int> pattern){
		this->pattern = pattern;
	}
	SolveProblem(int iterator){
		if(iterator >= pattern.size()){
			iterator
		}
	}
};
*/
vector<int> solution(vector<int> answers) {
	vector<int> student01Pattern = {1,2,3,4,5};
	vector<int> student02Pattern = {2,1,2,3,2,4,2,5};
    vector<int> student03Pattern = {3,3,1,1,2,2,4,4,5,5};

    int studentAnswer[3] = {0,0,0};

    for (int i = 0; i < answers.size(); ++i)
    {

    	if(answers[i] == student01Pattern[i % student01Pattern.size()]){
    		studentAnswer[0]++;
    	}
    	if(answers[i] == student02Pattern[i % student02Pattern.size()]){
    		studentAnswer[1]++;
    	}
    	if(answers[i] == student03Pattern[i % student03Pattern.size()]){
    		studentAnswer[2]++;
    	}
    }

    int max = 0;
    for (int i = 0; i < 3; ++i)
    {
    	if(max < studentAnswer[i]){
			max = studentAnswer[i];
		}
    }

    vector<int> answer;
    for (int i = 0; i < 3; ++i)
    {
    	if(studentAnswer[i] >= max){
    		answer.push_back(i+1);
    	}
    }
    return answer;
}