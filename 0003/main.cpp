/* LeetCode
 * 0003 - Longest Substring Without Repeating Characters - https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Nilton Gomes Martins Junior
 * 17/06/2019
 */

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

// TODO: Find a naive solution. Optimize the solution.

class Solution
{
public:
    int lengthOfLongestSubstring(std::string s)
    {
        // Naive solution (not very good O(n^2)).

        // Max length.
        int max = 0;

        // Iterate through all possible starting characters of the longest substring.
        for (int i = 0; i < s.size(); ++i)
        {
            // Current length.
            int cur_len = 0;

            // Vector with already seen characters
            std::vector<char> seen_chars;
            std::vector<char>::iterator seen_chars_it;

            // Iterate through all remaining characters until end of string or until a seen character is found.
            for (int j = i; j < s.size(); ++j)
            {
                // Search for current character
                seen_chars_it = std::find(seen_chars.begin() + j + 1, seen_chars.end(), seen_chars.at(j));
                if (seen_chars_it == seen_chars.end())
                {
                    cur_len++;
                    seen_chars.push_back(s[j]);
                }
                else
                {
                    if (cur_len > max)
                        max = cur_len;
                    break;
                }
            }
            if (max == s.size())
                break;
        }

        return max;

    }
};

int main(int argc, char const *argv[])
{
    Solution test;
    std::cout << test.lengthOfLongestSubstring("abc") << '\n';
    return 0;
}
