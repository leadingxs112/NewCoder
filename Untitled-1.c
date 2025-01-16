#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// int sum();
// int main(){
//     int x,y;
//     scanf("%d%d",&x,&y);
//     printf("%d",sum(x,y));
    
    
    
//     return 0;
// }
// int sum (int x, int y){
//     return x+y;
// }
// void maths(int a, int b , int *sum, int *pro, int *avg);
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int sum, avg, pro;
//     maths(a,b,&sum,&pro,&avg);

// } 
// void maths(int a, int b, int *sum, int *pro, int*avg){
//     *sum= a + b;
//     *avg = (a+b)/2;
//     *pro= a*b;
//     printf("%d\n%d\n%d",*sum,*avg,*pro);

// }
//int main(){
//    int chem, maths, phys;
//    printf("Marks obtained in chemistry:");
//    scanf("%d",&chem);
//    printf("Marks obtained in physics:");
//    scanf("%d",&phys);
//    printf("Marks obtained in maths:");
//    scanf("%d",&maths);
//    if(chem>=50 && maths>=65 && phys>=55 && chem+maths+phys>=190){
//     printf("Candidate is eligible");
//    }else printf("Not eligible");
int main(){
    int n,o;
    int ary[3];
    int arry[200];
    int i=0,j=0,l=0;
    printf("Enter triangle sides number\n");
    while(!i){
        break_all: i=1;
        scanf("%d%d%d",&ary[0],&ary[1],&ary[2]);
    
        for(int m=0;m<3;m++){
            for(n=0;n<3;n++){
                arry[l++]= ary[m]+ary[n];

            }
        }
        for(n=0;n<=3;n++){
            for(o=0;o,200;o++){
                if(ary[n]>arry[o]){
                    printf("It is not a triangle!");
                    goto break_all;
                }
            }
        }
            
        
        printf("It is a triangle!");
    }
    return 0;
}  
