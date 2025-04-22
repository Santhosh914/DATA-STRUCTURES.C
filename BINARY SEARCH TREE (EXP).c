#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node*left;
   struct node*right;
};

int main(){
struct node*root=malloc(sizeof(struct node));
 root->data=50;
 
struct node*p1=malloc(sizeof(struct node));
 p1->data=35;
 
 struct node*p2=malloc(sizeof(struct node));
 p2->data=55;
 
 struct node*c1=malloc(sizeof(struct node));
 c1->data=30;
 
 struct node*c2=malloc(sizeof(struct node));
 c2->data=45;
 
  struct node*c3=malloc(sizeof(struct node));
 c3->data=65;
 
  struct node*gc=malloc(sizeof(struct node));
 gc->data=40;
 
  struct node*gc1=malloc(sizeof(struct node));
 gc1->data=60;
 
  struct node*gc2=malloc(sizeof(struct node));
 gc2->data=95;
 
  struct node*gc3=malloc(sizeof(struct node));
 gc3->data=90;
 
 root->left=p1;
 root->right=p2;
 root->left->left=c1;
 root->left->right=c2;
 root->right->right=c3;
 root->left->left->right=gc;
 root->right->right->left=gc1;
 root->right->right->left->right=gc2;
 root->right->right->left->right->left=gc3;
 
 printf("TREE DATA IS : ");
 printf("%d ",root->data);
 printf("%d ",root->left->data);
 printf("%d ",root->right->data);
 printf("%d ",root->left->left->data);
 printf("%d ",root->left->right->data);
 printf("%d ",root->right->right->data);
 printf("%d ",root->left->left->right->data);
 printf("%d ",root->right->right->left->data);
 printf("%d ",root->right->right->left->right->data);
 printf("%d ",root->right->right->left->right->left->data);
 }
