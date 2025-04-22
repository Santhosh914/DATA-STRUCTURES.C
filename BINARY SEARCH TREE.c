#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node*left;
   struct node*right;
};

int main(){
  struct node*root=malloc(sizeof(struct node));
  root->data=12;
  
   struct node*p1=malloc(sizeof(struct node));
  p1->data=10;
  
   struct node*p2=malloc(sizeof(struct node));
   p2->data=15;
  
   struct node*c1=malloc(sizeof(struct node));
    c1->data=5;
  
   struct node*c2=malloc(sizeof(struct node));
  c2->data=13;
  
   struct node*c3=malloc(sizeof(struct node));
  c3->data=19;
  
   struct node*gc1=malloc(sizeof(struct node));
  gc1->data=3;
 
   struct node*gc2=malloc(sizeof(struct node));
  gc2->data=4;
  
  root->left=p1;
  root->right=p2;
  root->left->left=c1;
  root->right->left=c2;
  root->right->right=c3;
  root->left->left->left=gc1;
  root->left->left->left->right=gc2;
    
  printf("Tree Data Is : ");
  printf("%d ",root->data);
  printf("%d ",root->left->data);
  printf("%d ",root->right->data);
  printf("%d ",root->left->left->data);
  printf("%d ",root->right->left->data);
  printf("%d ",root->right->right->data);
  printf("%d ",root->left->left->left->data);
  printf("%d ",root->left->left->left->right->data);
}
