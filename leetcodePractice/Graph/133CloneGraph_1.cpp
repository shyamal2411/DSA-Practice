#include<bits/stdc++.h> 
using namespace std;

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    // our initial blank slate
    Node* nodes[101] = {0};
    void createNode(Node *originalNode) {
        // checking if we already created that node
		if (!nodes[originalNode->val]) {
            nodes[originalNode->val] = new Node(originalNode->val);
        }
		// adding neighbours
        for (auto n: originalNode->neighbors) {
            // checking if the neighbour exist, otherwise we create it
            if (!nodes[n->val]) createNode(n);
            // adding the neighbour
            nodes[originalNode->val]->neighbors.push_back(nodes[n->val]);
        }
    }
    Node* cloneGraph(Node* node) {
        if (node) createNode(node);
        return nodes[1];
    }
};

int main(){
    Solution ss;
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);
    Node *n7 = new Node(7);
    n1->neighbors.push_back(n2);
    n1->neighbors.push_back(n3);
    n2->neighbors.push_back(n4);
    n2->neighbors.push_back(n5);
    n3->neighbors.push_back(n6);

    Node *n1_clone = ss.cloneGraph(n1);
    return 0;
}