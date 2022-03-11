#include <bits/stdc++.h>
using namespace std;
bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<map<char, int>> out;
        for(int i=0;i<9;i++)
        {
            map<char, int> check;
            map<char, int> check2;
            for(int j=0;j<9;j++)
            {
                check[board[i][j]]+=1;
                if( check[board[i][j]]>1 && board[i][j]!='.')
                {
                    //cout<<board[i][j]<<1<<endl;
                    return false;
                }
                    
            }
            for(int j=0;j<9;j++)
            {
                check2[board[j][i]]+=1;
                if( check2[board[j][i]]>1 && board[j][i]!='.')
                   {
                    //cout<<board[j][i]<<2<<endl;
                    return false;
                }
            }
        }
        int m=0,n=0,j=0,k=0;
        for(int i=0;i<9;i++)
        {
            map<char, int> check;
            for(j=0+m;j<3+m;j++)
            {
                
                for(k=0+n;k<3+n;k++)
                {
                    check[board[j][k]]+=1;
                    if( check[board[j][k]]>1 && board[j][k]!='.')
                    {
                      
                        return false;
                    }
                 
                }
        
            }
            
            if(i==2)
            {
                m=3;
                n=0;
            }
            else if(i==5)
            {
                m=6;
                n=0;
            }
            else
            {
                //m=0;
                n=k;
            }
           
        }
        
        return true;
    }
int main(){
    
    // write your code here
    vector<vector<char>> ans;
    for(int i=0;i<9;i++)
    {
        vector<char> x;
     	for(int i=0;i<9;i++)
    	{
         	   int y=0;
            cin>>y;
            if(y==0)
                x.push_back('.');
            else
            	x.push_back(y+48);
        }
        ans.push_back(x);
    }
    // cout<<isValidSudoku(ans)<<endl;
    if(isValidSudoku(ans))
    	cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}