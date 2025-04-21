#include<stdio.h>
int checkNum(int nums[],long long int multi,int m){
    if(m/multi){
        return m/multi;
    }else{
        return -1;
    }

}
int main(){
    int t ;
    scanf("%d",&t);
    for(int i = 0; i<t; i++){
        long long int m;
        scanf("%lf",&m);
        int nums[3];
        long long int multi=1;
        for(int i = 0; i<3; i++){
            scanf("%f",&nums[i]);
            multi*=nums[i];
        }
        printf("%d",multi);
        printf("%d\n",checkNum(nums,multi,m));
    }
}