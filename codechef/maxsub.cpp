#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a=0,b=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n-1];
		int arr[n-1];
		for(int i=0; i<n-1; i++)
		{
			cin>>a[i];
		}
		int prev=0;
		for(int i=0; i<n-1; i++)
		{
			arr[i]+=a[i]+prev;
			prev=a[i];
		}

		int sum=0;
		int idxx=0;
		int jdxx=0;
		bool wait=true;
		while(b<arr[n-1])
		{
			if(a<idxx&&wait)
			{
				a++;
				sum++;
				if(a==idxx)
				{
					idxx++;
					wait=false;
				}
				else if(a<arr[idxx]&&!wait)
				{
					a++;
					sum++;
					b++;
					if(b==jdxx) {
						wait=true;
						jdxx++;
					}
				}
			}
		}
		cout<<sum<<endl;

		return 0;
	}
}
