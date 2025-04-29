#include <stdio.h>
int enqueue_front(int arr[],int top,int size){
  int num;
  printf("enter the number to insert at front:");
  scanf("%d",&num);
  if(top==size){
    printf("queue is full\n");
  }
  else{
    for(int i=top;i>0;i--){
      arr[i]=arr[i-1];
    }
      arr[0]=num;
      top+=1;
    }
    return top;
  }
  int enqueue_rear(int arr[],int top,int size){
    int num;
    printf("enter the number to insert at rear:");
    scanf("%d",&num);
    if(top==size){
      printf("queue is full\n");
    }
    else{
      arr[top]=num;
      top+=1;
    }
    return top;
  }
  int dequeue_front(int arr[],int top){
  if(top==0){
    printf("queue is empty\n");
  }
  else{
    arr[0]=0;
    for(int i=0;i<top-1;i++){
      arr[i]=arr[i+1];
    }
    top-=1;
  }
  return top;
}
 int dequeue_rear(int arr[],int top){
 if(top==0){
   printf("queue is empty\n");
 }
 else{
   arr[top-1]=0;
   top-=1;
  }
   return top;
 }
 void print(int arr[],int top){
   printf("\n");
   if(top==0){
     printf("queue is empty\n");
   }
   else{
     for(int i=0;i<top;i++){
       printf("%d ",arr[i]);
     }
     printf("\n\n");
   }
 }
int main()
{
  int size;
  printf("enter the size of the queue:");
  scanf("%d",&size);
  int arr[size];
  int top=0;
  int option;
  do{
    printf("enter the option:\n");
    printf("1.enqueue front\n2.enqueue rear\n3.dequeue front\n4.dequeue rear\n5.print\n6.exit:");
    scanf("%d",&option);
    switch(option){
    case 1:
      top=enqueue_front(arr,top,size);
      break;
    case 2:
      top=enqueue_rear(arr,top,size);
      break;
    case 3:
      top=dequeue_front(arr,top);
      break;
    case 4:
      top=dequeue_rear(arr,top);
      break;
    case 5:
      print(arr,top);
      break;
    case 6:
      printf("exiting from the dequeue\n");
      break;
  }
 }while(option!=6);
}
