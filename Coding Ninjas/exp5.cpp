#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
void spiralPrint(int **input, int nRows, int nCols)
{
    int n=nRows, m=nCols;
    int rs=0,re=n-1;
    for(int i=0;i<nRows*nCols;i++)
    {
        cout<<ans[i]<<" ";
    }
        
}
void solve()
{
   
   int row=0, col=0;
   cin>>row>>col;
   int **matrix = new int *[row];
   for(int i=0;i<row;i++)
   {
        matrix[i] = new int[col];
        for(int j=0;j<col;j++)
        {
            cin >> matrix[i][j];
        }
   }
    spiralPrint(matrix, row, col);
    

}
int main(){
    time_t start, end;
    time(&start);
    IOS;
    ll t=0;
    cin>>t;
    while(t--)
    {
        solve();
    }
    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
}