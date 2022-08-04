#include<bits/stdc++.h> 
using namespace std;

class MyCalendar {
    public:
        MyCalendar();
        bool book(int start, int end);
    private:
        vector<pair<int, int>> calendar;
    };
    MyCalendar::MyCalendar() {
        calendar = vector<pair<int, int>>();
    }
    bool MyCalendar::book(int start, int end) {
        for (auto &iv: calendar) {
            if (iv.first < end && start < iv.second) return false;
        }
        calendar.push_back(make_pair(start, end));
        return true;
    }
    
    int main(){
   
    }