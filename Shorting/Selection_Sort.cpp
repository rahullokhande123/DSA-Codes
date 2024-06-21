#include <iostream>
using namespace std;
void selection(int a[],int n){
	int index,temp;
	for(int i=0;i<n-1;i++){
		index=i;
		for(int j=i+1;j<n;j++){
			if(a[index]>a[j]){
				index=j;
			}
		}
		if(i!=index){
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
		}
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
    int arr[6]={12,28,3,7,58,6};
    print(arr,6);
    cout<<endl;
    selection(arr,6);
    print(arr,6);
}

