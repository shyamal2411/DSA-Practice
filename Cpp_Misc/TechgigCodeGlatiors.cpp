// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int hh1, mm1, hh2, mm2;
//     cin>>hh1>>mm1;
//     cin>>hh2>>mm2;
//     int carry = 0, addmm = 0,addhh = 0;
//     addmm = mm1 + mm2;
        
//         if(addmm > 60){
//             carry = addmm - 60;
//         }

//         addhh = hh1+hh2+ (carry/10);
//         cout<<addhh<<" ";
//         cout<<carry;
// }

#include <iostream>
using namespace std;

int main()
{
    
	int hour1,minute1;
	int hour2,minute2;
	int hour,minute;

     cin>>hour1;
	 cin>>minute1;
	 cin>>hour2;
	cin>>minute2;
	
    minute=minute1+minute2;
	hour=hour1+hour2+(minute/60);
	minute=minute%60;

    cout<<hour << " "<<minute;

	return 0;
}