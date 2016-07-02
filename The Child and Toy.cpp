/*
	Author: Hamza Hasbi
	Date: 01-Jul-16 12:06:04 AM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,m;
	cin>>n>>m;
	vector<int> cost(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>cost[i];
	}
	int x,y;
	int ans=0;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		ans+=min(cost[x],cost[y]);	
	}
	cout<<ans<<endl;
  return 0;
}
