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
    while(times--)
    {
        ll n;
        ll c;
        cin>>n>>c;
        
        if(n==c)
        {
            cout<<2*n-1<<endl;
        }
        else if(c==0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<n+c<<endl;
        }
    }
        
    return 0;
        
}


