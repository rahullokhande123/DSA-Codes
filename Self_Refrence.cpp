//#include <iostream>
//using namespace std;
//class Employee{
//	public:
//		int data;
//		Employee *next; // Self Refrence class(Data Member)
//		                        // Track all objects
//};
//struct Employee{
//	int data;
//	Employee *next; // Self REfrence Structure(Data Member)
//};                  // Track all objects
//
//int main(){
//	
//}


#include <iostream>
using namespace std;
class P25{
	public:
		string name;
		P25 *next;
		
		P25(string n){
			name=n;
			next=NULL;
			
		}
};
int main(){
	P25 s1("Rahul"),s2("Arun"),s3("Sakshi");
	s1.next=&s2;
	s2.next=&s3;
	cout<<s1.name;
	cout<<s1.next<<endl;
	cout<<s1.next->name;
	cout<<s1.next->next<<endl;
	cout<<s1.next->next->name;
	cout<<s1.next->next->next;
}



