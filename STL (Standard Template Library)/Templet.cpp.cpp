//#include <iostream>
//using namespace std;
//template <typename T>
//T great(T a,T b){
//	if(a>b){
//		return a; 
//	}
//	else
//	   return b;
//}
//int main(){
//	int result=great<int> (10,20);
//	cout<<result<<endl;
//	
//	char result1=great<char> ('A','a');
//	cout<<result1<<endl;
//	
//	double result2=great<double> (10.98,10.99);
//	cout<<result2<<endl;
//	
//}

#include <iostream>
using namespace std;
template <class T,class P>
class Employee{
	 public:
	 	string name;
	 	T gender;
	 	P age;
	 Employee(string n, T g, P a){
	 	name=n;
	 	gender=g;
	 	age=a;
	 }
	 void display(){
	 	cout<<"Name:"<<name<<" "<<"Genger:"<<gender<<" "<<"Age:"<<age<<endl;
	 }
};
int main(){
	Employee <char,int> obj1("Rahul",'m',24);
	Employee <string,double> obj2("Arun","Male",25);
	obj1.display();
	obj2.display();
}
