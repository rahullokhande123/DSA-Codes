//=================== Direct Recursion ===================
// WAP to create a factorial program
// #include <iostream>
// using namespace std;
//int fact(int n){
//	if(n<0){
//		cout<<"There is no factorial of nagative number";
//		return 0;
//	}
//	else if(n==0 || n==1){
//		return 1;
//	}
//	else{
//		return n*fact(n-1);
//	}
//}
//int main(){
//	cout<<fact(4);
//}

//============ Fibonacirise In Recorsion ============
//static int count;
//int fibo(int n){
//	count++;
//	if(n==0 || n==1){
//		return n;
//	}
//	else{
//		return fibo(n-1)+fibo(n-2);
//	}
//}
//int main(){
//	for(int i=0;i<=8;i++){
//		cout<<fibo(i)<<" ";
//	}
//	cout<<endl<<count;
//}

//=================== Table =====================
////=============== Tail Recursion ================
//void table(int n, int current){
//	if(current>10){
//		return;
//	}
//	else{
//		cout<<n<<"*"<<current<<"="<<n*current<<endl;
//		table(n , current+1);
//	}
//}
//int main(){
//	table(15,1);
//}

//=============== Head Recursion ================
#include <iostream>
using namespace std;
void table(int n, int current){
	if(current>10){
		return;
	}
	else{
		table(n , current+1);
		cout<<n<<"*"<<current<<"="<<n*current<<endl;
		
	}
}
int main(){
	table(15,1);
}
