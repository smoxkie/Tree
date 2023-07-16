#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=nullptr;
        this->right=nullptr;
    }
};
Node* constructBST(vector<int>&arr,int si,int ei){
    if(si>ei)return nullptr;
    int mid=(si+ei)/2;
    Node* node=new Node(arr[mid]);
    node->left=constructBST(arr,si,mid-1);
    node->right=constructBST(arr,mid+1,ei);
    return node;
}
void inorderTraversal(Node* root){
    if(root==nullptr)return;
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);

}
int maxEl(Node* root){
    if(root->right==nullptr)return root->data;
    return maxEl(root->right);
}
int minEl(Node* root){
    if(root->left==nullptr)return root->data;
    return minEl(root->left);
}
Node* search(Node* root, int value) {
    if (root == nullptr || root->data == value) {
        return root;
    }

    if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

int main(){
    vector<int>arr={10,20,30,40,50,60,70,80,90,100,110,120};
    int si=0;
    int ei=arr.size()-1;
    Node* root=nullptr;
    root=constructBST(arr,si,ei);
    inorderTraversal(root);
    cout<<endl;
    cout<<maxEl(root)<<endl;
    cout<<minEl(root)<<endl;

    int value = 40;
    Node* result = search(root, value);

    if (result != nullptr) {
    cout << value << " is found in the tree." << endl;
    } else {
        cout << value << " is not found in the tree." << endl;
    }
    
}