    #include <bits/stdc++.h>
     
    using namespace std;
     
    typedef long long ll;
    typedef long double ld;
     
    #define ln "\n"
    #define fast_cin()                    \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL)
     
    void solve()
    {
        unsigned long long  k;
        cin >> k;
        cout << 192 + (k - 1) * 250 << endl;
    }
     
    int main()
    {
        fast_cin();
     
        ll t;
        cin >> t;
        while (t--)
            solve();
     
        return 0;
    } 
