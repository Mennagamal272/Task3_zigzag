#include <stdio.h>
#include <stdlib.h>

void search_element(int element ,int *arr,int n){
int flag = 0;
for(int i=0 ; i<n ; i++){
    if(element == arr[i]){
        printf("%d at index %d \n",element,i+1);
        flag=1;
        }
        }
    if(flag == 1)
       return printf("");
    else
       return printf("%d not found ",element);
}

int main(){
int n , arr[100];
int element ,temp ;
printf("enter number of element : ");
scanf("%d",&n);

for(int i =0 ; i < n ; i++){
printf("enter number [%d] : ", i+1);
scanf("%d", &arr[i]);
}
printf("\n");

printf("enter element to search : ");
scanf("%d",&element);
search_element(element,arr,n);
printf("\n");

return 0;
}