#include <stdio.h>

int add(int num1, int num2);

int main(){
    int num1 = 10;
    int num2 = 20;

    int result = add(num1, num2);
    int result1 = minus(num1,num2);

    printf("The sum of the number is: %d", result);
    printf("The substraction of the number is: %d",result1);

    return 0;

}

int add(int a, int b){
    return a+b;
}
int minus(int a, int b){
    return a - b;
}
