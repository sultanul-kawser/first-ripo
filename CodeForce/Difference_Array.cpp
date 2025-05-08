#include<iostream>
using namespace std;
int main(){
	int testCase ;
	cin>>testCase;
	for(int i = 1; i<=testCase; i++){
	int n;
	cin>>n;
	int arrA[n];
	int arrB[n];
	for(int j = 0; j<n; j++){
		cin>>arrA[j];
		arrB[j] = arrA[j];
	}	
	for(int k = 0; k<n; k++){
		for(int l = 0; l<n; l++){
			if(arrA[k]<arrA[l]){
				int temp = arrA[k];
				arrA[k] = arrA[l];
				arrA[l] = temp;
			}
		}
	}
	
	int arrC[n];
	for(int i = 0; i<n; i++){
		int difference = arrA[i] - arrB[i];
		if(difference < 0){
			difference *=(-1);
			arrC[i] = difference;
			cout<<arrC[i]<<" ";
		}else{
			arrC[i] = difference;
			cout<<arrC[i]<<" ";
		}
	}
	cout<<endl;
	
	}
	
	
	return 0; 
}