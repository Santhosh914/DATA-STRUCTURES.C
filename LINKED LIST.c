#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node*link;
  };
  
  int main (){
    struct Node*d1=malloc(sizeof (struct Node));
    d1->data=10;
    d1->link=NULL; 
    
    struct Node*d2=malloc(sizeof (struct Node));
    d2->data=20;
    d2->link=NULL;
    
    struct Node*d3=malloc(sizeof (struct Node));
    d3->data=30;
    d3->link=NULL;
    
    d1->link=d2;
    d2->link=d3;
    
    struct Node *head=d1;
    struct Node*s1=malloc(sizeof (struct Node));
    s1->data=32;
    s1->link=NULL;
    
    //add begin
    head=NULL;
    s1->link=d1;
    head=s1;
    
    struct Node*s2=malloc(sizeof (struct Node));
    s2->data=102;
    s2->link=NULL;

    //add begin
    head=NULL;
    s2->link=s1;
    head=s2;
    
    //delete end
    d2->link=NULL;
    free(d3);
    
    while(head !=NULL){
      printf("%d->",head->data);
      head=head->link;
    }
  }
