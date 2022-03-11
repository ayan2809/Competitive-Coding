#include<bits/stdc++.h>
#include "binaryTree.h"
using namespace std;

// taking input level wise
BinaryTreeNode<int> * takeInputLevelWise()
{
	int rootData;
	cin>>rootData;
	BinaryTreeNode<int> * root= new BinaryTreeNode<int>(rootData);
	queue<BinaryTreeNode<int>*> pendingNodes; 
	pendingNodes.push(root);
	while(pendingNodes.size()!=0)
	{
		BinaryTreeNode<int> *front = pendingNodes.front();
		pendingNodes.pop();
		
		// input of the left child
		cout<<"Enter left child of "<<front->data<<endl;
		int leftChildData;
		cin>>leftChildData;
		if(leftChildData!=-1)
		{
			BinaryTreeNode<int>*child = new BinaryTreeNode<int> (leftChildData);
			front->left=child;
			pendingNodes.push(child);
		}

		// input of the right child
		cout<<"Enter right child of "<<front->data<<endl;
		int rightChildData;
		cin>>rightChildData;
		if(rightChildData!=-1)
		{
			BinaryTreeNode<int>*child = new BinaryTreeNode<int> (rightChildData);
			front->right=child;
			pendingNodes.push(child);
		}
	}

	return root;
} 

// taking input of a tree
BinaryTreeNode<int>* takeInput()
{
	int rootData;
	// cout<<"Enter Data"<<endl;
	cin>>rootData;
	if(rootData==-1)
	{
		return NULL;
	}

	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int>* leftChild= takeInput();
	BinaryTreeNode<int>* rightChild= takeInput();
	root->left=leftChild;
	root->right=rightChild;
	return root;
}

// printing the data levelwise
void printLevelWise(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int>*> pending;
    
    pending.push(root);
    while(pending.size()!=0)
    {
        BinaryTreeNode <int>* front= pending.front();
        pending.pop();
        cout<<front->data<<":";
        if(front->left!=NULL)
        {
        	BinaryTreeNode<int>* leftt= front->left;
            cout<<"L:"<<leftt->data<<",";
        	pending.push(leftt);
        }
        else
        {
            cout<<"L:"<<-1<<",";
        }
        if(front->right!=NULL)
        {
        	BinaryTreeNode<int>* rightt = front->right;
            cout<<"R:"<<rightt->data;
       		pending.push(rightt);
        }
        else
        {
             cout<<"R:"<<-1;
        }
        cout<<endl;
        
    }
    
	
}

// print tree function
void printTree(BinaryTreeNode<int>*root)
{
	if(root==NULL)
		return;

	cout<<root->data<<" ";
	if(root->left!=NULL)
	{
		cout<<"L"<<root->left->data;
	}
	if(root->right!=NULL)
	{
			cout<<"R"<<root->right->data;
	}
	cout<<endl;
	printTree(root->left);	
	printTree(root->right);
}

// count the number of nodes in a B tree
int countNodes(BinaryTreeNode<int>* root)
{
	if(root==NULL)
		return 0;

	return 1+countNodes(root->left)+countNodes(root->right);
}

// find a node in Btree
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root==NULL)
        return false;
    // cout<<root->data<<endl;
    if(root->data==x)
        return true;
    bool ans=true;
    
    ans =  isNodePresent(root->left, x) |  isNodePresent(root->right, x);
    
    return ans;
}

// find height of binary tree
int height(BinaryTreeNode<int>* root) {
    if(root==NULL)
        return 0;
    return max(height(root->left)+1, height(root->right)+1);
    // Write our code here
}

// find the mirror of a tree
// or invert a binary tree
void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    if(root==NULL)
        return;
    BinaryTreeNode<int> * temp= root->left;
    root->left=root->right;
    root->right=temp;
    mirrorBinaryTree(root->left);
    
    mirrorBinaryTree(root->right);
    // Write your code here
}

// inorder traversal
void inorderTraversal(BinaryTreeNode<int> * root)
{
	if(root==NULL)
		return;

	inorderTraversal(root->left);
	cout<<root->data<<" ";
	inorderTraversal(root->right);
}

// preorder traversal
void preOrder(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

// postorder traversal
void postOrder(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL)
        return;
    postOrder(root->left);
    
    postOrder(root->right);
    cout<<root->data<<" ";
}

