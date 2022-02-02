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
    int times;
    cin>>times;
    ll ans=0;
    while(times--)
    {
        string str;
        cin>>str;
        if(str[1]=='+')
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }
    cout<<ans<<endl;
        
    return 0;
        
}


