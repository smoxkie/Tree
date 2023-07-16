#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node
{
public:
    int data;
    Node *left = nullptr;
    Node *right = nullptr;

    Node(int data)
    {
        this->data = data;
    }
};


int idx = 0;
Node *constructTree(vector<int> &arr)
{
    if (idx == arr.size() || arr[idx] == -1)
    {
        idx++;
        return nullptr;
    }
    Node *node = new Node(arr[idx++]);
    node->left = constructTree(arr);
    node->right = constructTree(arr);

    return node;
}
void display(Node *node)
{
    if (node == nullptr)
    {
        return;
    }

    string ans = "";
    ans += (node->left == nullptr ? "." : to_string(node->left->data) + " ");
    ans += "<-" + to_string(node->data) + "->";

    ans += (node->right == nullptr ? "." : to_string(node->right->data) + " ");

    cout << ans << endl;

    display(node->left);
    display(node->right);
}

int size(Node *node){
    if(node == nullptr){
        return 0;
    }
    int countleft = size(node->left);
    int countright = size(node->right);
    return  countleft + countright + 1;
    
}

Node* binaryTree(vector<int>&arr,int start,int end)
{
    if(start > end)return nullptr;

    int mid = start + (end - start)/2;

    Node* newNode = new Node(arr[mid]);
    newNode->left = binaryTree(arr,start,mid-1);
    newNode->right = binaryTree(arr,mid+1,end);

    return newNode;
}

int main()
{
    vector<int>arr{10,20,30,40,50,60,70,80,90,100,110,120};

    Node* root = binaryTree(arr,0,arr.size()-1);

    display(root);
    
}