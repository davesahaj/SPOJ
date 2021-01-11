    #include <bits/stdc++.h>
     
    using namespace std;
     
    typedef long long ll;
    typedef long double ld;
     
    typedef pair<int, int> pii;
    typedef pair<ll, ll> pll;
    typedef pair<double, double> pdd;
     
    typedef vector<ll> vl;
    typedef vector<int> vi;
    typedef vector<vector<int>> vvi;
    typedef vector<vector<ll>> vvl;
     
    #define FOR(i, j, k, in) for (int i = j; i < k; i += in)
    #define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
    #define REP(i, j) FOR(i, 0, j, 1)
    #define RREP(i, j) RFOR(i, j, 0, 1)
     
    #define MOD 1000000007
    #define PI 3.1415926535897932384626433832795
    #define INF (int)1e9
     
    #define ln "\n"
    #define fast_cin()                    \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL)
     
    /**
    * Limits in C++ for reference
    * _____________________________________________________________________________________
    * |Sr| Macro Name | Description                     | Value
    * |No|____________|_________________________________|__________________________________
    * |1.| ULLONG_MAX | Maximum value unsigned long long| 18,446,744,073,709,551,615 (10^20)
    * |2.| LLONG_MAX  | Maximum value long long         | 9,223,372,036,854,775,807 (10^19)
    * |3.| LLONG_MIN  | Minimum value long long         |-9,223,372,036,854,775,808 -1*(10^19)
    * |4.| INT_MAX    | Maximum value int               | 2,147,483,647 (10^10)
    * |5.| INT_MIN    | Minimum value int               |-2,147,483,648 (10^10)
    */
     
    ll break_int(ll n)
    {
        ll sum = {};
        while (n > 0)
        {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
     
        return sum;
    }
    void solve()
    {
        unordered_set<ll> nums;
     
        ll n;
        ll count{};
        cin >> n;
     
        ll tmp = n;
     
        while (1)
        {
            count++;
            tmp = break_int(tmp);
     
            if (tmp == 1)
                break;
     
            if (nums.find(tmp) == nums.end())
                nums.insert(tmp);
     
            else
            {
                count = -1;
                break;
            }
        }
     
        cout << count << ln;
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
