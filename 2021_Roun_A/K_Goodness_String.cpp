//RE I DONT
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int solve()
{
    int n, k, pos = 0, cont = 0;
    string s;
    cin >> n >> k;
    cin >> s;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        pos = n - i + 1;
        if (s[i] == s[pos])
        {
            cont++;
        }
    }
    return cont;
}

int main()
{
    fastio;
    int n, j = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Case #" << j << ": " << solve() << endl;
        j++;
    }
    return 0;
}

//solution

// int main()
// {

//     fastio;

//     int T;
//     cin >> T;
//     for (int case_num = 1; case_num <= T; case_num++)
//     {
//         int N, K;
//         cin >> N >> K;
//         string S;
//         cin >> S;
//         int cur_score = 0;
//         for (int i = 0; i < N / 2; i++)
//         {
//             cur_score += (S[i] != S[N - 1 - i]);
//         }

//         cout << "Case #" << case_num << ": " << abs(cur_score - K) << '\n';
//     }

//     return 0;
// }
