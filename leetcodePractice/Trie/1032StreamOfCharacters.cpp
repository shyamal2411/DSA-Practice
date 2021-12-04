#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/stream-of-characters/
class Trie {
	unordered_map<char, Trie *> charMp;
	bool wordEnds;
public:
	Trie() {
		wordEnds = false;
	}

	void insert(string word) {
		if(word.length() == 0)
			return;

		Trie *temp = this;
		for(auto ch : word) {
			if(temp->charMp.find(ch) != temp->charMp.end()) {
				temp = temp->charMp[ch];
			} else {
				temp->charMp[ch] = new Trie();
				temp = temp->charMp[ch];
			}
		}

		temp->wordEnds = true;
	}

	bool search(string word) {
		if(word.length() == 0)
			return false;

		Trie *temp = this;
		for(auto ch : word) {
			if(temp->charMp.find(ch) == temp->charMp.end())
				return false;
			temp = temp->charMp[ch];
			if(temp->wordEnds)
				return true;
		}
		return temp->wordEnds;
	}
};

class StreamChecker {
	Trie myTrie;
	string str = "";
	int wordLen = 0;
public:
	StreamChecker(vector<string>& words) {
		for(auto w : words) {
			reverse(w.begin(), w.end());
			wordLen = max(wordLen, (int)w.length());
			myTrie.insert(w);
		}
	}

	bool query(char letter) {
		str = letter + str;

		if(str.length() > wordLen)
			str.pop_back();

		return myTrie.search(str);
	}
};


int main(){
    vector<string> words = {"cd","f","kl"};
    StreamChecker streamChecker(words);
    cout << streamChecker.query('a') << endl;
    cout << streamChecker.query('b') << endl;
    cout << streamChecker.query('c') << endl;
    cout << streamChecker.query('d') << endl;
    cout << streamChecker.query('e') << endl;
    cout << streamChecker.query('f') << endl;
    cout << streamChecker.query('g') << endl;
    return 0;
}