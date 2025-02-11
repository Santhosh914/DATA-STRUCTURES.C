#include<stdio.h>
int main () {
    int arr[5]={7,2,3,9,5};
    for(int i=0; i<5; i++){
        if(arr[i] %2 ==0){
            printf(" even ");
        }
        else{
            printf(" odd ");
        }
    }
}
