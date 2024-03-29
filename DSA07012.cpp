#include <bits/stdc++.h>

using namespace std;

bool check_Digit(char x)
{
    if (x == '+')
        return true;
    else if (x == '-')
        return true;
    else if (x == '*')
        return true;
    else if (x == '/')
        return true;
    else if (x == '%')
        return true;
    else if (x == '^')
        return true;
    else
        return false;
}
void solve()
{
    string s;
    cin >> s;
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (check_Digit(s[i]))
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string tmp = '(' + s2 + s[i] + s1 + ')';
            st.push(tmp);
        }
        else
        {
            st.push(string(1, s[i]));
        }
    }
    cout << st.top() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}