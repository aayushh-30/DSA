#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (int i = 0; i < operations.size(); i++) {
            string s = operations[i];
            if (!st.empty() && s == "+") {
                int k = st.top();
                st.pop();
                int j = st.top() + k;
                st.push(k);
                st.push(j);
            } else if (!st.empty() && s == "D") {
                int l = st.top();
                st.push(l * 2);
            } else if (!st.empty() && s == "C") {
                st.pop();
            } else {
                st.push(stoi(s));
            }
        }
        int sum = 0;
        while (!st.empty()) {
            sum = sum + st.top();
            st.pop();
        }
        return sum;
    }
};

int main() {
    
    Solution solution;
    vector<string> operations = {"5", "2", "C", "D", "+"};
    int result = solution.calPoints(operations);
    cout << "Result: " << result << endl;
    return 0;
}
