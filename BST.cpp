#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int d;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
void insert(int data)
{
    struct node *t,*p,*cur;
    t=(struct node *)malloc(sizeof(struct node));
    t->d=data;
    t->left=NULL;
    t->right=NULL;
    p=root; 
    if(root==NULL)
    {
        root=t;
        p=root;
       cout<<root->d<<"  ";
    }
    else
    {
        cur=root;
        while(cur)
        {   p=cur;
            if(cur->d > t->d)
            cur=cur->left;
            else if(cur->d < t->d)
            cur=cur->right;
        }
        if(t->d > p->d)
           p->right= t; 
        else if(t->d < p->d)
           p->left= t; 
    }  
}
void del()
{
     struct node *cur,*t,*p;
    int m;
    cout<<"Enter the element to be deleted";
    cin>>m;
    t->d=m;
    cur=root;
        while(cur)
        {   p=cur;
            if(cur->d > t->d)
            cur=cur->left;
            else if(cur->d < t->d)
            cur=cur->right;
        }
    if((p->left == NULL) && (p->right == NULL))
    {
        if(p->left==t)
        p->left=NULL;
        else if(p->right==t)
        p->right=NULL;
        free(t);
    }
    
    else if((p->left != NULL) && (p->right == NULL))
    {
        if(p->left==t)
        p->left=t->left;
        else if(p->right==t)
        p->right=t->left;
        free(t);
    }
    else if((p->left == NULL) && (p->right != NULL))
    {
        if(p->left==t)
        p->left=cur->right;
        else if(p->right==t)
        p->right=t->right;
        free(t);
    }
}
/* Given a binary tree, print its nodes according to the 
"bottom-up" postorder traversal. */
void printPostorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
    // first recur on left subtree 
    printPostorder(node->left); 
  
    // then recur on right subtree 
    printPostorder(node->right); 
  
    // now deal with the node 
    cout << node->d<< " "; 
} 
  
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first recur on left child */
    printInorder(node->left); 
  
    /* then print the data of node */
    cout << node->d<< " "; 
  
    /* now recur on right child */
    printInorder(node->right); 
} 
  
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first print data of node */
    cout << node->d << " "; 
  
    /* then recur on left sutree */
    printPreorder(node->left);  
  
    /* now recur on right subtree */
    printPreorder(node->right); 
}  


int main()
{
    insert(25);
    insert(30);
    insert(22);
    insert(70);
    insert(55);
    printPostorder(root);
    del();
     printPreorder(root);
    del();
     printPreorder(root);
}

