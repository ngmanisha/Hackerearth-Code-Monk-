#include <iostream>
#include<queue>
using namespace std;

int main()
{
	int n,i=0;
	cin>>n;
	
	
	
	int m;
	queue<int>q;

	for(i=0;i<n;i++)
	{
		cin>>m;
		q.push(m);
	}
	int *co=new int[n];
	for( i=0;i<n;i++)
	cin>>co[i];
	int p;
	i=0;
	int t=0;
	while(!q.empty())
	{
		p=q.front();

		if(co[i]==p)
		{
			q.pop();
			i++;
			t++;
		}
		else
		{
			q.pop();
			q.push(p);
			t++;
		}
	}
	
	
	
    cout << t;
    return 0;
}
