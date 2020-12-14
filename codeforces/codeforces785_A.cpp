#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll int n, i, count = 0, j, t, temp;

	// string a = "Tetrahedron";
	// string b = "Cube";
	// string c = "Dodecahedron";
	// string d = "Octahedron";
	// string e = "Icosahedron";
	/*I tried to first declare the strings and then compare the declared string with the input string
	if both are same then count+= value, but in online solution,I found this method more fiscible*/
	cin >> n;

	fo(i, n)
	{	char str[100];
		cin >> str;
		if (str[0] == 'T') {
			count += 4;
		}

		else if (str[0] == 'C') {
			count += 6;
		}

		else if (str[0] == 'O') {
			count += 8;
		}

		else if (str[0] == 'D')
		{count += 12;}

		else if (str[0] == 'I') {
			count += 20;
		}
	}

	cout << count << endl;
	return 0;
}