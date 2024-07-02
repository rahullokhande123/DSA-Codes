 
// ==============================================================

//#include <iostream>
//using namespace std;
//void bubble_sort(int A[],int n){
//	int temp,fleg;
//	for(int i=0;i<n-1;i++){  // ye passes ko provide krega
//	    fleg=0; 
//		for(int j=0;j<n-i-1;j++){  // Ye comperision krega 
//		if(A[j]>A[j+1]){
//				temp=A[j];
//			A[j]=A[j+1];
//			A[j+1]=temp;
//			fleg=1;
//		}	
//    }
//    if(fleg==0){
//    	break;    // Outer loop break;
//	}
//  }
//}
//void print(int A[],int n){
//	for(int i=0;i<n;i++){
//		cout<<A[i]<<" ";
//	}
//}
//int main(){
//	int arr[5]={17,14,3,21,5};
//	print(arr,5);
//	cout<<endl;
//	bubble_sort(arr,5);
//	print(arr,5);
//}

// ==============================================================

#include <iostream>
using namespace std;
void bubble_sort(int A[],int n){
	int temp,fleg;
	for(int i=0;i<n-1;i++){
		fleg=0;
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				fleg=1;
			}
		}
		if(fleg==0){
			break;
		}
	}
}
void print(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}
int main(){
	int arr[5]={17,14,3,21,5};
	print(arr,5);
	cout<<endl;
	bubble_sort(arr,5);
	print(arr,5);
}


