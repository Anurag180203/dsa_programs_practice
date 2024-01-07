#include <bits/stdc++.h>
using namespace std;


void fun(long long n)
{
    vector<long long> res;
    long long c=2;
    while(n>1)
    {
        if(n%c==0){
            res.push_back(c);
            n/=c;
        }
        else c++;
    }
    
    long long s = res.size();
    if(s<3)
    {
        cout<<-1<<endl;
    }
    else{
        
        
        cout<<res[0]<<" ";
        long long a = 1;
        for(int i=1;i<s-1;i++)
        {
            a = a*res[i];
        }
        cout<<a<<" ";
        cout<<res[s-1]<<endl;
    }
        
    }

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        fun(n);
    }
}