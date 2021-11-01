int Solution::solve(string A) {
    int check[26]={0};
    map <char, int> umap;
    for(int i=0;i<A.length();i++)
    {
        check[A[i]-'a']+=1;
        umap[A[i]]+=1;
    }
    char a=0,b=0;
    int count=0;
    // for(int i=0;i<26;i++)
    // {
    //     if(check[i]>=1)
    //     {
    //         for(int j=0;j<26;j++)
    //         {
    //             if(i!=j && check[j]>=2)
    //             {
    //                  a=97+i;
    //                  b=97+j;
    //                 count++;
    //                 //break;
    //             }
    //         }
    //     }
        
    // }
    // for(auto x: umap)
    // {
    //     cout<<x.first<<endl;
    // }
    // unordered_map <char, int> ::iterator it;
    
    // for(it=umap.begin();it!=umap.end();it++)
    // {
    //     unordered_map <char, int> ::iterator itr;
    //     itr=it;
    //     for(++itr;itr!=umap.end();++itr)
    //     {
    //         if( (it->first != itr->first) && it->second>=1 && itr->second>=2){
    //         cout<<it->first<<itr->first<<itr->second<<endl;
    //         return 1;
    //         }
    //     }
    //     it->second=it->second-1;
    // }
    
    
    
    for(int i=0;i<A.length();i++)
    {
        for(int j=i+1;j<A.length();j++)
        {
            if(A[i]!=A[j])
            {
                if((umap[A[i]]>=1 && umap[A[j]]>=2) || (umap[A[i]]>=2 && umap[A[j]]>=1))
                {
                    return 1;
                }
            }
        }
        umap[A[i]]-=1;
    }
    // if(count>0)
    // return 1;
    return 0;
    
}
