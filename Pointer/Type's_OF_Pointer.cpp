#include <iostream>
using namespace std;
int main(){
	//==================== ~Wild Pointer~ =========================
//	int a=90, b=80;
//	int *p; // Wrong way of diclair pointer  ---> This type wild pointer.
//	
//
//	//==================== ~NULL Pointer~ =========================
//	 *p=NULL; // right way of diclair pointer, it's ---> Null pointer(by default null ki value 0).
//	             // Null ko hmesha capital me hi likhte h.


//	//===================== ~Dangling Pointer~ =========================
//	
//	double *w=new double;
//	*w=90;
//	delete(w);
//	w=NULL; // dangling --->pointer.............................

	
	//================== ~Void Pointer~ ========================
	
//	int a=90;
//	char c='k';
//	double b=90.87;
//	void *p=&a; // This type void pointer and it's gave error on de refrence time
//	            // to eske solution ke liye hm type cast krrte h 
//				//es tarah se----
//	
//	cout<<"data at c variable-"<<(*(int*)p)<<endl; // typecaste creating ........
//	p=&b;
//	cout<<"data at c variable-"<<(*(double*)p)<<endl;	        
//}

 // ==================== ~Double Pointer~ ======================
 
  int a=90;
  int *p =&a;
  int **p1= &p;
 
     cout<<a<<endl;
     cout<<*p<<endl;    // dereference single
     cout<<**p1<<endl;  // dereference double (double pointer me hm ** strack symbol ka use krte h)
     
     **p1=900;
     
     cout<<a<<endl;
     cout<<p<<endl;   
     cout<<p1<<endl;
};




