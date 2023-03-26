
#include <stdio.h>
#include <stdlib.h>

int factorial(int num){
    if(num == 1)
        return 1;
    else
       return num * factorial(num-1);
}
int main(){
int n;
printf("enter number : ");
scanf("%d",&n);
printf("%d ! = %d",n,factorial(n));
printf("\n");

return 0;
}