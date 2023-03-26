
#include <stdio.h>
#include <stdlib.h>

int main(){
int n , arr[100];
int pos ,num;
printf("enter number of element : ");
scanf("%d",&n);

for(int i =0 ; i < n ; i++){
printf("enter number [%d] : ", i+1);
scanf("%d", &arr[i]);
}

printf("enter position : ");
scanf("%d", &pos);
printf("enter number : ");
scanf("%d", &num);

printf("array before insert number : ");
for(int i =0 ; i<n ; i++){
 printf(" %d ",arr[i]);
}
printf("\n");


for(int i = n ; i >= pos ; i--){
     arr[i] = arr[i-1] ;
}
arr[pos-1] = num ;

printf("array after  insert number : ");
for(int i =0 ; i<n+1 ; i++){
 printf(" %d ",arr[i]);
}
printf("\n");

return 0;
}