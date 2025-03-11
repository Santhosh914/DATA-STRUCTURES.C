#include <stdio.h>
#include<stdlib.h>
struct Node {
  int data;
  struct Node*link;
};
int main () {
  struct Node*head= NULL;
  //ADD END
  int NUM=10;
  //create a node with data 10
  struct Node*d1=malloc(sizeof (struct Node));
  d1->data=NUM;
  d1->link=NULL;
  head=d1;
  NUM=20;
  struct Node*d2=malloc(sizeof (struct Node));
  d2->data=NUM;
  d2->link=NULL;
  struct Node*TT=head;
  while(TT->link!=NULL){
    TT=TT->link;
  }
  TT->link=d2;
  NUM=45;
  struct Node*new=malloc(sizeof (struct Node));
  new->data=NUM;
  new->link=NULL;
  TT=head;
  while(TT->link!=NULL){
    TT=TT->link;
  }
  TT->link=new;
  NUM=25;
  struct Node*new1=malloc(sizeof (struct Node));
  new1->data=NUM;
  new1->link=NULL;
  new1->link=head;
  head=new1;
  struct Node*dummy=head;
  while(dummy->link->link!=NULL){
    dummy=dummy->link;
  }
  struct Node*temp=dummy->link;
  dummy->link=NULL;
  free(temp);
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->link;
  }
}
