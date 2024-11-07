#include <bits/stdc++.h>
#include <iostream>
#include <string>

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
void __print(const char* x) { cerr << '\"' << x << '\"'; }
void __print(const string& x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V> void __print(const pair<T, V>& x) {
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T> void __print(const T& x) {
    int f = 0;
    cerr << '{';
    for (auto& i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V> void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x) 
#endif

vector<int> split_and_convert_to_int(const string& str) {
    vector<int> result;
    istringstream iss(str); // Create an input string stream
    string token;
    while (getline(iss, token, ',')) { // Split by comma
        // Convert the token to an integer and add it to the result vector
        result.push_back(stoi(token));
    }
    return result;
}

static int _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
    }();

class Solution {
public:
    int minOperations(vector<int>& A, int T) {
        int n = A.size();
        sort(A.begin(), A.end());
        int L = 0;
        int R = n - 1;
        int candidate = -1; // Initialize candidate to -1 (not found)

        while (L <= R) {
            int m = (L + R) / 2;
            if (A[m] < T) {
                candidate = m;
                L = m + 1;
            } else {
                R = m - 1;
            }
        }

        if (candidate != -1) {
            return A[candidate];
        } else {
            return 0;
        }
    }
};

int main() {
    // Solution s;
    // int k;
    // string in;
    // cin >> in >> k;
    // auto v = split_and_convert_to_int(in);
    // cout << s.minOperations(v, k);
    auto start = chrono::high_resolution_clock::now();
    for (size_t i = 0; i < 10000000; i++)
    {
    }
    // End time measurement
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate elapsed time in milliseconds
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    // Print elapsed time in milliseconds
    std::cout << "\nElapsed time: " << elapsed << " milliseconds\n";

    return 0;


}
