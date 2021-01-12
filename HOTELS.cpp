    #include <bits/stdc++.h>
     
    using namespace std;
     
    typedef long long ll;
    typedef long double ld;
     
    #define FOR(i, j, k, in) for (ll i = j; i < k; i += in)
    #define REP(i, j) FOR(i, 0, j, 1)
     
    #define ln "\n"
    #define fast_cin()                    \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL)
     
    ll closest(ll a, ll b)
    {
        return a - b > 0 ? a : b;
    }
     
    void solve()
    {
        ll n, m;
        cin >> n >> m;
     
        ll arr[n];
        REP(i, n)
        cin >> arr[i];
     
        ll r{}, l{}, sum{}, ans{};
     
        while (1)
        {
            if (r == n && l == n)
                break;
     
            if (sum <= m)
            {
                ans = closest(ans, sum);
     
                if (r != n)
                    sum += arr[r++];
     
                else
                    l++;
            }
            else
                sum -= arr[l++];
        }
     
        cout << ans << ln;
    }
     
    int main()
    {
        fast_cin();
     
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
     
        solve();
     
        return 0;
    } 
