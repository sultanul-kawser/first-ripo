#include<stdio.h>
#include<math.h>

int checkNum(int nums[], long long int multi, int m){
    double realNum = (double)m/multi;
    int compNum = abs(realNum);
    if(realNum == compNum){
        return m/multi;
    }else{
        return -1;
    }
}
int main(){
    int t; 
    scanf("%d",&t);
    for(int i = 0; i<t; i++){
        int m;
        scanf("%d",&m);
        int nums[3];
        long long int multi = 1;
        for(int j = 0; j<3 ;j++){
            scanf("%d",&nums[j]);
            multi *= nums[j];
        }
        printf("%d\n",checkNum(nums,multi,m));

    }
}