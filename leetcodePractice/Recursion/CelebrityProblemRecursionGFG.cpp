// C++ program to find celebrity
#include <bits/stdc++.h>
#include <list>
using namespace std;

// https://www.geeksforgeeks.org/the-celebrity-problem/
// Max # of persons in the party
#define N 8

// Person with 2 is celebrity
bool MATRIX[N][N] = { { 0, 0, 1, 0 },
					{ 0, 0, 1, 0 },
					{ 0, 0, 0, 0 },
					{ 0, 0, 1, 0 } };

bool knows(int a, int b) { return MATRIX[a][b]; }

// Returns -1 if a 'potential celebrity'
// is not present. If present,
// returns id (value from 0 to n-1).
int findPotentialCelebrity(int n)
{
	// base case - when n reaches 0 , returns -1
	// since n represents the number of people,
	// 0 people implies no celebrity(= -1)
	if (n == 0)
		return -1;

	// find the celebrity with n-1
	// persons
	int id = findPotentialCelebrity(n - 1);

	// if there are no celebrities
	if (id == -1)
		return n - 1;

	// if the id knows the nth person
	// then the id cannot be a celebrity, but nth person
	// could be one
	else if (knows(id, n - 1)) {
		return n - 1;
	}
	// if the nth person knows the id,
	// then the nth person cannot be a celebrity and the id
	// could be one
	else if (knows(n - 1, id)) {
		return id;
	}

	// if there is no celebrity
	return -1;
}

// Returns -1 if celebrity
// is not present. If present,
// returns id (value from 0 to n-1).
// a wrapper over findCelebrity
int Celebrity(int n)
{
	// find the celebrity
	int id = findPotentialCelebrity(n);

	// check if the celebrity found
	// is really the celebrity
	if (id == -1)
		return id;
	else {
		int c1 = 0, c2 = 0;

		// check the id is really the
		// celebrity
		for (int i = 0; i < n; i++)
			if (i != id) {
				c1 += knows(id, i);
				c2 += knows(i, id);
			}

		// if the person is known to
		// everyone.
		if (c1 == 0 && c2 == n - 1)
			return id;

		return -1;
	}
}

// Driver code
int main()
{
	int n = 4;
	int id = Celebrity(n);
	id == -1 ? cout << "No celebrity"
			: cout << "Celebrity ID " << id;
	return 0;
}