// constructing tree from pre order
// and inorder
// find the root first
// Preorder+Inorder
// void solve(BinaryTreeNode<int>* &ans, int *preorder, int preLength, int *inorder, int inLength)
// {
//     // BinaryTreeNode<int> * ans=NULL;
//     if(preLength<0)
//     	return;
//     if(inLength<0)
//         return;
//     // if(preOrder[0]==NULL)
//     	// return;
//     int root=preorder[0];
//     // if(root>10000)
//     // 	return;
//     // cout<<root<<" "<<preLength<<" " <<inLength<<endl;
//     ans=new BinaryTreeNode<int>(root);
//     int lpres=1;
//     int lins=0;
// 	// search for root in inorder
//     int i=0;
//     for(i=0;i<inLength;i++)
//     {
//         if(root==inorder[i])
//         {
//             break;
//         }
//     }
//     // cout<<i<<endl;
//     int line=i-1;
//     int lpree=(line-lins)+lpres;
//     int rpres=lpree+1;
//     int rpree=preLength-1;
//     int rins=line+2;
//     int rine=inLength-1;
//     int Lprelen=lpree-lpres;
//     int Rprelen=preLength-rpres;
//     int Linlen=line-lins;
//     int Rinlen=inLength-rins;
//     // cout<<rpres<<" "<<rpree<<" "<<rins<<" "<<rine<<endl;
//     // cout<<preLength<<" "<<inLength<<endl;
//     solve(ans->left, preorder+lpres, Lprelen,inorder+line, Linlen);
//     solve(ans->right, preorder+rpres, Rprelen,inorder+rins, Rinlen);
    
// }


// Preorder+Inorder
BinaryTreeNode<int>* solve(vector<int> &preorder, vector<int> &inorder, int &rootIdx, int left, int right)
{
   if (left > right) 
   	return NULL;

        int pivot = left;  // find the root from inorder
        // cout<<inorder[pivot];
        while(inorder[pivot] != preorder[rootIdx]) pivot++;
        
        rootIdx++;
        BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(inorder[pivot]);
        newNode->left = solve(preorder, inorder, rootIdx, left, pivot-1);
        newNode->right = solve(preorder, inorder, rootIdx, pivot+1, right);
        return newNode;
}

// Preorder+Inorder Alternative way
BinaryTreeNode<int> *buildTreeHelper(int *pre, int *in, int inS, int inE, int preS, int preE)
{
	if(inS>inE)
	{
		return NULL;
	}

	int rootData= pre[preS];
	// cout<<rootData<<endl;
	int rootIndex=-1;
	for(int i=inS;i<=inE;i++)
	{
		if(in[i]==rootData)
		{
			rootIndex=i;
			break;	
		}
	}
	int lInS=inS;
	int lInE= rootIndex-1;
	int lPreS= preS + 1;
	int lPreE= lInE - lInS+lPreS;
	int rPreS=lPreE+1;
	int rPreE=preE;
	int rInS= rootIndex+1;
	int rInE= inE;
	BinaryTreeNode<int>* root= new BinaryTreeNode<int>(rootData);
	root->left=buildTreeHelper(in, pre, lInS, lInE, lPreS, lPreE);
	root->right=buildTreeHelper(in, pre, rInS, rInE, rPreS, rPreE);
	return root;
}

// postorder + Inorder approach
BinaryTreeNode<int>* tree(int *postorder, int *inorder,int ps,int pe, int is, int ie)
{
    if(ps>pe)
        return NULL;
    
    
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(postorder[pe]);
    
     int k = 0; 
    for(int i = is; i <= ie; i++)
    { if(postorder[pe] == inorder[i])
        { k = i; break; } 
    }
    
    int lps=ps;    //left prestart
    int lis=is;  //left instart
    int  lie=k-1;   //left inend
    int lpe= lie-lis+lps; //left  pre end
    
    int rps=lpe+1; //right prestart
    int rpe=pe-1;//  right preend
    int ris=k+1;  //right instart
    int rie=ie;   //right inend
    
    root->left=tree(postorder,inorder,lps,lpe,lis,lie);
    root->right=tree(postorder,inorder,rps,rpe,ris,rie);
    
    return root;
    
    
}
BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    return tree (postorder,inorder,0,postLength-1,0,inLength-1);
}

// 

// diameter of the binary tree
int heightOfTree(BinaryTreeNode<int>*root)
{
	if(root==NULL)
		return 0;
	return 1+max(heightOfTree(root->left),heightOfTree(root->right));
}
int diameter(BinaryTreeNode<int>*root)
{
	if(root==NULL)
		return 0;

	int ans1=heightOfTree(root->left)+heightOfTree(root->right);
	int ans2=diameter(root->left);
	int ans3=diameter(root->right);
	return max(ans1,max(ans2, ans3));
}

