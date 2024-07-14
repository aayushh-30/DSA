#include<bits/stdc++.h>

using namespace std;
class Solution {
public:

// map<string, int> parseSubFormula(const string &formula, int &i);

map<string, int> parseFormula(const string &formula) {
    int i = 0;
    return parseSubFormula(formula, i);
}

map<string, int> parseSubFormula(const string &formula, int &i) {
    map<string, int> counts;
    while (i < formula.size() && formula[i] != ')') {
        if (formula[i] == '(') {
            i++;
            map<string, int> innerCounts = parseSubFormula(formula, i);
            i++; // skip the closing parenthesis
            int start = i;
            while (i < formula.size() && isdigit(formula[i])) {
                i++;
            }
            int multiplier = (start == i) ? 1 : stoi(formula.substr(start, i - start));
            for (auto &pair : innerCounts) {
                counts[pair.first] += pair.second * multiplier;
            }
        } else {
            int start = i;
            i++;
            while (i < formula.size() && islower(formula[i])) {
                i++;
            }
            string name = formula.substr(start, i - start);
            start = i;
            while (i < formula.size() && isdigit(formula[i])) {
                i++;
            }
            int count = (start == i) ? 1 : stoi(formula.substr(start, i - start));
            counts[name] += count;
        }
    }
    return counts;
}

string countOfAtoms(const string &formula) {
    map<string, int> counts = parseFormula(formula);
    vector<pair<string, int>> sortedCounts(counts.begin(), counts.end());
    sort(sortedCounts.begin(), sortedCounts.end());
    string result;
    for (const auto &pair : sortedCounts) {
        result += pair.first;
        if (pair.second > 1) {
            result += to_string(pair.second);
        }
    }
    return result;
}
};
