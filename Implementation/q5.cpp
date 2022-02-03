#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define all(x) (x).begin(), (x).end()
#define rep(i,a,n) for (int i = a; i < n; i++)
#define repn(i,a,n) for (int i = a; i <= n; i++)
#define per(i,a,n) for (int i = n - 1; i >= a; i--)
#define pern(i,a,n) for (int i = n; i >= a; i--)
#define PB push_back
#define F first
#define S second
#define MOD 1000000007
#define setBits(n) __builtin_popcount(n) 


namespace {
    typedef struct { uint64_t state; uint64_t inc; } pcg32_random_t;
    uint32_t pcg32_random_r(pcg32_random_t* rng) {
        uint64_t oldstate = rng->state;
        rng->state = oldstate * 6364136223846793005ULL + (rng->inc|1);
        uint32_t xorshifted = ((oldstate >> 18u) ^ oldstate) >> 27u;
        uint32_t rot = oldstate >> 59u;
        return (xorshifted >> rot) | (xorshifted << ((-rot) & 31));
    }
    pcg32_random_t STATE{12321, 0};
    uint32_t RAND(uint32_t hi) {
        return pcg32_random_r(&STATE) % hi;
    }
}


void solve()
{
    vector<ll> arr(3);
    rep(i,0,3)
    {
        cin>>arr[i];
    }
    sort(all(arr));
    cout<<arr[1]-arr[0]+arr[2]-arr[1]<<endl;
    
        
    
}




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int times;
    // cin>>times;
    // while(times--)
    {
        solve();
    }
        
    return 0;
        
}


