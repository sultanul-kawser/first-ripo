#include<stdio.h>
int main(){
    char name[30] = "jenin";
   
    int i = 0; 
    while(name[i] != '\0'){
        i++;
    }
    int counter = 0;
    for(int j = 0; j<i; j++){
        if(name[j] == 'a' || name[j] == 'e' || name[j] == 'i' || name[j] == 'o' || name[j] == 'u'){
            counter ++;
        }
    }
    printf("%d", counter);
}