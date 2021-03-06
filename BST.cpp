
#include <iostream>

using namespace std;
struct bstNode{
    int data;
    bstNode* right;
    bstNode* left;
};

bstNode* root = new bstNode;
bstNode* getNewNode(int data){
    bstNode* newNode = new bstNode;
    newNode->data = data;
    newNode->right = NULL;
    newNode->left = NULL;
    return newNode;
}

bstNode* insert(bstNode* root, int data){
    if(root == NULL){
        root = getNewNode(data);
        return root;
    }
    else if(data<= root->data){
       root->left = insert(root->left,data); 
    }
    else if(data> root->data){
        root->right = insert(root->right,data);
    }
    return root;
}

bool search(bstNode* root, int data){
    if(root == NULL){
        return false;
    }
    else if(root->data == data){
        return true;
    }
    else if(data<=root->data){
        return search(root->left,data);
    }
    else if(data>root->data){
        return search(root->right,data);
    }
}

int findHeight(bstNode* root){
	int leftheight;
	int rightheight;
	if(root == NULL){
		return -1;
	}
	leftheight = findHeight(root->left);
	rightheight = findHeight(root->right);
	return max(leftheight,rightheight)+1;
}

int main()
{
    root = NULL;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,8);
    root = insert(root,17);
    root = insert(root,22);
    bool s = search(root, 10);
    if(s){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    cout<<findHeight(root)<<endl;
   //cout << "Hello World" << endl; 
   
   return 0;
}
