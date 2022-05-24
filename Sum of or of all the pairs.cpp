#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int N;
    cin>>N;
    vector<int>a;
    for(i=0;i<N;i++)
    {
        int p;
        cin>>p;
        a.push_back(p);
    }
    int ans=0,o=0,e=0;
    for(int j=0;j<=31;j++)
    {
        o=0;e=0;
        for(int p=0;p<N;p++)
        {
            int k=1<<j;
            if((a[p]&k)>0)
            o++;
            else
            e++;
            
        }
        ans=ans+(((o*(o-1))/2)+(o*e))*(1<<j);
    }
    cout<<ans<<"\n";
}
