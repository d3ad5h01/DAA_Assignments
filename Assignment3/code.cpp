#include<bits/stdc++.h>

#define MP make_pair
#define PB push_back
#define ll long long 
#define lli long long int
#define vii vector<int>
#define vll vector<lli>
#define pii                     pair<int,int>
#define pll                     pair<ll,ll>
#define pii                     pair<int,int>
#define ppl                     pair<pll,ll>
#define mod 1000000007
#define fo(i,a,b)               for(int i = a; i<b ; i++)
#define rfo(i,a,b)              for(int i = a; i>=b ; i--)

  
using namespace std;

int main()
{

ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	lli t;
	cin>>t;
	while(t--)
	{
	    int n ,m;cin>>n>>m;
	    int a[n][m];
	    fo(i,0,n){
	        fo(j,0,m){
	            cin>>a[i][j];
	        }}
	    int si,sj,di,dj;
	    cin>>si>>sj>>di>>dj;
	    
	    if(a[si][sj]==0||a[di][dj]==0)
	        {
	            cout<<"ERROR: The start or end are with 0 "<<endl;
	            continue;
	        }
	    
	    queue<pair<int,int>>q;
	    vector<vector<bool>>vis(n,vector<bool>(m,false));
	    q.push({si,sj});
	    vis[si][sj]=true;
	    int cost=0;
	    
	    while(q.size()>0)
	    {
	        cost++;
	        int p=q.size();
	        
	        while(p--)
	        {
	            pair<int,int> top=q.front();
	            q.pop();
	            int x = top.first;
	            int y = top.second;
	            //cout<<x<<" "<<y<<endl;
	            if(x>0)
	            {
	                if(vis[x-1][y]==false&&a[x-1][y]==1)
	                {
	                    vis[x-1][y]=true;
	                    q.push({x-1,y});
	                }
	            }
	            if(y>0)
	            {
	                if(vis[x][y-1]==false&&a[x][y-1]==1)
	                {
	                    vis[x][y-1]=true;
	                    q.push({x,y-1});
	                }
	            }
	            if(x<n-1)
	            {
	                if(vis[x+1][y]==false&&a[x+1][y]==1)
	                {
	                    vis[x+1][y]=true;
	                    q.push({x+1,y});
	                }
	            }
	            if(y<m-1)
	            {
	                if(vis[x][y+1]==false&&a[x][y+1]==1)
	                {
	                    vis[x][y+1]=true;
	                    q.push({x,y+1});
	                }
	            }
	            if(vis[di][dj]==true)
	            {
	                cout<<"Cost is "<<cost<<endl;
	                break;
	            }
	                
	        }
	        
	        if(vis[di][dj]==true)
	        {
	            break;
	        }
	    }
	    if(vis[di][dj]==false)
	        {
	            cout<<"Not Found"<<endl;
	        }
	    
	    
		
	}
	return 0;


}
