// #include <iostream>
//using namespace std;
//void selection(int a[],int n){
//	int index,temp;
//	for(int i=0;i<n-1;i++){  // ye index pr rakhi value provide kr raha h
//		index=i;
//		for(int j=i+1;j<n;j++){  // ye index no. provide kr raha h
//			if(a[index]>a[j]){
//				index=j;
//			}
//		}
//		if(i!=index){
//			temp=a[i];
//			a[i]=a[index];
//			a[index]=temp;
//		}
//	}
//}
//void print(int a[],int n){
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}
//int main(){
//    int arr[6]={12,28,3,7,58,6};
//    print(arr,6);
//    cout<<endl;
//    selection(arr,6);
//    print(arr,6);
//}
//===================== With Smallest No.=======================

//#include <iostream>
//using namespace std;
//int selection(int a[],int n){
//	int temp,index,cnt=0;
//	for(int i=0;i<n-1;i++){
//		index=i;
//		for(int j=i+1;j<n;j++){
//			if(a[index]>a[j]){
//				index=j;
//			}
//		}
//		
//		cnt++;
//		
//		if(i!=index){
//			temp=a[i];
//			a[i]=a[index];
//			a[index]=temp;
//		}
//		else if(cnt==2){
//			return a[i];
//		}
//	}
//}
//void print(int a[],int n){
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}
//int main(){
//    int arr[6]={12,28,3,7,58,6};
//    print(arr,6);
//    cout<<endl;
//    selection(arr,6);
//    print(arr,6);
//    cout<<endl;
//    int x=selection(arr,6);
//    cout<<"Second Small:"<<x;
//}

#include <iostream>
using namespace std;
void selection(int a[],int n){
	int temp,index;
	for(int i=0;i<n;i++){
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
    cout<<endl;
//    int x=selection(arr,6);
//    cout<<"Second Small:"<<x;
}


