#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
vector<int> sortt(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    return arr;
}
vector<int> revv(vector<int> &arr)
{
    reverse(arr.begin(),arr.end());
    return arr;
}
#define PB push_back
#define F first
#define S second
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    ll n;
    cin>>n;
    vector<int> dig;
    while(n>0)
    {
        dig.push_back(n%10);
        n/=10;
    }
    for(int i=0;i<dig.size();i++)
    {
        if(i==dig.size()-1 && dig[i]==9)
        {
            continue;
        }
        if(dig[i]>4)
        {
            dig[i]=9-dig[i];
        }
    }
    ll ans=0;
    revv(dig);
    for(auto &i:dig)
    {
        ans*=10;
        ans+=i;
    }
    cout<<ans<<endl;
    return 0;
        
}


