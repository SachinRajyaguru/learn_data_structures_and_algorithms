// #include <bits/stdc++.h>
// #include <iostream>
// #include <string>

// using namespace std;

// void __print(int x) { cerr << x; }
// void __print(long x) { cerr << x; }
// void __print(long long x) { cerr << x; }
// void __print(unsigned x) { cerr << x; }
// void __print(unsigned long x) { cerr << x; }
// void __print(unsigned long long x) { cerr << x; }
// void __print(float x) { cerr << x; }
// void __print(double x) { cerr << x; }
// void __print(long double x) { cerr << x; }
// void __print(char x) { cerr << '\'' << x << '\''; }
// void __print(const char* x) { cerr << '\"' << x << '\"'; }
// void __print(const string& x) { cerr << '\"' << x << '\"'; }
// void __print(bool x) { cerr << (x ? "true" : "false"); }

// template <typename T, typename V> void __print(const pair<T, V>& x) {
//     cerr << '{';
//     __print(x.first);
//     cerr << ',';
//     __print(x.second);
//     cerr << '}';
// }
// template <typename T> void __print(const T& x) {
//     int f = 0;
//     cerr << '{';
//     for (auto& i : x)
//         cerr << (f++ ? "," : ""), __print(i);
//     cerr << "}\n";
// }
// void _print() { cerr << "]\n"; }
// template <typename T, typename... V> void _print(T t, V... v) {
//     __print(t);
//     if (sizeof...(v))
//         cerr << ", ";
//     _print(v...);
// }
// #ifndef ONLINE_JUDGE
// #define debug(x...) cerr << "[" << #x << "] = ["; _print(x) 
// #endif

// vector<int> split_and_convert_to_int(const string& str) {
//     vector<int> result;
//     istringstream iss(str); // Create an input string stream
//     string token;
//     while (getline(iss, token, ',')) { // Split by comma
//         // Convert the token to an integer and add it to the result vector
//         result.push_back(stoi(token));
//     }
//     return result;
// }

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode* next) : val(x), next(next) {}
// };

// static int _ = []() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     return 0;
//     }();

// int init = [] {
//     ofstream out("user.out");
//     cout.rdbuf(out.rdbuf());
//     for (string str; getline(cin, str);) {
//         istringstream ss(str); ss.ignore(3);
//         ostringstream os;
//         int sum = 0;
//         bool first = true;
//         cout << '[';
//         for (int i; ss >> i; ss.ignore()) {
//             if (!i) {
//                 os << (first ? "" : ",") << sum;
//                 sum = 0;
//                 first = false;
//             } else {
//                 sum += i;
//             }
//         }
//         os << ']';
//         cout << os.str() << '\n';
//     }
//     exit(0);
//     return 0;
//     }();

// class Solution {
// private:
//     int distance(int x, int y) {
//         int d = (y - x) & 7; // Using bitwise AND with 7 (same as modulo 8)
//         return abs(d > 4 ? d - 8 : d);
//     }
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         ListNode* p = head;
//         ListNode* c = head;
//         ListNode* n = head->next;
//         vector<int> a = { };
//         vector<int> criticalPointsPositions;

//         int i = 0;
//         while (n != nullptr) {
//             int pv = p->val;
//             int cv = c->val;
//             int nv = n->val;


//             // cout << "p add=" << p->next << ", c add=" << c->next << ", n add=" << n->next << endl;

//             if (pv > cv && cv < nv) {
//                 criticalPointsPositions.push_back(i);
//                 // cout << "The " << i << " node is a local minima because " << cv << " is less than " << pv << " and " << nv << endl;
//             }

//             if (pv < cv && cv > nv) {
//                 criticalPointsPositions.push_back(i);
//                 // cout << "The " << i << " node is a local maxima because " << cv << " is greater than " << pv << " and " << nv << endl;
//             }

//             p = c;
//             c = n;
//             n = n->next;
//             i++;
//         }

//         int ns = criticalPointsPositions.size();
//         int maxDistance = -1;
//         int minDistance = -1;
//         if (ns >= 2) {
//             // if (ns % 2 == 0) {
//             //     maxDistance = criticalPointsPositions[ns - 1] - criticalPointsPositions[0];
//             //     minDistance = criticalPointsPositions[ns / 2 + 1] - criticalPointsPositions[ns / 2];
//             // } else {
//             //     maxDistance = criticalPointsPositions[ns - 1] - criticalPointsPositions[0];
//             //     minDistance = criticalPointsPositions[ns / 2 + 1] - criticalPointsPositions[ns / 2];
//             // }
//             maxDistance = distance(criticalPointsPositions[ns - 1], criticalPointsPositions[0]);
//             minDistance = distance(criticalPointsPositions[ns / 2 + 1], criticalPointsPositions[ns / 2]);
//         }
//         return { minDistance, maxDistance };
//     }
// };

// int main() {
//     Solution s;
//     // int k;
//     string in;
//     cin >> in;
//     auto v = split_and_convert_to_int(in);
//     ListNode* head = new ListNode(v[0]);
//     ListNode* t = head;

//     for (auto& n : v) {
//         t->next = new ListNode(n);
//         t = t->next;
//     }

//     // t = head;  // reset to zero

//     // while (t != nullptr) {
//     //     cout << t->val << ", ";
//     //     cout << t->next << endl;
//     //     t = t->next;
//     // }




//     auto a = s.nodesBetweenCriticalPoints(head);
//     __print(a);
//     return 0;


// }
