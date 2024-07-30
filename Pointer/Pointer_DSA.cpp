//#include <iostream>
//using namespace std;
//int main(){
//	int *p=new int;
//	cout<<"Address random heap section-->"<<p<<endl;
//	*p=90;
//	*p=*p+10;
//	
//	// De-refrence- pointer ki value ko oprate krna 
//	cout<<"Address random heap section-->"<<*p<<endl;
//	
//	// Leak Memory =======================
//	delete(p);
//	cout<<"Address random heap section-->"<<*p<<endl;
//}

//============== Refrence =================

#include <iostream>
using namespace std;
int main(){
	string name="Rahul";
	string &second_name=name;
	cout<<name<<" "<<second_name<<endl;
	second_name="Rahul_Lokhande" ; // Changes reflact in original.
	cout<<name<<" "<<second_name<<endl;
}


