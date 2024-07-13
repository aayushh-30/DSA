#include <vector>
#include <algorithm>
#include <stack>
#include <string>

class Solution {
public:
    std::vector<int> survivedRobotsHealths(std::vector<int>& positions, std::vector<int>& healths, std::string directions) {
        int n = positions.size();
        std::vector<int> result(n, -1); // -1 indicates a robot is destroyed

        // Combine positions, healths, and directions into a single array for sorting
        std::vector<std::tuple<int, int, char, int>> robots;
        for (int i = 0; i < n; ++i) {
            robots.emplace_back(positions[i], healths[i], directions[i], i);
        }

        // Sort robots by their positions
        std::sort(robots.begin(), robots.end());

        std::stack<std::tuple<int, int, char, int>> st; // stack to handle collisions (position, health, direction, index)
        
        for (const auto& robot : robots) {
            int pos = std::get<0>(robot);
            int health = std::get<1>(robot);
            char dir = std::get<2>(robot);
            int index = std::get<3>(robot);
            
            if (dir == 'R') {
                st.push(robot);
            } else { // dir == 'L'
                while (!st.empty() && std::get<2>(st.top()) == 'R') {
                    auto rightRobot = st.top();
                    int rightHealth = std::get<1>(rightRobot);
                    int rightIndex = std::get<3>(rightRobot);

                    if (rightHealth > health) {
                        std::get<1>(st.top()) -= 1;
                        health = -1; // this left robot is destroyed
                        break;
                    } else if (rightHealth < health) {
                        health -= 1;
                        st.pop();
                    } else {
                        st.pop();
                        health = -1; // both are destroyed
                        break;
                    }
                }
                if (health > 0) {
                    st.push(std::make_tuple(pos, health, dir, index));
                }
            }
        }

        // Collect survivors from the stack
        std::vector<int> survivors;
        while (!st.empty()) {
            auto robot = st.top();
            st.pop();
            int index = std::get<3>(robot);
            result[index] = std::get<1>(robot); // store the remaining health
        }

        // Remove destroyed robots (those with -1 health) and return result
        std::vector<int> final_result;
        for (int health : result) {
            if (health != -1) {
                final_result.push_back(health);
            }
        }
        return final_result;
    }
};
