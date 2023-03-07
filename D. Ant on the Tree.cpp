#include<iostream>
#include<vector>

using namespace std;

vector<int> tree[301], ans;

bool dfs(int x, int y, int p){
	if(x == y)
		return 1;

	for(int i = 0; i < tree[x].size(); i++){
		if(tree[x][i] == p)
			continue;
		else if(dfs(tree[x][i], y, x)){
			ans.push_back(x);
			return 1;
		}
	}

	return 0;
}

int main(){
	int n;
	cin>>n;

	int a, b;
	for(int i = 1; i < n; i++){
		cin>>a>>b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}

	ans.push_back(1);

	b = 1;
	while(cin>>a){
		dfs(a, b, 0);
		b = a;
	}

	dfs(1, b, 0);

	if(ans.size() != n * 2 - 1)
		cout<<-1;
	else
		for(int i = 0; i < ans.size(); i++)
			cout<<ans[i]<<" ";

}
