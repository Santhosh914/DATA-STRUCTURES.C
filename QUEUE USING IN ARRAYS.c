#include <stdio.h>

int enqueue(int arr[],int top,int size){
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
if(top==size){
  printf("Queue is full\n");
}
else{
  arr[top]=num;
  top+=1;
}
return top;
}
int dequeue(int arr[],int top){
  if(top==0){
     printf("Queue is empty!\n");
  }
  else{
    arr[0];
    for(int i=0;i<top-1;i++){
      arr[i]=arr[i+1];
    }
    top-=1;
    return top;
  }
}

void print(int arr[],int top){
  printf("\n");
  if(top==0){
    printf("Queue is empty\n");
  }
  else{
    for(int i=0;i<top;i++){
      printf("%d ",arr[i]);
    }
    printf("\n\n");
  }
}

int main(){
  int size;
  printf("Enter the size of the array: ");
  scanf("%d",&size);
  int arr[size];
  int top=0;
  int option;
  do{
    printf("Enter the option: \n");
    printf("1.ENQUEUE\n2.DEQUEUE\n3.PRINT\nEXIT: ");
    scanf("%d",&option);
    switch(option){
      case 1:
      top=enqueue(arr,top,size);
      break;
      
      case 2:
      top=dequeue(arr,top);
      break;
      
      case 3:
      print(arr,top);
      break;
      
      case 4:
      printf("Exiting from the Queue\n");
      break;
    }
  }
  while (option!=4);
}
