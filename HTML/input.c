#include <stdio.h>
#include <string.h>
int main()
{

    int age;
    float cgp;
    char grade;

    printf("Enter your age:\n");
    scanf("%d", &age);


    printf("Enter your cgp:\n");
    scanf("%f", &cgp);

    printf("Enter your grade:\n");
    scanf(" %c", &grade);

    // scanf("%d%f%c",&age,&cgp,&grade);

    printf("age:%d\ncgp:%.2f.\ngrade:%c", age, cgp, grade);
}
