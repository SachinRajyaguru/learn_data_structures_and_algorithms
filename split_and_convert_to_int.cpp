#include <bits/stdc++.h>
using namespace std;
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

