#include <stdio.h>

int add(int num1, int num2);
int sub(int a, int b);
int mal(int a, int b);

int main(){
    int num1 = 10;
    int num2 = 20;

    int addRes = add(num1, num2);
    int subRes = sub(num2,num1);
    int malres = mal(num1, num2);

    printf("The sum of the number is: %d\n",addRes);
    printf("The substraction of the number is: %d",subRes);

    return 0;

}

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a - b;
}
int mal(int a, int b){
    return a*b;
}