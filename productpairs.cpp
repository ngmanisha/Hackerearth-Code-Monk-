#include <iostream>
using namespace std;

int main()
{
	long long int n,k,s,d;
	cin>>n>>k;
	
	long long int parent[n+1];

	
	for(long long int i=0;i<n-1;i++)
	{
		cin>>s>>d;
		parent[d]=s;
	}
	
	long long int par,child,curr,t=0;
	for(long long int i=1;i<=n;i++)
	{
		child=i;
		par=parent[i];
		curr=i;
		
		
		while(par!=0)
		{
			if(curr*par <=k)
			{
				t++;
			}
			
			child=par;
			par=parent[child];
		}
	}
	
	cout<<t;
	
	
    return 0;
}
