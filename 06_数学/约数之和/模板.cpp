#include<iostream>
#include<unordered_map>
using namespace std;

const int N=10010,mod=1e9+7;
unordered_map<int,int> primes;
int n,a;
void fun(int x)
{
    for(int i=2;i<=x/i;i++)
    {
        while(x%i==0)
        {
            x/=i;
            primes[i]++;
        }
    }
    if(x>1) primes[x]++;
}
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>a;
        fun(a);
    }
    long long res=1;
    for(auto c:primes)
    {
        long long t=1;
        int p=c.first;
        for(int i=0;i<c.second;i++)
        {
            t=(p*t+1)%mod;
        }
        res=res*t%mod;
    }
    cout<<res;
    return 0;
}
