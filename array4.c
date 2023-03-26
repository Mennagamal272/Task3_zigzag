#include <stdio.h>
#include <stdlib.h>

int main(){
int n , arr[100];
int temp , choice ;
printf("enter number of element : ");
scanf("%d",&n);

for(int i =0 ; i < n ; i++){
printf("enter number [%d] : ", i+1);
scanf("%d", &arr[i]);
}
printf("\n");

for(int i =0 ; i < n ; i++){
    for(int j = i+1 ; j < n ;j++)
        if(arr[i] > arr[j]){
           temp = arr[i];
           arr[i]=arr[j];
           arr[j]=temp;}
}

printf("1 : for Sort in ascending order\n2 : Sort in descending order \n");
printf("enter your choice : ");
scanf("%d",&choice);

if(choice == 1 ){
    for(int i =0 ; i<n ; i++){
      printf(" %d ",arr[i]);
    }
    printf("\n");}
else if(choice == 2 ){
    for(int i =n-1 ; i>=0 ; i--){
      printf(" %d ",arr[i]);
    }
    printf("\n");}
else
        printf("Invalid choice \n");
return 0;
}
