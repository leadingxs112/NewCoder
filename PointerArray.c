#include<stdio.h>
#include<conio.h>
// * = value at address, & = address of
// int *ptr
// float *ptr
// char *ptr
// void square();
// void psquare(int* y);

//     int y=5;
//     int x=3;
    
    //square(number);
    //printf("x = %d\n",number);
    //psquare(&x);
    //printf("%d",number);
    // int z;
    // int *ptr1= &x;
    // int *ptr= &y;
    // int *pt= &z;
    // *pt = x;
    // *ptr1= y;
    // *ptr=*pt;
    // printf("%d\n",*ptr1);
    // printf("%d",*ptr);



    // *ptr += 5;
    // printf("%d",x);
    // for(int i=1; i<=5; i++){
    //     *ptr+=10;
    //     printf("%d\n",*ptr);
    // }
    // int **pptr=&ptr;
    // int ***ppptr= &pptr;
    // printf("%d",***ppptr);
// }
// void square(int z){
//     z = z*z;
//     printf("%d\n",z);
// int main(){
//     int i,j,k,z;
//     int n=5;
//     for(i=1;i<=n;i++){
//         for(j=n-1;j>=i;j--){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             printf("*");

//     }
//         printf("\n");
//     }
//     }
    





// void psquare(int* y){
//     *y = (*y) * (*y);
//     printf("%d\n", *y)    
// }
int main(){
    int i,k,j,z;
    int n = 5;
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }
    printf("\n");

    }
    return 0; 
}

