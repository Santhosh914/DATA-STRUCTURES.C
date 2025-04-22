#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*left;
  struct node*right;
};
int main(){
  struct node*root=malloc(sizeof(struct node));
  root->data=10;
  struct node*p1=malloc(sizeof(struct node));
  p1->data=20;
  root->left=p1;
  struct node*p2=malloc(sizeof(struct node));
  p2->data=30;
  root->right=p2;
  struct node*c1=malloc(sizeof(struct node));
  c1->data=40;
  root->left->left=c1;
  struct node*c2=malloc(sizeof(struct node));
  c2->data=50;
  root->left->right=c2;
  struct node*gc=malloc(sizeof(struct node));
  gc->data=70;
  root->left->right->left=gc;
  printf("Tree data is:");
  printf("%d ",root->data);
  printf("%d ",root->left->data);
  printf("%d ",root->right->data);
  printf("%d ",root->left->left->data);
  printf("%d ",root->left->right->data);
  printf("%d ",root->left->right->left->data);
}
