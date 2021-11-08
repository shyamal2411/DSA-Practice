#include<bits/stdc++.h>
using namespace std;

bool comareBits(string s1, string s2)
{
    if (s1.size() >= s2.size())
    {
        while (s1.size() != s2.size())
        {
            s2 = '0' + s2;
        }
    }

    else
    {
        while (s1.size() != s2.size())
        {
            s1 = '0' + s1;
        }
    }

    return s1 >= s2;
}

string addBinary(string s1, string s2)
{
    string ans = "";
    int s = 0;
    int carry = 0;

    int i = s1.size() - 1, j = s2.size() - 1;

    while (i >= 0 || j >= 0 || s == 1)
    {
        s = carry + (i >= 0 ? s1[i] - '0' : 0) + (j >= 0 ? s2[j] - '0' : 0);

        if (s > 1)
        {
            s = 0;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        ans = char(s + '0') + ans;
        i--;
        j--;
    }
    if (carry == 1)
    {
        ans = char(carry + '0') + ans;
    }
    // cout<<s1<<" "<<s2<<" "<<ans<<"\n";
    return ans;
}

string helper(int numberOfBits, int maximumOperationsAllowed, vector<string> &arr, map<pair<int, int>, string> &dp, int pos)
{
    if (pos >= arr.size())
    {
        return "";
    }

    if (dp.find({pos, maximumOperationsAllowed}) != dp.end())
    {
        return dp[{pos, maximumOperationsAllowed}];
    }

    //Case 1 => Don't Flip
    string ans = "";
    string temp1 = arr[pos];

    string op1 = addBinary(temp1, helper(numberOfBits, maximumOperationsAllowed, arr, dp, pos + 1));
    if (comareBits(op1, ans))
    {
        ans = op1;
    }

    // cout<<pos<<" 1 "<<ans<<"\n";

    //Case 2 => Flip;
    if (maximumOperationsAllowed >= 0)
    {
        string temp2 = arr[pos];

        for (int i = 0; i < temp2.size(); i++)
        {
            if (temp2[i] == '1')
            {
                temp2[i] = '0';
                continue;
            }
            if (temp2[i] == '0')
            {
                temp2[i] = '1';
                continue;
            }
        }

        string req = temp2;

        string op2 = addBinary(temp2, helper(numberOfBits, maximumOperationsAllowed - 1, arr, dp, pos + 1));

        if (comareBits(op2, ans))
        {
            ans = op2;
        }
        // cout<<pos<<" 2 "<<ans<<"\n";
    }

    return dp[{pos, maximumOperationsAllowed}] = ans;
}

string maximumBinary(int numberOfBits, int maximumOperationsAllowed, vector<string> arr)
{
    map<pair<int, int>, string> dp;
    // string temp="";

    string ans = helper(numberOfBits, maximumOperationsAllowed, arr, dp, 0);

    string Fans = "";
    int flag = 0;

    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != '1' && ans[i] != '0')
        {
            continue;
        }
        else if (ans[i] == '1')
        {
            Fans += ans[i];
            flag = 1;
        }
        else if (ans[i] == '0' && flag == 1)
        {
            Fans += ans[i];
        }
    }

    return Fans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<maximumBinary(n,m,arr)<<"\n";
    }
    return 0;
}