// minimum and maximum of Btree
void solve_min_max(BinaryTreeNode<int>* root, int &maxi, int &mini)
{
    if(root==NULL)
        return;
    maxi=max(maxi, root->data);
    mini=min(mini, root->data);
    solve_min_max(root->left, maxi, mini);
    solve_min_max(root->right, maxi, mini);
}
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
    int maxi=INT_MIN, mini=INT_MAX-1;
    pair<int,int> ans;
    solve_min_max(root, maxi, mini);
    ans.first=mini;
    ans.second=maxi;
    return ans;
	// Write your code here
}

// sum of nodes in btree
int getSum(BinaryTreeNode<int>* root) {
    if(root==NULL)
        return 0;
    int sum=0;
    sum+=root->data;
    sum+=getSum(root->left)+getSum(root->right);
    return sum;
    // Write your code here
}

// check if tree is balanced or not
bool isBalanced(BinaryTreeNode<int> *root) {
    int leftHeight=0;
    int rightHeight=0;
    if(root==NULL)
        return 1;
    leftHeight=heightOfTree(root->left);
    rightHeight=heightOfTree(root->right);
     if (abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
    
    return 0;
	// Write your code here
}

// level order traversal
void printLevelWise(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int>*> pending;
    
    pending.push(root);
    while(pending.size()!=0)
    {
        BinaryTreeNode <int>* front= pending.front();
        pending.pop();
        cout<<front->data<<":";
        if(front->left!=NULL)
        {
        	BinaryTreeNode<int>* leftt= front->left;
            cout<<"L:"<<leftt->data<<",";
        	pending.push(leftt);
        }
        else
        {
            cout<<"L:"<<-1<<",";
        }
        if(front->right!=NULL)
        {
        	BinaryTreeNode<int>* rightt = front->right;
            cout<<"R:"<<rightt->data;
       		pending.push(rightt);
        }
        else
        {
             cout<<"R:"<<-1;
        }
        cout<<endl;
        
    }
}


// remove leaf nodes
void solve_remove_leaf(BinaryTreeNode<int>* root, BinaryTreeNode<int>* &ans)
{
    if(root==NULL)
        return;
    if(root->left==NULL && root->right==NULL)
    {
        return;
    }
    else
    {
        ans= new BinaryTreeNode<int>(root->data);
    }
    solve_remove_leaf(root->left,ans->left);
    solve_remove_leaf(root->right,ans->right);
}
BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    // Write your code here
    BinaryTreeNode<int>*ans;
    solve_remove_leaf(root,ans);
    return ans;
}


// zigzag tree
vector<vector<int>> res;
void solve_zig_zag(BinaryTreeNode<int> *root, int k)
    {
        if(root==NULL)
            return;
        if(k==res.size())
        {
            res.push_back({});
        }
        if(k%2==0)
        {
            res[k].push_back(root->data);
        }
        else
        {
            res[k].insert(res[k].begin() + 0, root->data);
        }
        solve_zig_zag(root->left,k+1);    
        solve_zig_zag(root->right, k+1); 

    }
void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
    solve_zig_zag(root, 0);
    for(auto it: res)
    {
        for(auto itr: it)
        {
            cout<<itr<<" ";
        }
        cout<<endl;
    }
}


// printing nodes without sibling
void printNodesWithoutSibling(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL)
        return;
    // cout<<root->data<<" ";
    // if((root->left == NULL && root->right !=NULL ) ||(root->right==NULL && root->left!=NULL ) )
    //     cout<<root->data<<" ";
    if (root->left != NULL && root->right != NULL)
    {
        printNodesWithoutSibling(root->left);
        printNodesWithoutSibling(root->right);
    }

    else if (root->right != NULL)
    {
        cout << root->right->data << " ";
        printNodesWithoutSibling(root->right);
    }
 
    else if (root->left != NULL)
    {
        cout << root->left->data << " ";
        printNodesWithoutSibling(root->left);
    }
   
}

// search in BST
bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// Write your code here
    if(root==NULL)
        return false;
    if(root->data==k)
        return true;
    if(root->data<k)
    {
        return searchInBST(root->right,k) || searchInBST(root->left, k);
    }
    else if(root->data>k)
    {
        return searchInBST(root->left,k) || searchInBST(root->right, k);
    }
}


