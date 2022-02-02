#include<bits/stdc++.h>
#include "treeNode.h"
using namespace std;

// taking input levelwise
treeNode<int>*takeInputLevelWise(){
	int rootData;
	cout<<"Enter the root data"<<endl;
	cin>>rootData;
	treeNode<int>*root = new treeNode<int>(rootData);

	queue <treeNode<int>> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0)
	{
		treeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout<<"Enter Number of children"<<front->data<<endl;
		int numChild;
		cin>>numChild;
		for(int i=0;i<numChild;i++)
		{
			int childData;
			cout<<"Enter the "<<i<<"th child of "<<front->data<<endl;
			cin>>childData;
			treeNode<int>* child = new treeNode<int>(childData);
			front->children.push_back(&child);
			pendingNodes.push(child);
		}
	}
}

// normally taking input
treeNode<int>* takeInput(){
	int rootData;
	cout<<"Enter Data"<<endl;
	cin>>rootData;
	treeNode<int>* root= new treeNode<int> (rootData);

	int n;
	cout<<"enter the number of children"<<rootData<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		treeNode<int>* child= takeInput();
		root->children.push_back(child);
	}
	return root;
}

// printing the tree levelwise
/*
Logic for this part is to take the 
root and then its children
push the root and its corresponding childrent 
to the queue and then
for each root print its children
while simultaneously pushing the childrens
then pop the first element
*/
void printLevelWise(treeNode<int>* root) {
    // Write your code here
    queue <treeNode<int>*> q;
    q.push(root);
    while(q.size()!=0)
    {
        treeNode<int>* front = q.front();
        cout<<front->data<<":";
        int n=front->children.size();
        for(int i=0;i<front->children.size();i++)
        {
            q.push(front->children[i]);
            if(i!=n-1)
            cout<<front->children[i]->data<<",";
            else
                cout<<front->children[i]->data;
        }
        q.pop();
        cout<<endl;
    }
}

// to find the total number of nodes
int numNode(treeNode<int>* root){
	int ans=1;
	for(int i=0;i<root->children.size();i++)
	{
		ans+=numNode(root->children[i]);
	}
	return ans;
}

// to find the sum of all nodes in a tree
int sumOfNodes(treeNode<int>* root) {
    int sum=root->data;
	for(int i=0;i<root->children.size();i++)
	{
		sum+=sumOfNodes(root->children[i]);
	}
	return sum;
}

// max data node from a tree
treeNode<int>* maxDataNode(treeNode<int>* root) {

    treeNode<int>* ans= root;
    for(int i=0;i<root->children.size();i++)
    {
    	treeNode<int>* temp= maxDataNode(root->children[i]);
        
        if(ans->data> temp->data)
        {
            ans=ans;
        }
        else
        {
            ans=temp;
        }
    }
    return ans;
}

// find the height of a tree
int getHeight(treeNode<int>* root) {
    if(root==NULL)
        return 1;
    int x=1;
    for(int i=0;i<root->children.size();i++)
    {
		x=max(x, getHeight(root->children[i])+1);        
    }
    return x;
    // Write your code here
}

// find the depth of a node
// and print the total number of nodes
// having a particular depth k
void depthOfTree(treeNode<int>* root, int k)
{
	if(root==NULL)
		return;
	if(k==0)
	{
		cout<<root->data<<endl;
	}
	for(int i=0;i<root->children.size();i++)
	{
		depthOfTree(root->children[i],k-1);
	}
}


// count number of leaf nodes
int getLeafNodeCount(treeNode<int>* root) {
    // Write your code here
    if(root==NULL)
        return 0;
    if(root->children.size()==0)
        return 1;
    int sum=0;
    for(int i=0;i<root->children.size();i++)
    {
        sum+=getLeafNodeCount(root->children[i]);
    }
    return sum;
}

// preorder traversal

void preOrder(treeNode<int>*root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	for(int i=0;i<root->children.size();i++)
	{
		preOrder(root->children[i]);
	}
}

// postorder traversal
void printPostOrder(treeNode<int>* root) {
    // Write your code here
    if(root==NULL)
        return;
    for(int i=0;i<root->children.size();i++)
    {
        printPostOrder(root->children[i]);
    }
    cout<<root->data<<" ";
}

