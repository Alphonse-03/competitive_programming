#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lld;
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
    int times;
    cin>>times;
    while(times--)
    {
        vector<ll> votes(6,0);
        for(int i=0;i<6;i++)
        {
            cin>>votes[i];
        }
        ll opp=votes[4]+votes[5]+votes[3];
        opp=opp/2;
        
        ll ma=max({votes[3]-votes[0],votes[4]-votes[1],votes[5]-votes[2]});
        ll hack=votes[0]+votes[1]+votes[2]+ma;
        if(hack>opp)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
        
    return 0;
        
}


