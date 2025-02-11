#include<stdio.h>
int main () {
    int arr [5]={'a','b','c','d','e'};
    for (int i=0; i<5; i++){
        printf("%p -> %c\n", &arr[i],arr[i]);
    }
}