// get the number of nodes larger than x
int getLargeNodeCount(treeNode<int>* root, int x) {
    if(root==NULL)
        return 0;
    int ans=0;
    if(root->data>x)
        ans+=1;
    for(int i=0;i<root->children.size();i++)
    {
        ans+=getLargeNodeCount(root->children[i],x);
    }
    return ans;
}
// iterative approach to get the max of root and its direct children
treeNode<int>* maxSumNode(treeNode<int>* root) {
	
    int maxi=0;
    treeNode<int> * ans=root;
    queue <treeNode<int>*> q;
    q.push(root);
    while(q.size()!=0)
    {
        treeNode<int>* front = q.front();
        // cout<<front->data<<":";
        int n=front->children.size();
        int x=front->data;
        for(int i=0;i<front->children.size();i++)
        {
            q.push(front->children[i]);
            x+=front->children[i]->data;
        }
        if(x>maxi)
        {
            maxi=x;
            ans=front;
        }
        q.pop();
      
    }
    return ans;
}

//check if two trees are identical or not
bool areIdentical(treeNode<int> *root1, treeNode<int> * root2) {
    
    if(root1==NULL || root2==NULL)
        return false;
    if(root1->data!=root2->data)
        return false;
    if(root1->children.size()!= root2->children.size())
        return false;
    bool ans=true;
    
    for(int i=0;i<root1->children.size();i++)
    {
        ans &= areIdentical(root1->children[i], root2->children[i]);        	
    }
    return ans;
}


// replace each node in the tree with its depth
void solve(treeNode<int>*root, int k)
{
    if(root==NULL)
        return;
    root->data=k;
    for(int i=0;i<root->children.size();i++)
    {
        solve(root->children[i],k+1);
    }
}
void replaceWithDepthValue(treeNode<int>* root) {
    // Write your code here
    solve(root,0);
    
}
// get the next largest value from a tree
treeNode<int>* getNextLargerElement(treeNode<int>* root, int x) {
    // Write your code here
    treeNode<int>* ans=NULL;
    int maxi=INT_MAX-1;
    
    for(int i=0;i<root->children.size();i++)
    {
        
		ans=getNextLargerElement(root->children[i],x);
    }
    if(root->data>x && root->data<maxi)
    {
        maxi=root->data;
        ans=root;
    }
    return ans;
}

// second largest element from a tree
int max1=0, max2=-1;
treeNode<int> * ans= NULL;
treeNode<int> * ans2=NULL;
treeNode<int>* getSecondLargestNode(treeNode<int>* root) {
    

    if( root->data > max1) 
    {
            max2 = max1;
            max1 = root->data;
        	ans2=ans;
        	ans=root;
    }
    else if (root->data < max1) 
    {
        if (max2 == -1 || max2 < root->data)
            {
                max2 = root->data;
            	ans2=root;
            }
    }
    // cout<<ans->data<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        ans2=getSecondLargestNode(root->children[i]);
    }
	
    // cout<<root->data<<" "<<max1<<" "<<max2<<endl;
    
  
    return ans2;
}

// replace each node with depth of the tree
void solve(TreeNode<int>*root, int k)
{
    if(root==NULL)
        return;
    root->data=k;
    for(int i=0;i<root->children.size();i++)
    {
        solve(root->children[i],k+1);
    }
}
void replaceWithDepthValue(TreeNode<int>* root) {
    // Write your code here
    solve(root,0);
    
}


// print a tree
void printTree(treeNode<int>* root)
{
	// this is the edge case
	// and not a base case
	if(root==NULL)
		return;
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++)
	{
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++)
	{
		printTree(root->children[i]);
	}
}
int main()
{
	// makes a treeNode
	// each node will have a vector for its children
	// each root can have n values
	// treeNode<int>* root= new treeNode<int>(1);
	// treeNode<int>* node1= new treeNode<int>(2);
	// treeNode<int>* node2= new treeNode<int>(3);
	// root->children.push_back(node1);
	// root->children.push_back(node2);
	// printTree(root);
	// delete root;


	treeNode<int> *root =takeInput();
	printTree(root);
	// Here push back is for the root node to add the values 

	
}