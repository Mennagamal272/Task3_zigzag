#include <stdio.h>
#include <stdlib.h>

int fib(int num){
    if(num == 1 || num == 0)
        return num;
    else
       return fib(num-1)+fib(num-2);
}

int main(){
int n;
printf("enter nth fib term : ");
scanf("%d",&n);

printf("term = %d",fib(n));
printf("\n");

return 0;
}
