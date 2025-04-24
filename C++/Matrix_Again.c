#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int nums[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            scanf("%d",&nums[i][j]);
        }
        if(i == n-1){
            for(int k = 0; k<m; k++){
                printf("%d ",nums[n-1][k]);
            }
            printf("\n"); 
            for(int l = 0; l<n; l++){
                printf("%d ",nums[l][m-1]);
            }
        }
    }

}
