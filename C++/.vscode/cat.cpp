#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	cin>>n; 
	string name;
	cin>>name;
	for(int i = 0; i<n; i++){
		if(name[i] == 'n' && name[i+1] == 'a'){
            name[i] = "ny";
        }
	}
	cout<<name;
}