#include <bits/stdc++.h>

using namespace std;

using namespace std;

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}

template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (const auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << '}';
}

void _print() { cerr << "]\n"; }

template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}

#ifndef ONLINE_JUDGE
#define debug(...) _debug(#__VA_ARGS__, __VA_ARGS__)
#define coutDebug(...) _coutDebug(#__VA_ARGS__, __VA_ARGS__)

void _debug(const char *names)
{
    cerr << "[" << names << "]" << endl;
}

void _coutDebug(const char *names)
{
    cout << "[" << names << "]" << endl;
}

template <typename T>
void _debug_item(const char *&names, T &&value)
{
    while (*names == ' ')
        ++names; // Skip leading spaces
    const char *comma = strchr(names, ',');
    if (comma)
    {
        cerr.write(names, comma - names);
        names = comma + 1;
    }
    else
    {
        cerr << names;
        names += strlen(names);
    }
    cerr << ": ";
    __print(forward<T>(value));
    cerr.write(", ", 2);
}

template <typename T>
void _coutDebug_item(const char *&names, T &&value)
{
    while (*names == ' ')
        ++names; // Skip leading spaces
    const char *comma = strchr(names, ',');
    if (comma)
    {
        cout.write(names, comma - names);
        names = comma + 1;
    }
    else
    {
        cout << names;
        names += strlen(names);
    }
    cout << ": ";
    __print(forward<T>(value));
    cout.write(", ", 2);
}

template <typename... Args>
void _debug(const char *names, Args &&...args)
{
    cerr << "[";
    (_debug_item(names, forward<Args>(args)), ..., (cerr << ", "));
    cerr << "\b\b]\n"; // Remove trailing comma and space, add closing bracket and newline
}

template <typename... Args>
void _coutDebug(const char *names, Args &&...args)
{
    cout << "[";
    (_coutDebug_item(names, forward<Args>(args)), ..., (cout << ", "));
    cout << "\b\b]\n"; // Remove trailing comma and space, add closing bracket and newline
}
#endif

vector<int> split_and_convert_to_int(const string &str)
{
    vector<int> result;
    istringstream iss(str); // Create an input string stream
    string token;
    while (getline(iss, token, ','))
    { // Split by comma
        // Convert the token to an integer and add it to the result vector
        result.push_back(stoi(token));
    }
    return result;
}

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

const array<array<int, 2>, 2> dir = {{{0, 1}, {1, 0}}};

class Solution
{
public:
    int findMaxFactor(int n)
    {
        cout << "find max factor" << n;
        int i = n / 2;
        while (n % i != 0)
        {
            cout << "while at " << i;
            i--;
        }
        return i;
    }

    int solve(int n, int &answer)
    {
        cout << "solve";
        if (answer == n)
        {
            return 0;
        }
        else
        {
            cout << "else";
            int maxFactor = findMaxFactor(n);
            cout << maxFactor;
            answer += solve(maxFactor, answer) + maxFactor;
            return answer;
        }
    }

    int minSteps(int n)
    {
        int answer = 0;
        solve(n, answer);
        return answer;
    }
};

int main()
{
    Solution s;
    int n = 27;
    cout << s.minSteps(n);
    return 0;
}
