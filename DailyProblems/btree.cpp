#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void inOrder(Node *root) {
        if(root==NULL) return;

        inOrder(root->left);
        cout<<root->data<<"->";
        inOrder(root->right);

    }
    
    void preOrder(Node *root) {
        if(root== NULL) return;
        cout<<root->data<<"->";
        preOrder(root->left);
        preOrder(root->right);
    }
    
    void postOrder(Node *root) {
        if(root == NULL) return;

        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<"->";
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;
	cout<<"Enter the size of the tree :";
    std::cin >> t;
	cout<<"Enter the nodes in the tree :"<<endl;
	
    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	cout<<"The tree in inorder is :";
	myTree.inOrder(root);
	cout<<endl;
	  	cout<<"The tree in Post Order is :";
	myTree.postOrder(root);
	cout<<endl;
	  	cout<<"The tree in Pre Order is :";
	myTree.preOrder(root);
    return 0;
}

