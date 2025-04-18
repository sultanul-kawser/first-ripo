 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    long long int nums[4*n-1];
    for(long long int i = 0; i<4*n-1; i++){
        cin>>nums[i];
    }
    for(long long int i = 0; i<4*n-1; i++){
        int count = 0;
        for(long long int j =0; j<4*n-1; j++){
            if(nums[i] == nums[j]){
                count ++;
            }
        }
        if(count != 4){
            cout<<nums[i];
            break;
        }
    }

 }