#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* left=nullptr;
    node* right=nullptr;
    
    node(int data){
        this->data=data;
    }
};

node* buildTree(node* root,vector<int>source,int &idx){
   int data=source[idx];
   if(data==-1)return nullptr;
   root=new node(data);
   idx=idx+1;
   root->left=buildTree(root->left,source,idx);
   idx=idx+1;
   root->right=buildTree(root->right,source,idx);
   return root;
}
void InorderTraversal(node* root){
    if(root==nullptr)return;
     cout<<root->data<<" ";
    InorderTraversal(root->left);
    InorderTraversal(root->right);

}
int treeSize(node* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + treeSize(root->left) + treeSize(root->right);
}
int treeHeight(node* root) {
    if (root == nullptr) {
        return -1;
    }
    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);
    return max(leftHeight, rightHeight) + 1;
}
int main(){
 node* root=nullptr;
 vector<int>source={10,20,40,80,-1,-1,90,100,-1,-1,-1,50,-1,-1,30,60,110,120,-1,-1,140,-1,-1,-1,70,-1,-1};
 int idx=0;
 root=buildTree(root,source,idx);
 InorderTraversal(root);
 cout<<endl;
  int size = treeSize(root);
    cout << "Size of the tree: " << size << "\n";
     int height = treeHeight(root);
    cout << "Height of the tree: " << height << "\n";
}