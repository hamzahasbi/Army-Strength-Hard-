/*
	Author: Hamza Hasbi
	Copyrights: "h.hamza" ==> "www.hamzahasbi.me"
	Date: 05/01/2017 10:57:30
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define uld unsigned long double
#define ui unsigned int
#define ud unsigned double
#define uf unsigned float
#define pi 2*acos(0.0)
#define module cin.ignore()
#define rep(i,l,r) for(auto i=l;i<=r;i++)
#define range(x,y) for(auto x:y)
//inline lcm(int a,int b) {return a*b/__gcd(a,b);}
//inline gcd(ll a,ll b) {return 1LL*b == 0 ? a : gcd(1LL*b, a*1LL % b*1LL);}

#define INF INT_MAX
using namespace std;

vector<vector<int>>edge(200005);
vector<vector<int>>Inv_edge(200005);

int dis[2000005],dis2[2000005],dis3[2000005];
int n,m,a,b;
int link;
void bfs(int node){
	dis[node]=0;
	queue<int>q;
	q.push(node);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(auto v:edge[u]){
			if(dis[v]==INF) {
				dis[v]=dis[u]+1;
				q.push(v);
			}
		}
	}
}

void bfs2(int node){
	
	dis2[node]=0;
	queue<int>q;
	q.push(node);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(auto v:Inv_edge[u]){
			if(dis2[v]==INF) {
				dis2[v]=dis2[u]+1;
				q.push(v);
			}
		}
	}
}

void bfs3(int node){
	
	dis3[node]=0;
	queue<int>q;
	q.push(node);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(auto v:Inv_edge[u]){
			if(dis3[v]==INF) {
				dis3[v]=dis3[u]+1;
				q.push(v);
			}
		}
	}
}

main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	fill(dis,dis+200005,INF);
	fill(dis2,dis2+200005,INF);
	fill(dis3,dis3+200005,INF);
	scanf("%d%d%d%d",&n,&m,&a,&b);
	for(int i=0;i<m;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		edge[x].push_back(y);
		Inv_edge[y].push_back(x);
	}
	int ans=INF;
	bfs2(a);
	bfs3(b);
	bfs(0);
	for(int i=0;i<=n;i++){
		if(dis[i]!=INF && dis2[i]!=INF && dis3[i]!=INF)
		ans=min(ans,dis[i]+dis3[i]+dis2[i]);
	}
	cout<<ans<<endl;
 	return 0;
}

