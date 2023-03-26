#include <stdio.h>
#include <stdlib.h>

int main(){
int n , arr[100];
int count=0,temp;

printf("enter number of element : ");
scanf("%d",&n);

for(int i =0 ; i < n ; i++){
printf("enter number [%d] : ", i+1);
scanf("%d", &arr[i]);
}
printf("\n");

//sort array
for(int i =0 ; i < n ; i++){
    for(int j = i+1 ; j < n ;j++)
        if(arr[i] > arr[j]){
           temp = arr[i];
           arr[i]=arr[j];
           arr[j]=temp;}
}
for(int i =0 ; i < n ; i++){
    count=1;
    for(int j = i+1 ; j < n ;j++){
        if(arr[i] == arr[j])
            count++;
        else
            break;}
            if(arr[i] != arr[i-1])
               printf("element %d occurs %d times \n",arr[i],count);
}
printf("\n");
return 0;
}
