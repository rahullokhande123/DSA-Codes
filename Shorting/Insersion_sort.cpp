#include <iostream>
using namespace std;
	void insertion_sort(int a[],int n){
		int key,j;
		for(int i=1;i<n;i++){
			key=a[i]; // key 2
			j=i-1;    // j=15
			while(j>=0 && a[j]> key){
				a[j+1]=a[j];
				j--; // pichle index pe jane ke liye
			}
			j++;  // -1
			a[j]=key;
		}
	}
void print(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}
int main(){
	int a[5]={17,14,3,21,5};
	print(a,5);
	cout<<endl;
	insertion_sort(a,5);
	print(a,5);
}



