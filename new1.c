#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    printf("enter a: ");
    scanf("%d", &a);/*& - here address where u want to store data*/
    printf("enter b:", b);
    scanf("%d", &b);
    int sum = a+b;

    printf("Sum is %d", sum);

    
    return 0;



}