/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* Sum of bitwise or of all the subarrays*/
#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int i;
    vector<int>a;
    int j;
    int N;
    cin>>N;
    for(j=0;j<N;j++)
    {
        int h;
        cin>>h;
        a.push_back(h);
        
    }
    int m=0,ans=0;
    for(int h=0;h<=31;h++)
    {
        m=N;
        for(int j=N-1;j>=0;j--)
        {
            int p=1<<h;
            if((a[j]&p)>0)
            {
                m=j;
            }
            ans=ans+(N-m)*(1<<h);
        }
    }
  cout<<ans;
    return 0;
}
