#include<stdio.h>
int main () {
 int arr [5]={1,3,2,4,5};
 int element =4;
 for (int i=0; i<=4; i++){
     if (element==arr[i]){
         printf("position of the element: %d",i);
     }
   }
}
