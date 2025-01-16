#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

//int main(){
    // int x;
    // printf("Check for : ");
    // scanf("%d", &x);
    // printf("%d", x%2 == 0);
    
    // int number;
    // printf("Enter Number : "); scanf("%d", &number);
    // printf("%d\n", number>9 && number<100);

    // int length, breadth,;
    // printf("Enter Length Of the rectangle:");
    // scanf("%d",&length);
    // printf("Enter breadth of the rectangle :");
    // scanf("%d",&breadth);
    // printf("Area is : %d",length*breadth );

    // int marks;
    // printf("What is your marks? :");
    // scanf("%d", &marks);
    // if (marks>=0 && marks<=30)
    // {
    //     printf("Fail \n");
    // }else if(marks>30 && marks<=100){
    //     printf("Pass \n");

    // }else{
    //     printf("Wrong Marks!");
    // }
    // int x;
    // do{
    //     printf("entre your number:\n");
        
    //     scanf("%d",&x);
    //     if (x%7==0){
    //         break;
    //     }
        



    //     }while(1);

    // int x;
    // for(int i =x;i%7!=0;){
    //     scanf("%d",&x);
    //     if (x%7==0){break;}
    // }
  
    // int number = 1;  // Initialize the variable to store the current number
    // int product = 1; // Initialize the variable to store the product

    // // Start a while loop to iterate from 1 to 5
    // while (number <= 5) {
    //     // Update the product by multiplying it with the current number
    //     product *= number;

    //     // Print the current number and product in each iteration
    //     printf("Current number: %d, Current product: %d\n", number, product);

    //     // Increment the number for the next iteration
    //     number++;
    // }
    // int userInput;          // Variable to store user input
    // int previousNumbers[100]; // Array to store previous entered numbers
    // int hasDuplicate = 0;   // Flag to track if a duplicate is found
    // int index = 0;          // Index to keep track of the current position in the array

    // printf("Input numbers (stop if you input a duplicate):\n");

    // // Start a while loop to continue until a duplicate is entered
    // while (!hasDuplicate) {
    //     printf("Input a number: ");
    //     int readStatus = scanf("%d", &userInput);  // Read the user input

    //     // Check if the input is a valid integer
    //     if (readStatus != 1) {
    //         printf("Invalid input. Please enter a valid integer.\n");

    //         // Clear the input buffer
    //         while (getchar() != '\n');
    //         continue;
    //     }

    //     // Check if the current input is equal to any of the previous numbers
    //     for (int i = 0; i < index; i++) {
    //         if (userInput == previousNumbers[i]) {
    //             hasDuplicate = 1;  // Set the flag to indicate a duplicate is found
    //             printf("Duplicate number entered. Program will stop.\n");
    //             break;  // Exit the loop when a duplicate is found
    //         }
    //     }
    //     previousNumbers[index++] = userInput;  // Store the current input in the array    
    // }
// int main(){    
//     int hasDuplicate=0;
//     int index=0;
//     int ary[100];
//     int userInput;
//     while(!hasDuplicate){
//         printf("Input a number:\n");
//         int validity = scanf("%d",&userInput);
//         if(validity != 1){
//             printf("Please give a valid input:\n");
//             while (getchar() != '\n');
//             continue;
            
//         }
//         for(int i =0;i<index;i++){
//             if(userInput == ary[i]){
//                 printf("Duplicate is detected!");
//                 hasDuplicate =1;
//                 break;
//             }
//         }
//         ary[index++] = userInput;
//     }
//     return 0;
// }        
/*int main(){
    srand(time(NULL));
    int upper =20, lower = 1;
    int targetNumber = rand()% (upper-lower+1)+lower;
    printf("Guess the number!\n");
    int guessedNumber;
    int a=0;
    while(!a){
        
        int valid =scanf("%d",&guessedNumber);
        if(valid!=1){
            printf("please give valid!\n");
            while(getchar()!='\n');
            continue;
        }
        if(guessedNumber==targetNumber){
            printf("You gussed it right!:)\n");
            break;
        }
        else{
            printf("Try Again :(!\n");
        }
        

    }
    return 0;

}*/
int main(){
    // int cubes,a=1,b=0;
    // while(a<=20){
    //     cubes = pow(a,3);
    //     b=b+cubes;
    //     printf("Number is %d, Sum is %d\n",a,b);
    //     a++;
    // 
    int ary[100];
    int a,b,c=0,e=0;
    printf("Enter number(It will stop if you enter zero)\n");
    do{
        b=scanf("%d\n",&a);
        if (b!=1){
            printf("Enter a valid integer");
            while(getchar()!='\n');
            continue;
        }
        a=ary[c++];
    }while(a!=0);
    for(int d=0;d<100;d++){
        e=e+ary[d];

    }
    printf("Sum of all the integers entered is %d",e);
    return 0;
}