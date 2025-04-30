#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int lineNum = 0;
	int count2 = 1;
	while(count2 <= n){
		lineNum++;
		count2+=2;
		
	}
	int a = lineNum + 5;
	
	for(int i = 1; i<=a ; i++){
		for(int j = 1; j<= a-i; j++){
			cout<<" ";
		}
		for(int k = 1; k<=i; k++){
			cout<<"*";
		}
		if(i != 1){
			for(int l = 1; l<=i-1; l++){
				cout<<"*";
			}
		}
		cout<<endl;
		
	}
	
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			cout<<" ";
		}
		for(int k = 0; k<n; k++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}