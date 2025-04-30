#include<stdio.h>

int main(){
	int testCase ;
	scanf("%d",&testCase);
	for(int i = 1; i<=testCase; i++){
	int n;
	scanf("%d",&n);
	int arrA[n];
	int arrB[n];
	for(int j = 0; j<n; j++){
		scanf("%d",&arrA[j]);
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
			printf("%d ",arrC[i]);
		}else{
			arrC[i] = difference;
			printf("%d ",arrC[i]);
		}
	}
	printf("\n");
	
	}
	
	
	return 0; 
}