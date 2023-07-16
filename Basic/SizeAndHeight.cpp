#include <iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *left = nullptr;
    Node *right = nullptr;
    
    Node(int data){
        this->data = data;
    }
};

// contruct tree using recursion
int idx = 0;
Node *constructTree(vector<int>&arr){
    if(idx == arr.size() || arr[idx] == -1){
        idx++;
        return nullptr;
    }
    Node *node = new Node(arr[idx++]);
    node->left = constructTree(arr);
    node->right = constructTree(arr);
    
    return node;
}

void display(Node *node){
    if(node == nullptr){
        return;
    }
    
    string ans = "";
    ans+= (node->left == nullptr ? "." : to_string(node->left->data) + " ");
    ans+="<-" + to_string(node->data) + "->";
    
    ans+=(node->right == nullptr ? "." : to_string(node->right->data) + " ");
    
    cout<<ans<<endl;
    
    display(node->left);
    display(node->right);
}

// find the size of the tree ================
int size(Node *node){
    if(node == nullptr){
        return 0;
    }
    int countleft = size(node->left);
    int countright = size(node->right);
    return  countleft + countright + 1;
    
}

  // find the Height of the Tree ======
  int treeHeight(Node *node) {
    if (node == nullptr) {
        return -1;
    }
    int leftHeight = treeHeight(node->left);
    int rightHeight = treeHeight(node->right);
    return max(leftHeight, rightHeight) + 1;
}

   //  in terms of node the height is....  //

   int tree_Height(Node *node) {
    if (node == nullptr) {
        return 0;
    }
    int leftHeight = tree_Height(node->left);
    int rightHeight = tree_Height(node->right);
    return max(leftHeight, rightHeight) + 1;
}

//   Post order======

void preorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
      //  In Order tree====

      void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

  // Post-Order tree====

  void postorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

  //  Find the data..  ///

  Node* searchData(Node* root, int data) {
    if (root == nullptr || root->data == data) {
        return root;
    }
    if (data < root->data) {
        return searchData(root->left, data);
    }
    return searchData(root->right, data);
}

     // node to root path....  //

 bool nodeToRootPath(Node *node , int data, vector<Node*> &ans){
    if(node == nullptr){
        return false;
    }
    if(node->data == data){
        ans.push_back(node);
        return true;
    }
    bool res = nodeToRootPath(node->left, data, ans) || nodeToRootPath(node->right, data, ans);
    if(res){
        ans.push_back(node);
    }
    return res;
 }

   //  By vector....

   vector<Node*>nodeToRootPathTwo(Node *node, int data){
    if(node == nullptr){
        return {};
    }
    if(node->data == data){
        vector<Node*>base;
        base.push_back(node);
        return base;
    }
    vector<Node*> left = nodeToRootPathTwo(node->left, data);
    if(left.size() != 0){
        left.push_back(node);
        return left;
    }
    vector<Node*> right = nodeToRootPathTwo(node->right, data);
    if(right.size() != 0){
        right.push_back(node);
        return right;
    }
    return {};
   }
     //   use backtracking....  //
     bool rootToNodePath(Node* node, int data, vector<Node*>&ans){
        if(node == nullptr){
            return false;
        }
        if(node->data == data){
            ans.push_back(node);
            return true;
        }
        ans.push_back(node);
        bool res = rootToNodePath(node->left, data, ans) || rootToNodePath(node->right, data, ans);
        if(!res){
            ans.pop_back();
        }
        return res;
     }


int main() {
   vector<int>arr = {10,20,40,80, -1, -1, 90, 100, -1, -1, -1, 50, -1, -1, 30, 60, 110, 120, -1, -1, 140, -1, -1, -1, 70, -1, -1};
   
   Node *root = constructTree(arr);
   display(root);

    // int size = treeSize(root);
    cout << "Size of the tree: " << size(root) << "\n";
   
//    cout<<"Si<<size(root);
    int height = treeHeight(root);

    cout << "Height of the tree: " << height << "\n";
    int height_Node = tree_Height(root);
    cout << "Height of tree acc. to nodes: " << height_Node <<endl ;
   preorderTraversal(root);
   cout<<endl;
   inorderTraversal(root);
   cout<<endl;
   postorderTraversal(root);
    cout<<endl;
   int searchDataValue = 30;
    Node* result = searchData(root, searchDataValue);

    if (result) {
        cout << "Data " << searchDataValue << " found in the tree."<<endl;
    } else {
        cout << "Data " << searchDataValue << " not found in the tree."<<endl;
    }

//    cout<<searchData(root, 210)<<endl;
//    vector<Node*>ans;
//    cout<<nodeToRootPath(root, 90, ans);
//    cout<<endl;
//    for(Node* node : ans){
//     cout<<node->data<<" ";
//    }
//    cout<<endl;
//    vector<Node*>res = nodeToRootPathTwo(root, 90);
//    for(Node* node : res){
//     cout<<node->data<<" ";
//    }

   vector<Node*>ans;
   cout<<rootToNodePath(root, 90, ans)<<endl;
    for(Node* node : ans){
    cout<<node->data<<" ";
   }

    return 0;
}