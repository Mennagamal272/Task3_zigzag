#include <stdio.h>
#include <stdlib.h>

void call_by_ref(int *n1,int *n2){
    int temp= *n1;
    *n1=*n2;
    *n2=temp;
    printf("inside call by ref   %d %d \n",*n1,*n2);
}

void call_by_value(int n1,int n2){
    int temp= n1;
     n1 = n2;
     n2 = temp;
     printf("inside call by value %d %d \n",n1,n2);
}
int main(){
int n1,n2;
printf("enter num1 :");
scanf("%d",&n1);
printf("enter num2 :");
scanf("%d",&n2);
printf("before %d %d \n",n1,n2);
call_by_value(n1,n2);
printf("after  call by value %d %d \n", n1 , n2);
call_by_ref(&n1,&n2);
printf("after  call by ref   %d %d \n", n1 , n2);

return 0;
}