#include <stdio.h>

int add(int num1, int num2);

int main(){
    int num1 = 10;
    int num2 = 20;

    int result = add(num1, num2);

    printf("The sum of the number is: %d", result);

    return 0;

}

int add(int a, int b){
    return a+b;
}