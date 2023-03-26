#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num){
    for(int i = 2 ;i <= sqrt(num) ; i++){
     if(num % i == 0 )
        return 0 ;}

    return 1;
}

int main(){
int num;

printf("Enter number : ");
scanf("%d",&num);
if(isPrime(num))
   printf("%d is prime ",num);
else
    printf("%d is not prime ",num);
printf("\n");

return 0;
}