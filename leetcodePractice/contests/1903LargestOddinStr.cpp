class Solution {
 public:
  string largestOddNumber(string num) {
    for (int i = num.size() - 1; i >= 0; i--) {
      if ((num[i] - '0') % 2)
        return num.substr(0, i + 1);
    }
    return string();
  }
};  // upsolved

class Solution {
public:
    string largestOddNumber(string num) {
    //If last digit of number is odd then number will be odd.
        for(int i=num.size(); i>=0;i--){
            if((num[i]-'0')%2!=0)
                return num.substr(0, i+1);
        }
        return "";
    }
};

class Solution {
 public:
  string largestOddNumber(string num) {
    return num.substr(0, num.find_last_of("13579") + 1);
    // This function takes a given character and returns the position of the
    // last occurrence of that character. it means, we'll find last of 13579 and
    // add 1 to it.
  }
};  // upsolved