#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<long long> seq(n);
    for (int i = 0; i < n; ++i) cin >> seq[i];
 vector<char> seen(n, 0);
    for (int i = 0; i < n; ++i) {
        if (seq[i] < 0 || seq[i] >= n) { 
            cout << "No\n";
            return 0;
        }
        if (seen[ (int)seq[i] ]) { 
            cout << "No\n";
            return 0;
        }
        seen[(int)seq[i]] = 1;
    }

    
    stack<int> st;
    int nextPush = 0; 
    for (int i = 0; i < n; ++i) {
        int x = (int)seq[i];
       
        while (nextPush <= x) {
            st.push(nextPush++);
        }
     
        if (st.empty() || st.top() != x) {
            cout << "No\n";
            return 0;
        }
        st.pop();
    }

    cout << "Yes\n";
    return 0;
}
