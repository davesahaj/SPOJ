    #include <bits/stdc++.h>
     
    using namespace std;
     
     
    #define ln "\n"
    #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
     
     
    void solve()
    {
     
        int a, d;
     
        while (cin >> a >> d && a && d)
        {
     
            int A[a], D[d];
     
            for (int i{}; i < a; i++) cin >> A[i];
            for (int i{}; i < d; i++) cin >> D[i];
     
            sort(A, A + a);
            sort(D, D + d);
     
            char result = (A[0]<D[1]) ? ('Y') : ('N');
            cout << result<<ln;
        }
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
