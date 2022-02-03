#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
vector<ll> sortt(vector<ll> &arr)
{
    sort(arr.begin(),arr.end());
    return arr;
}
vector<ll> revv(vector<ll> &arr)
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
        ll x;
        cin>>x;
        string str;
        cin>>str;
        int n=str.size();
        map<char,int> mp;
        for(auto &i:str)
        {
            mp[i]++;
        }
        if(str.size()%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            bool flag=true;
            for(auto &i:mp)
            {
                if(i.second>n/2)
                {
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                cout<<"YES"<<endl;
                sort(str.begin(),str.end());
                cout<<str<<endl;
            }
        }
    }
        
    return 0;
        
}


