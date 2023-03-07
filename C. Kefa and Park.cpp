#include <iostream>
#include <queue>
using namespace std;
vector<vector<int>>g(100005);
vector<vector<int>>out(100005);
int n, m;
int cat[100005];
int cats[100005];
int freq[100005];
void read()
{
    cin >> n >> m;
    for(int i=1, x; i<=n; i++)
        cin >> x, cat[i]=x;
    for(int i=1, a, b; i<n; i++)
        cin >> a >> b, g[a].push_back(b), g[b].push_back(a);
}
void dfs(int from, int nod)
{
    out[from].push_back(nod);
    freq[nod]=1;
    for(auto x:g[nod])
        if(!freq[x])
            dfs(nod, x);
}
int cnt;
void dfs1(int from, int nod)
{
    if(cat[nod])
        cats[nod]=cats[from]+cat[nod];
    freq[nod]=1;
    if(!out[nod].size() && cats[nod]<=m)
        cnt++;
    for(auto x:out[nod])
        if(cats[nod]<=m)
            dfs1(nod, x);
}
int main()
{
    read();
    dfs(0, 1);
    dfs1(0, 1);
    cout << cnt;
    return 0;
}
