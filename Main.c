#include <stdio.h>

int add(int num1, int num2);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(){
    int num1, num2;

    
    printf("enter a number: ");
    scanf("%d", &num1);
    
    printf("enter the smaller number than the previous number: ");
    scanf("%d", &num2);

    int addRes = add(num1, num2);
    int subRes = sub(num1,num2);
    int mulRes = mul(num1, num2);
    int divRes = div(num1, num2);

    printf("The sum of the numbers are: %d\n",addRes);
    printf("The substraction of the numbers are: %d\n",subRes);
    printf("The multiplication of the numbers are: %d",mulRes);
    printf("The division of the numbers are: %d",divRes);

    return 0;

}

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}