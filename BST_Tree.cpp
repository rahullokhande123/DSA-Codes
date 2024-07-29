#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *right;
		Node *left;
		
		Node(int d){
			data=d;
			right=NULL;
			left=NULL;
		}
};
class BST{
	public:
		Node *root;
	BST(){
		root=NULL;
	}
	void insert(int d){
		if(root==NULL){
			root=new Node(d);
		}
		else{
			Node *temp=root,*privies;
			while(temp!=NULL){
				privies=temp;
			}
		}
	}
};
