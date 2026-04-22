#include <stdio.h>
int main() {
    float a,b;
    char op;

    printf("Enter operator: ");
    scanf(" %c",&op);

    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);

    switch(op){
        case '+': printf("Result = %.2f",a+b); break;
        case '-': printf("Result = %.2f",a-b); break;
        case '*': printf("Result = %.2f",a*b); break;
        case '/': printf("Result = %.2f",a/b); break;
        default: printf("Invalid operator");
    }
    return 0;
}

output

Enter operator: +
Enter two numbers: 7
6
Result = 13.00

=== Code Execution Successful ===
