#include <iostream>
using namespace std;

class node{
public:
int data;
node *parent;
node *left;
node *right;
node(){
 data=-1;
 parent=NULL;
 left=NULL;
 right=NULL;
 }
};

class bTree{
public:
node *root;

public:
bTree(){
root=NULL;
}

void insert(node *v,int x)
 {
  node *temp=new node;
  temp->data=x;
  if(root==NULL)
  {
   root=temp;
  }
  else
  {
   if(x < v->data)
   {
    if(v->left != NULL)
    {
     insert(v->left,x);
    }
    else
    {
     v->left=temp;
    }
   }
   else
   {
    if(v->right != NULL)
    {
     insert(v->right,x);
    }
    else
    {
     v->right=temp;
    }
   }
 }
}
/*
void insertLeft(node *temp,int x){
 node *tmp=new node;
 tmp->data=x;
 temp->left=tmp;
 tmp->parent=temp;
}


void insertRight(node *temp,int x){
 node *tmp=new node;
 tmp->data=x;
 temp->right=tmp;
 tmp->parent=temp;
}

void insert(node *t,int val){
node *temp=new node;
temp->data=val;


if(root==NULL){
 root->data=val;
}                                  

else

while(t!=NULL){

  if(val < t->data){
    if(t->left==NULL){
      insertLeft(t,val);
      }
    else
    {
     t=t->left;
     break;
     }
  }
  else{
    if(t->right==NULL){
      insertRight(t,val);
    }
  else{
    t=t->right;
    break;
    }
  }
 }
}  */




void display(node *temp){
  if(temp==NULL){
    return;
  }
  display(temp->left);
  cout<<temp->data<<" ";
  display(temp->right);
}

};

int main(){
bTree b;
b.insert(b.root,2);
b.insert(b.root,7);
b.insert(b.root,4);
b.insert(b.root,11);
b.insert(b.root,3);
b.display(b.root);
return 0;
}
