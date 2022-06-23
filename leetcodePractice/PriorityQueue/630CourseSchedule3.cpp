#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    
    static bool compare(vector<int> &a, vector<int> &b){
        return a[1] < b[1];
    }
    
    int scheduleCourse(vector<vector<int>>& courses) {
        
        sort(courses.begin(), courses.end(), compare); //sort wrt lastDay
        //to store duration of courses and also alter when required
        priority_queue<int> maxD;
        int time = 0; //total time taken
        
        for(auto c: courses){
            //if total time taken including this c is lesser 
            //than or equal to the last day then add couse to queue and add the time to total time

            if(time + c[0] <= c[1]){
                time += c[0];
                maxD.push(c[0]);
            }
            //else if there are element in priority queue then check 
            // if current c is shorter than the max previous couse then just replace that with current

            else if(!maxD.empty() && maxD.top() >= c[0]){
                time = time - maxD.top() + c[0];
                maxD.pop();
                maxD.push(c[0]);
            }
        }

        //as queue only contains the courses taken so size of queue is the number of courses.
        return maxD.size();
    }
};

int main(){
Solution ss;
vector<vi> vec = {{100,200}, {200, 1300}, {1000, 1250}, {2000, 3200}};
cout << ss.scheduleCourse(vec) << endl;
return 0;
}