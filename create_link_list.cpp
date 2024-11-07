struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* split_and_convert_to_int_list(const string& str) {
    vector<int> result;
    istringstream iss(str); // Create an input string stream
    string token;
    while (getline(iss, token, ',')) { // Split by comma
        // Convert the token to an integer and add it to the result vector
        result.push_back(stoi(token));
    }
    ListNode* l1 = new ListNode(result[0]);;
    ListNode* t = l1;

    for (int i = 1; i < result.size(); ++i) {
        t->next = new ListNode(result[i]);
        t = t->next;
    }
    return l1;
}