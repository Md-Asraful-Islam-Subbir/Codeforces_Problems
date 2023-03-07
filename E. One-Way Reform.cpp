#include<bits/stdc++.h>
using namespace std;
const int N = 222;
int e[N][N],deg[N],n;

void dfs(int u)
{
	int v;
	for(v=1;v<=n+1;v++) {
		if(e[u][v]==0) continue;
		e[u][v]=e[v][u]=0;
		if(u!=(n+1) && v!=(n+1)) cout<<u<<" "<<v<<endl;
		dfs(v);
	}
	return ;
}

int main()
{
	int ans,u,v,m,i,j,T;
	cin>>T;
	while(T--) {
		cin>>n>>m;
		ans=n;
		memset(e,0,sizeof(e));
		memset(deg,0,sizeof(deg));
		for(i=1;i<=m;i++) {
			cin>>u>>v;
			deg[u]++;
			deg[v]++;
			e[u][v]=e[v][u]=1;
		}
		for(i=1;i<=n;i++) {
			if(deg[i]&1) {
				e[i][n+1]=e[n+1][i]=1;
				ans--;
			}
		}
		cout<<ans<<endl;
		for(i=1;i<=n;i++) {
			dfs(i);
		}
	}
	return 0;
}
