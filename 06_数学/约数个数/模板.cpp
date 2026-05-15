#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
unordered_map<int, int> primes;
const int mod=1e9+7;

int n,a;
void fun(int x)
{

    for(int i=2;i<=x/i;i++)
    {
        int cnt=0;
        while(x%i==0)
        {
            cnt++;
            x/=i;
        }
        primes[i]+=cnt;
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
        res=res*(c.second+1)%mod;
    }
    cout<<res;
    return 0;
}
