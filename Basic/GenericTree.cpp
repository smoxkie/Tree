#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Node{
    public:
    int data = 0;
    vector<Node*>childs;

    Node(int data){
        this->data = data;
    }
}
Node* constructTree(vector<int>& arr){
    stack<Node*>st;
   for(int i=0;i<arr.size()-1;i++){
    int ele = arr[i];
    if(ele != -1){
        st.push(new Node(ele));
    }else{
        Node* node = st.top();
        st.pop();
        st.top()->childs.push_back(node);
    }
   }

  return st.top();

}
void printTree(Node* node) {
   string str = "";
   str+=(to_string(node->data) + "->");
   for(Node* child: node->childs){
    str+=(to_string(child->data) + " ");
   }
   cout<<str<<endl;
   for(Node* child: node->childs){
    printTree(child);
   }
}
          //  size......
int size(Node* node){
    int ans = 0;
    for(Node* child: node->childs){
        ans+=size(child);
    }
    return ans+1;
}

         //  find......

bool find(Node* node, int data){
    if(node->data == data){
        return true;
    }
    for(Node* child: node->childs){
        if(find(child, data)){
            return true;
        }
    }
    return false;
}

int main(){

vector<int> arr = {1, 2, 4, -1, 5, -1, -1, 3, 6, -1, 7, 8, -1, -1, 9, -1};

    Node* root = constructTree(arr);

    // cout << "Tree values: ";
    printTree(node);
    // cout << endl;



    return 0;

}