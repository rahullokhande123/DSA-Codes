
//======================== Singly LinkedList ===============================

#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		
		Node(int d){
			data=d;
			next=NULL;
			
		}
};
class LinkedList{
	public:
		Node *head;
		LinkedList(){
			head=NULL;
		}
		
//		Element Traversal ===================================

		void traversal(){
			if(head==NULL){
				cout<<"No Data For Travers";
			}
			Node *temp=head;
			while(temp!=NULL){
			  cout<<temp->data<<" ";
			  temp=temp->next;
			}	
		}
		
//		Element Delete ======================================
		
		void delete_end(){
			if(head==NULL){
				cout<<"No Data For Delete";
			}
			Node *temp=head;
			if(temp->next==NULL){
				delete(temp);
				head=NULL;
				return;
			}
			while(temp->next->next!=NULL){
				temp=temp->next;
				}
				delete(temp->next);
				temp->next=NULL;
		}
		
//		Element Insert ======================================
				
		void insert_end(int d){
			if(head==NULL){
				head=new Node(d);
			}
			else{
				Node *temp=head;
				while(temp->next!=NULL){
					 temp=temp->next;
				}
				temp->next=new Node(d);	
			}
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
//      Element Inset front

        void insert_front(int d){
        	if(head==NULL){
				head=new Node(d);
			}
			else{
				Node *temp=new Node(d);
				temp->next=head;
				head=temp;		
			}
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
};
int main(){
	LinkedList obj;
	obj.insert_end(89);
	obj.insert_end(78);
	obj.insert_end(54);
	obj.insert_end(9);
	obj.insert_end(56);
	obj.insert_end(90);
	obj.insert_end(34);
//	cout<<obj.head->data<<endl;
	//cout<<obj.head->next->next->data;
//	obj.delete_end(); // delete 34
//	obj.delete_end(); // delete 90
//	obj.delete_end(); // delete 56
//	obj.delete_end(); // delete 9
//	obj.delete_end(); // delete 54
//	obj.delete_end(); // delete 78
//	obj.delete_end(); // delete 89
//	obj.delete_end(); // msg-> no data for delete
//	obj.delete_end(); // msg-> no data for delete
	obj.insert_first(12);
	obj.traversal();

}
