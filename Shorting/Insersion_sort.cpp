//#include <iostream>
//using namespace std;
//	void insertion_sort(int a[],int n){
//		int key,j;
//		for(int i=1;i<n;i++){
//			key=a[i]; // key 2
//			j=i-1;    // j=15
//			while(j>=0 && a[j]> key){
//				a[j+1]=a[j];
//				j--; // pichle index pe jane ke liye
//			}	
//			j++;  // -1
//			a[j]=key;
//		}
//	}
//void print(int A[],int n){
//	for(int i=0;i<n;i++){
//		cout<<A[i]<<" ";
//	}
//}
//int main(){
//	int a[5]={17,14,3,21,5};
//	print(a,5);
//	cout<<endl;
//	insertion_sort(a,5);
//	print(a,5);
//}



//#include <iostream>
//using namespace std;
//void insertion(int A[],int n){
//	int key,j;
//	for(int i=1;i<n;i++){
//		key=A[i];
//		j=i-1;
//		while(j>=0 && A[j]>key){
//			A[j+1]=A[j];
//			j--;
//		}
//		j++;
//		A[j]=key;
//	}
//}
//void print(int a[],int n){
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}
//int main(){
//	int arr[5]={17,14,3,21,5};
//	print(arr,5);
//	cout<<endl<<" ";
//	insertion(arr,5);
//	print(arr,5);
//}

// =============== With Second Highest No. =================
#include <iostream>
using namespace std;
int insertion(int a[],int n){
	int key,j,count=0;
	for(int i=1;i<n;i++){
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		
		j++;
		a[j]=key;
	
		count++;
		if(count==2){
			return a[n-2];
		}
	}
}
void print (int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int arr[5]={17,14,3,21,5};
	print(arr,5);
	cout<<endl;
	insertion(arr,5);
	print(arr,5);
	cout<<endl;
	int x=insertion(arr,5);
	cout<<"Second High:"<<x;
}

