#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
// class contributor
// {
// 	string name;
// 	int num;
// 	vector<unordered_map<string, int>> umap;
// 	contributor(int x)
// 	{

// 	}
// };
// class project
// {

// project
// {

// };
// void solve(int n)
// {
	
// }
void solve2(int num)
{
	

	
}
int main()
{
	
	IOS;
	ll c=0,p=0;
	cin>>c>>p;
	
	// solve(c);
	// solve2(p);


	// input of the contributors
	map<string, vector<map<string, int>>> contributor;
	multimap<string,int > language;
	multimap<string, string> user;

	for(int i=0;i<c;i++)
	{
		string name="";
		int num=0;
		cin>>name>>num;
		for(int j=0;j<num;j++)
		{
			string skill="";
			int power=0;
			cin>>skill>>power;
			map<string, int> umap;
			umap[skill]=power;
			language.insert(pair<string,int>(skill, power));
			user.insert(pair<string, string>(skill, name));
			contributor[name].push_back(umap);
		}
	}

	// printing the contributors
	// for(auto it: contributor)
	// {
	// 	cout<<it.first<<endl;
	// 	for(auto itr: it.second)
	// 	{
	// 		for(auto itrr: itr)
	// 		{
	// 			cout<<itrr.first<<" "<<itrr.second<<endl;
	// 		}
	// 	}
	// }

	map<string, vector<map<string, int>>> project;
	map<string, vector<int>> projectDetails;
	for(int i=0;i<p;i++)
	{
		string projectName="";
		int d=0,s=0,b=0,r=0;
		cin>>projectName>>d>>s>>b>>r;
		// cout<<projectName<<endl;
		projectDetails[projectName]={d,s,b};
		for(int j=0;j<r;j++)
		{
			string name="";
			int level=0;
			cin>>name>>level; 
			map<string, int> umap;
			umap[name]=level;
			project[projectName].push_back(umap);
		}
	}

	// printing the projects
	// for(auto it: project)
	// {
	// 	cout<<it.first<<endl;
	// 	for(auto itr: it.second)
	// 	{
	// 		for(auto itrr: itr)
	// 		{
	// 			cout<<itrr.first<<" "<<itrr.second<<endl;
	// 		}
	// 	}
	// }

	


	multimap<int, string ,greater<int>> projectsWithScore;
	for(auto it: projectDetails)
	{
		
		projectsWithScore.insert(pair<int, string>(it.second[1], it.first));
		
	}

	// for(auto it: language)
	// {
	// 	cout<<it.first<<" "<<it.second<<endl;
	// }
	// for(auto it: user)
	// {
	// 	cout<<it.first<<" "<<it.second<<endl;
	// }
	// for(auto it: projectsWithScore)
	// {
	// 	cout<<it.first<<" "<<it.second<<endl;
		
	// }
	
	map<int, string>::iterator iterator;
    for (iterator = projectsWithScore.begin(); iterator != projectsWithScore.end(); iterator++)
    {
        // cout << "(" << (*iterator).first << ", " << (*iterator).second
        //          << ")" << endl;

        // auto itr=(*iterator).first;
         string x=(*iterator).second;
         // cout<<x<<endl;
         int f=0;
        for(auto it:project[x])
        {
        	cout<<x<<endl;
        	
        	for(auto itr: it)
        	{
        		string g=itr.first;
        		
        		multimap<string, string>::iterator it;
        		// cout<<g
        		for (auto x = user.begin(); x != user.end(); x++)
        		{
        			if((*x).first==g)
        			{
        				cout<<(*x).second<<" ";
        				f=1;
        				// break;
        			}

        			
        		}
        		cout<<endl;
        		        		// cout<<user[g]<<endl;
        		// for(auto itrr: user[itr.first])
        		// {
        		// 	cout<<itrr<<endl;
        		// 	// for(auto itrrr: itrr)
        		// 	// {
        		// 	// 	cout<<itrrr<<endl;
        		// 	// }
        		// }

        	}
        	if(f==1)
        		break;

        	
        }
    }

	// for (auto itr = language.find("HTML"); itr != language.end(); itr++)
 //        cout << itr->first
 //             << '\t' << itr->second << '\n';

}