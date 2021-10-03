int count=0;
void TargetPair(Node *node,int tar)
{

  vector<Node*> LeftList;
 

  vector<Node*> RightList;

  Node *curr_left = node;
  Node *curr_right = node;
 
  while (curr_left != NULL ||
         curr_right != NULL ||
         LeftList.size() > 0 &&
         RightList.size() > 0)
  {
   
    while (curr_left != NULL)
    {
      LeftList.push_back(curr_left);
      curr_left = curr_left -> left;
    }
 

    while (curr_right != NULL)
    {
      RightList.push_back(curr_right);
      curr_right = curr_right -> right;
    }
 
    Node *LeftNode =
          LeftList[LeftList.size() - 1];
 

    Node *RightNode =
          RightList[RightList.size() - 1];
 
    int leftVal = LeftNode -> data;
    int rightVal = RightNode -> data;
 
    if (leftVal >= rightVal)
      break;
 
    if (leftVal + rightVal < tar)
    {
      LeftList.pop_back();
      curr_left = LeftNode -> right;
    }
 
   
    else if (leftVal + rightVal > tar)
    {
      RightList.pop_back();
      curr_right = RightNode -> left;
    }
 
    else
    {
      cout << LeftNode -> data << " " <<
              RightNode -> data << endl;
 
      RightList.pop_back();
      LeftList.pop_back();
      curr_left = LeftNode -> right;
      curr_right = RightNode -> left;
    }
  }
}






#include<bits/stdc++.h>
int printPerLevelMinimum(TreeNode* root)
{
 
    int ans=INT_MIN;
    if (root == NULL)
        return 0;
 
 
    queue<TreeNode*> q;
 
   
    q.push(root);
 
 
    q.push(NULL);
 
    int min = INT_MAX;
    // for check the level
    int level = 0;
 
    while (q.empty() == false) {
 
     
        Node* node = q.front();
        q.pop();
 
        
        if (node == NULL) {
 
    
            ans= max(ans, min);
           
            if (q.empty())
                break;
 
            q.push(NULL);
 
          
            level++;
 
            min = INT_MAX;
 
            continue;
        }
 
       
        if (min > node->data)
            min = node->data;
 
      
        if (node->left != NULL) {
            q.push(node->left);
        }
 
       
        if (node->right != NULL) {
            q.push(node->right);
        }
    }
}