#include <iostream>
//#include <string>
using namespace std;

void printTree(class Node* node);
class Node {
public:
	int generation;
	string name;
	class Node* left;
	class Node* right;
	Node(int gen, string n);
	void print();

};

int main() {
	cout << "hello data structs" << endl;
	Node* root = new Node(1, "Isrrael"); // my grandmother


	root->left = new Node(2, "Isrrael Jr."); 
	root->right = new Node(2, "Isaiah");

	root->right->right = new Node(3, "Selene");
	root->right->left = new Node(3, "Helios");

	root->left->left = new Node(3, "Isrrael Jr. Jr.");
	root->left->right = new Node(3, "Isrrael Jr. Jr. (deceased)");
	
	root->left->left->left = new Node(4, "Isrrael Jr. Jr. the second");
	root->left->left->right = new Node(4, "Isrrael Jr. Jr. Jr. (twice removed)");

	root->left->right->left = new Node(4, "Isreal");
	root->left->right->right = new Node(4, "Isrrael Jr. Jr. Jr. Jr. (also deceased)");

	root->right->right->right = new Node(4, "Little Zae");
	root->right->right->left = new Node(4, "Runt");

	root->right->left->left = new Node(4, "Grandpa");
	root->right->left->right = new Node(4, "I");

	printTree(root);
}

Node::Node(int gen, string n) {
	generation = gen;
	name = n;
}

void Node::print() {
	cout << "My name " << name << " and I am generation " << generation << "." << endl;
}

void printTree(class Node* node){
	if (node == NULL)
		return;

	printTree(node->left);

	cout << "My name is " << node->name << " and I'm gen " << node->generation << endl;

	printTree(node->right);
}