
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int checkNumOfDigits(int num);
int whoAreYou();


int main(){
    printf("Hello, World!\n");
    printf("enter a number: ");
    int num;
    scanf("%d\n", &num);
    printf("The number you entered is: %d\n", num);
    printf("The num of digits in the number is: %d\n", checkNumOfDigits(num));
    whoAreYou();
    return 0;
}

int checkNumOfDigits(int num){
    return (int)(log10(num) + 1);
}

int whoAreYou(){
    printf("I am a C program.\n");
    return 0;   
}
