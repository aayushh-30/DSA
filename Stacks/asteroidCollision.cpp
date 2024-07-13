#include <vector>
#include <stack>
#include <algorithm>

class Solution {
public:
    std::vector<int> asteroidCollision(std::vector<int>& asteroids) {
        std::stack<int> st;
        
        for (int i = 0; i < asteroids.size(); ++i) {
            if (asteroids[i] > 0) {
                st.push(asteroids[i]);
            } else {
                while (!st.empty() && st.top() > 0 && st.top() < -asteroids[i]) {
                    st.pop();
                }
                if (!st.empty() && st.top() == -asteroids[i]) {
                    st.pop();
                } else if (st.empty() || st.top() < 0) {
                    st.push(asteroids[i]);
                }
            }
        }

        std::vector<int> final_state;
        while (!st.empty()) {
            final_state.push_back(st.top());
            st.pop();
        }
        std::reverse(final_state.begin(), final_state.end());
        
        return final_state;
    }
};
