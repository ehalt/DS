// paranthesis related 

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';

bool ispar(string x) {
    stack <char> s;
    int n = x.size();
    int flag = 1;

    for (int i = 0; i < n; i++) {
        if (x[i] == '(' || x[i] == '{' || x[i] == '[') {
            s.push(x[i]);
        }
        else {
            if (s.empty() == true) {
                flag = 0;
                break;
            }
            else {
                if (s.top() == '(' && x[i] == ')') {
                    s.pop();
                }
                else if (s.top() == '{' && x[i] == '}') {
                    s.pop();
                }
                else if (s.top() == '[' && x[i] == ']') {
                    s.pop();
                }
                else {
                    flag = 0;
                    break;
                }
            }
        }
    }
    if (s.empty() == false) {
        flag = 0;
    }
    if (flag == 1) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    #ifndef TORI
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    doura;

    string str;

    cin >> str;

    if (ispar(str)) {
        cout << "Balanced\n";
    }
    else {
        cout << "Not Balanced\n";
    }

    return 0;
}
