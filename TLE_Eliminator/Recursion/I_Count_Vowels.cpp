#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
	ch = toupper(ch);
	return (ch=='A' || ch=='E' || ch=='I' ||
						ch=='O' || ch=='U');
}

int countVovels(string str, int n)
{
	if (n == 1)
		return isVowel(str[n-1]);

	return countVovels(str, n-1) + isVowel(str[n-1]);
}

int main()
{
	string s; cin>>s;
	cout << countVovels(s, s.length()) << endl;
	return 0;
}
