#include<string>
#include "TrieNode.h"
using namespace std;
class Trie{
	TrieNode * root;
public:
	Trie(){
		root=new TrieNode('\0');
	}
	void insertWord(TrieNode *root, string word)
	{
		// base case
		if(word.size()==0)
		{
			root->isTerminal= true;
			return;
		}

		// small calculation
		int index=word[0]-'a';
		TrieNode *child;
		if(root->children[index]!=NULL)
		{
			child= root->children[index];
		}
		else
		{
			child=new TrieNode(word[0]);
			root->children[index]=child;
		}

		// recursive call
		insertWord(child, word.substr(1));

	}

	// for user

	void insertWord(string word)
	{
		insertWord(root, word);
	}

	bool searchHelper(TrieNode *root, string word)
    {
        if (word.size() == 0) {
            if(root->isTerminal ==true)
            return true;
            else
            return false;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL ) {
            child = root->children[index];
            root=child;
            return searchHelper(root,word.substr(1));
           
        } else {
            
            return false;
            
        }
    }

    bool search(string word) {
        return searchHelper(root, word);
    }

    void removeWord(TrieNode *root, string word)
    {
    	// base case
    	if(word.size()==0)
    	{
    		root->isTerminal=false;
    		return;
    	}
    	// small calculation
    	TrieNode *child;
    	int index=word[0]-'a';
    	if(root->children[index]!=NULL)
    	{
    		child=root->children[index];
    	}
    	else
    	{
    		return;
    	}
    	removeWord(child, word.substr(1));

    	// remove child node if it is useless
    	if(child->isTerminal ==false)
    	{
    		for(int i=0;i<26;i++)
    		{
    			if(child->children[i] !=NULL)
    			{
    				return;
    			}
    		}
    		delete child;
    		root->children[index]=NULL;
    	}
    }

    void removeWord(string word)
    {
    	removeWord(root, word);
    }


};