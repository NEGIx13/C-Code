#include <stdio.h>

struct node{
  int data;
  struct node* left;
  struct node* right;
};

struct node* insert(struct node* root, int data);
struct node* search(struct node* root, int key);
void inorder(struct node* root);
void preorder(struct node* root);
void postorder(struct node* root);

int main(){
    struct node* start = NULL;
    start = insert(start, 40);
    start = insert(start, 50);
    start = insert(start, 70);
    start = insert(start, 30);
    start = insert(start, 10);
    
    printf("IN-ORDER TRAVERSAL:- ");
    inorder(start);
    printf("\n");
    printf("PRE-ORDER TRAVERSAL:- ");
    preorder(start);
    printf("\n");
    printf("POST-ORDER TRAVERSAL:- ");
    postorder(start);
    printf("\n");
    
    struct node* result = search(start, 40);
    if(result != NULL){
        printf("element not found in the tree \n");
    }
    else{
        printf("node found \n");
    }
    
    result = search(start, 90);
    if(result != NULL){
        printf("element not found in the tree \n");
    }
    else{
        printf("node found \n");
    }
    return 0;
}

struct node* insert(struct node* root, int data){
    if(root == NULL){
        struct node* n_node = (struct node*)malloc(sizeof(struct node));
        n_node->data = data;
        n_node->left = NULL;
        n_node->right = NULL;
        return n_node;
    }
    if(data < root->data){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}

struct node* search(struct node* root, int key){
    if(root == NULL || root == key){
        return root;
    }
    if(root->data < key){
        search(root->left, key);
    }
    else{
        search(root->right, key);
    }
    return NULL;
}

void inorder(struct node* root){
    if(root != NULL){
        inorder(root->left);
        printf(" %d ", root->data);
        inorder(root->right);
    }
}
void preorder(struct node* root){
    if(root != NULL){
        printf(" %d ", root->data);
        inorder(root->left);
        inorder(root->right);
    }
}
void postorder(struct node* root){
    if(root != NULL){
        inorder(root->left);
        inorder(root->right);
        printf(" %d ", root->data);
    }
}