#include<stdio.h>

int enqueue(int arr[],int front,int rear,int size){
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  if((rear+1)%size==front){
    printf("Queue is full! \n");
  }
  else{
    if(front == -1){
      front=0;
      rear=0;
    }
    else{
      rear=(rear+1)%size;
    }
    arr[rear]=num;
  }
  return rear;
}

int dequeue(int arr[],int front,int rear,int size){
  if(front == -1){
    printf("Queue is empty! \n");
  }
  else{
    arr[front]=0;
    if(front==rear){
      front= -1;
      rear= -1;
    }
    else{
      front=(front+1)%size;
    }
  }
  return front;
}

void print(int arr[],int front,int rear,int size){
  printf("\n");
  if(front== -1){
    printf("Queue is empty!\n");
  }
  else{
    int i=front;
    while(1){
      printf("%d ",arr[i]);
      if(i == rear){
        break;
      }
      i = (i+1)%size;
    }
    printf("\n\n");
  }
}

int main(){
  int size;
  printf("Enter the size of the circular queue :");
  scanf("%d",&size);
  int arr[size];
  for (int i=0; i<size; i++){
    arr[i]=0;
  }
  int front= -1;
  int rear= -1;
  int option;
  
  do{
    printf("Enter the option: \n");
    printf("1.ENQUEUE\n2.DEQUEUE\n3.PRINT\n4.EXIT : ");
    scanf("%d",&option);
    
    switch (option){
      
      case 1:
      rear=enqueue(arr,front,rear,size);
      if(front== -1)front=0;
      break;
      
      case 2:
      front=dequeue(arr,front,rear,size);
      break;
      
      case 3:
      print(arr,front,rear,size);
      break;
      
      case 4:
       printf("EXITING FROM THE QUEUE\n");
      break;
    }
  }
  while(option != 4);
}
