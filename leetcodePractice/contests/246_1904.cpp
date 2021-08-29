class Solution {
public:
    int numberOfRounds(string startTime, string finishTime) {
       
//startTime is greater then endTime we add a period of 24 hrs ie 24*60.
	int startT = 60 * stoi(startTime.substr(0,2)) + stoi(startTime.substr(3));
		int finishT = 60 * stoi(finishTime.substr(0,2)) + stoi(finishTime.substr(3));

		if (startT > finishT)
            finishT+=24*60;//we have to convert the time to minute by multiplying by 60 sec.

//startTime must be in the range of [15:30:45:60] we can add 14 to start time in that way we can skip [0 to 14] time interval
		return max(0, (finishT / 15) - (startT + 14) / 15);               
    }
};
