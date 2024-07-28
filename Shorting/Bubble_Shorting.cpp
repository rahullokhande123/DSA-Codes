// 
//// ==============================================================
//
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
//

//============= With Highest No.===============

//#include <iostream>
//using namespace std;
//int bubble(int a[],int n){
//	int temp,fleg,count=0;
//	for(int i=0;i<n-1;i++){
//		fleg=0;
//		for(int j=0;j<n-i-1;j++){
//			if(a[j]>a[j+1]){
//				temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//				fleg=1;
//			}
//		}
//		count++;
//		if(fleg==0){
//			break;
//		}
//		else if(count==2){
//			return a[n-2];
//		}
//	}
//}
//void print(int a[],int n){
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}
//int main(){
//	int arr[6]={17,14,3,21,5,1};
//	print(arr,6);
//	cout<<endl;
//	bubble(arr,6);
//	print (arr,6);
//	cout<<endl;
//	int x=bubble(arr,6);
//	cout<<"Second High:"<<x;
//}

#include <iostream>
using namespace std;
int bubble(int a[],int n){
	int temp,fleg,cnt=0;
	for(int i=0;i<n-1;i++){
		fleg=0;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				fleg=1;	
			}
		}
		
		cnt++;
		
		if(fleg==0){
			break;
		}
		
		else if (cnt==2){
			return a[n-2];
		}
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int arr[6]={17,14,3,21,5,1};
	print(arr,6);
	cout<<endl;
	bubble(arr,6);
	print (arr,6);
	cout<<endl;
	int cntResult=bubble(arr,6);
	cout<<"Second"<<cntResult;
}

