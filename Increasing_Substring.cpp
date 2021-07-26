#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int t;
    cin >> t;
    int n;
    int tc = 1;
    while (t--)
    {
        cin >> n;
        vi vet;
        char s[n];
        cin >> s;
        char last = 'Z';
        int cont = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            char c = s[i];
            if (c > last)
            {
                cont++;
            }
            else
            {
                cont = 1;
            }
            last = c;

            // cont += s[i] - s[i + 1];
            vet.push_back(cont);
        }
        cout << "Case #" << tc << ": ";
        for (auto i : vet)
        {
            cout << i << ' ';
        }
        cout << endl;
        tc++;
        vet.clear();
    }
    return 0;
}