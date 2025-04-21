#include<stdio.h>
int main(){
    int t; 
    scanf("%d",&t);
    for(int i = 0; i<t; i++){
        int n;
        scanf("%d",&n); 
        char rounds[n];
        int countT = 0, countP = 0; 
        for(int j = 0; j<n; j++){
            scanf(" %c",&rounds[j]);
            if(rounds[j] == 'T'){
                countT++;
            }else if(rounds[j] == 'P'){
                countP++;
            }
        }
        if(countT<countP){
           printf("Pathaan\n");
        }else if(countT>countP){
            printf("Tiger\n");
        }else {
            printf("Draw\n");
        }

    }
}