// print elements in range for BST
void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
	// Write your code here
	if(root==NULL)
        return;
    // cout<<root->data<<" ";
       
    
    if(root->data>k1)
    {
    	elementsInRangeK1K2(root->left,k1,k2);
        // elementsInRangeK1K2(root->right,k1,k2);
    }
    if(root->data>=k1 && root->data<=k2)
    {
        cout<<root->data<<" ";
    }
    
	if(root->data<k2)
    {
        elementsInRangeK1K2(root->right,k1,k2);
        
    }
    // else
    // {
    //     elementsInRangeK1K2(root->left,k1,k2);
    //     elementsInRangeK1K2(root->right,k1,k2);
    // }
     
}

// check if btree in BST or not
bool solve_checkBST(BinaryTreeNode<int> *root, int mini, int maxi)
{
    if(root==NULL)
        return true;

    
        if(root->data<=mini || root->data>=maxi)
        {
            return false;
        }
    
    // maxi=max(maxi, root->data);
    // mini= min(mini, root->data);
    return solve_checkBST(root->left, mini, root->data) && solve_checkBST(root->right, root->data, maxi);
   
}
bool isBST(BinaryTreeNode<int> *root) {
    bool ans=solve_checkBST(root, INT_MIN, INT_MAX);
    return ans;
	// Write your code here
}


// construct BST from sorted array
BinaryTreeNode<int>* solve(int *input, int si, int ei)
{
    if(si>ei)
    {
        // BinaryTreeNode<int> *x = new BinaryTreeNode<int>(NULL);
        return NULL;
    }
    int mid = si + (ei - si) / 2;
    BinaryTreeNode<int> *temp = new BinaryTreeNode<int>(input[mid]);
    temp->left=solve(input, si, mid-1);
    temp->right=solve(input,mid+1, ei);
    return temp;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
	// Write your code here
    return solve(input, 0, n-1);
    
}

// construct BST from sorted LL
void solve_LL(BinaryTreeNode<int>* root, Node <int>* &ans, Node<int>* &x)
{
    if(root==NULL)
        return;
    solve_LL(root->left, ans,x);
    // if(ans==NULL)
    // {
    //     Node<int>* temp= new Node<int>(root->data);
    //     ans=temp;
    //     x=ans;
    // }
    // else
    // {
    // 	Node<int>* temp= new Node<int>(root->data);
    //     ans->next=temp;
    //     ans=ans->next;
    // }
    cout<<root->data<<" ";
    solve_LL(root->right, ans,x);
}
Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
    Node<int>* ans;
    Node<int>* x;
    solve_LL(root,ans,x);
    return x;
	// Write your code here
}

// root to node path in btree
vector<int>* getRootToNodePath(BinaryTreeNode<int>* root, int data)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data==data)
	{
		vector<int>* output = new vector<int>();
		output->push_back(root->data);
		return output;
	}
	vector<int> *leftOutput= getRootToNodePath(root->left, data);
	if(leftOutput!=NULL)
	{
		leftOutput->push_back(root->data);
		return leftOutput;
	}

	vector<int>* rightOutput= getRootToNodePath(root->right, data);
	if(rightOutput!=NULL)
	{
		rightOutput->push_back(root->data);
		return rightOutput;
	}
	else {
		return NULL;
	}
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // vector<int> pre,inor;
    // for(int i=0;i<preLength;i++)
    // 	{
    // 		pre.push_back(preorder[i]);
    // 	}
    // for(int i=0;i<preLength;i++)
    // {
    // 	inor.push_back(inorder[i]);
    // }
    // int rootIdx = 0;
    // BinaryTreeNode<int>* ans=solve(pre, inor, rootIdx, 0,preLength-1);
    BinaryTreeNode<int>* ans= buildTreeHelper(preorder, inorder, 0, preLength-1, 0 , preLength-1);

    printLevelWise(ans);
    // preOrder(ans);
    return ans;
    
    
}




// main function
int main()
{
	/*
	BinaryTreeNode<int>* root= new BinaryTreeNode<int>(1);
	BinaryTreeNode<int>* node1= new BinaryTreeNode<int>(2);
	BinaryTreeNode<int>* node2= new BinaryTreeNode<int>(3);
	root->left=node1;
	root->right= node2;	
	*/
	// BinaryTreeNode<int> *root=takeInputLevelWise();
	// printTree(root);
	// cout<<"The number of nodes are :";
	// cout<<countNodes(root)<<endl;
	// delete root;
	// char word[]="group";
	// printf("%c",3[word]);


	int size;
    cin >> size;
    int *pre = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> pre[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(pre, size, in, size);
}