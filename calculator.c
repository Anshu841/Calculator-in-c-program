#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    
    char oprator;
    printf("Enter a oprator like (+,-,/,*): ");
    scanf("%c",&oprator);
    
    
    switch(oprator){
        case '+':
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        c = a + b;
        printf("Two values sum: %d",c);
        break;
        
        case '-':
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        c = a - b;
        printf(" Two values subtraction: %d",c);
        break;
        
        case '*':
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        c = a * b;
        printf("Two values multiply: %d",c);
        break;
        
        case '/':
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        c = a / b;
        printf("Two values divided: %d",c);
        break;
        if(b != 0){
            c = a / b;
        }
        else {
            printf("ERROR : divided by zero is not allow");
            return 1;
        }
        break;
        
        default:
        printf("Invalid : oprators ");
        return 1;
    }
    
    
    return 0;
}
