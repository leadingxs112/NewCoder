#include<stdio.h>
#include<math.h>

int main()
{
    printf("Hi \n");
    printf("Hi \n"); /*this code is my first code in c*/
    char star = '*';
    printf ("star is %c \n", star); /*%d for integers, %f for real numbers, %c for characters*/
    int a =2;
    int b= 3;
    printf("Sum is %d\n", a+b);
    int c,d;
    c = d= 1;
    int power =  pow(c,d);
    int p = c^d;
    printf("Power is %d \n", power);
    printf("%d \n", p);
    printf("%f \n", 10 / 3.0);
    int m= (int)1.9999; /*(int) here means we are forcefully applyping int for float value*/
    printf("%d \n", m);
    printf("%d \n" , 3==3);/*== means if equals or not, != if not eqaul to, >= means if greater than*/

    printf("%d \n", 4>5 && 5==5); /*logical operators &&=and, ||=or, !=not*/
    a += b; // a = a-b, similarly a -=b means a= a-b same for *=, /=, %=
    printf("%d", a); 
    int m, n;
    

   

    
    return 0;
}