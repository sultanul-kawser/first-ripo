#include <bits/stdc++.h>
using namespace std;

int main() {
	// F.IO
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	// Code
    int n; 
    cin >> n;
    string hate = "hate";
    string love = "love";
    if( n == 1 ){
    	cout << "I hate it";
    }else{
    	for(int i = 1; i <= n; i++){
    		if(i % 2 == 0){
    			cout << "I " << love;
    			if(i != n){
    				cout << " that ";
    			}else{
    				cout << " it ";
    			}		
    		}else if(i % 2 != 0){
    			cout << "I " << hate;
    			if(i != n){
    				cout << " that ";
    			}else{
    				cout << " it ";
    			}
    		}
    	
    	}
	
    }
    
    return 0;
}