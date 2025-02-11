#include<stdio.h>
int main () {
    int arr [5]={5,4,3,2,1};
    for (int j=0; j<=3; j++){
        for(int i=0; i<=3; i++){
            if (arr[i] >arr[i+1]){
                int temp= arr[i];
                arr[i]= arr[i+1];
                arr[i+1]=temp;
            } 
        }
    }
    for (int i=0; i<=4; i++){
        printf("%d ", arr[i]);
    }
}
