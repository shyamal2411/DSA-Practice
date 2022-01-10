#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/add-binary/
// https://leetcode.com/problems/add-binary/discuss/1679423/Well-Detailed-Explaination-Java-C%2B%2B-Python-oror-Easy-for-mind-to-Accept-it
class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int i = a.size() - 1; //i pointer for a, start adding from right to left
        int j = b.size() - 1; // similarly for 
        int carry = 0; // carry for test cases
        
        //iterate over the loop until both conditions become false
        while(i >= 0 || j >= 0){
            int sum = carry;
            //subtract by '0' to convert the numbers from char type into int
            if(i >= 0)
                sum += a[i--] - '0';
            if(j >= 0)
                sum += b[j--] - '0';
            //taking carry
            carry = sum > 1 ? 1 : 0; // getting carry depend on the quotient we get by dividing sum / 2 that will be our carry. Carry could be either 1 or 0 
            // if sum is 0 res is 1 & then carry would be 0;
            // if sum is 1 res is 1 & carry would be 0
            // if sum is 2 res is 0 & carry would be 1
            // if sum is 3 res is 1 & carry would be 1
            ans += to_string(sum % 2); //moduling the sum, to get the reminder and add it to our answer
        }
        if(carry)
            ans += to_string(carry); //add carry into ans until carry becomes 0
        reverse(ans.begin(), ans.end()); //reverse the answer which is converted string
        return ans;
    }
};

int main(){
    Solution ss;
    string a = "11";
    string b = "1";
    string ans = ss.addBinary(a,b);
    cout<<ans<<endl;
    return 0;
}