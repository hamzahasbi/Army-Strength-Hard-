/*
	Author: Hamza Hasbi
	Date: 25-May-16 1:26:02 PM
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
	int n;
	scanf("%d",&n);
	vector<int> p(n);
	map<int,ll> count;
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		count[p[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(p[i]==0) 
		{
			if(count[p[i]]>0)
			{
				ans+=(count[p[i]]-1);
				count[p[i]]--;
			}
		}
		else
		{
			int x=p[i];
			x*=-1;
			if(count[x]>0)
			{
				ans+=count[x];
				count[p[i]]--;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
