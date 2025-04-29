#include<stdio.h>
int enqueue (int arr[],int priority[],int top,int size){
  int num,prio;
  printf("enter the number:");
  scanf("%d",&num);
  printf("enter its priority(lower number = higher priority):");
  scanf("%d",&prio);
  if (top==size){
    printf("Queue is full \n");
  }
  else{
    int i=top;
    while(i>0&& priority [i-1]>prio){
      arr[i]=arr[i-1];
      priority [i]= priority[i-1];
      i--;
    }
    arr[i]=num;
    priority [i] = prio;
    top += 1;
  }
  return top;
}
int dequeue (int arr [],int priority[],int top){
  if (top==0){
    printf("Queue is empty:\n");
  }
  else{
    arr [0]=0;
    priority [0]=0;
    for (int i=0;i< top-1;i++){
      arr [i] = arr [i+1];
      priority [i] = priority [i+1];
    }
    top -= 1;
  }
  return top;
}
void print (int arr [],int priority [],int top){
  printf("\n");
  if (top==0){
    printf("Queue is empty!\n");
  }
  else{
    printf("element \t priority \n");
    for (int i=0;i<top;i++){
      printf("%d t %d\n",arr [i],priority [i]);
    }
    printf("\n");
  }
}
int main (){
  int size;
  printf("enter the size of the priority Queue:");
  scanf("%d", &size);
  int arr [size];
  int priority [size];
  int top=0;
  int option;
  do{
    printf("enter the option:\n");
    printf("1.Enqueue\n2.Dequeue\n3.print\n4.Exit:");
    scanf("%d",&option);
    switch(option){
      case 1:
      top=enqueue (arr,priority,top,size);
      break;
      case 2:
      top=dequeue (arr,priority,top);
      break;
      case 3:
      print (arr,priority,top);
      break;
      case 4:
      printf("Exiting from the priority queue\n");
    }
  }while (option!=4);
}
