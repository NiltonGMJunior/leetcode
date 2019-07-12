/* LeetCode
 * 0804  - Unique Morse Code Words - https://leetcode.com/problems/unique-morse-code-words/
 * Nilton Gomes Martins Junior
 * 12/07/2019
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string transformToMorse(string &word)
    {
        vector<string> morseMap{".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        string transformation("");
        for (auto &ch : word)
        {
            // Considers all words are given in lower case
            transformation += morseMap[ch - 'a'];
        }
        return transformation;
    }
    int uniqueMorseRepresentations(vector<string> &words)
    {
        // Naive solution: For each word in "words" check if the Morse transformation has already been seen. If not, increment count.
        vector<string> transformations;
        vector<string>::iterator transformations_iterator;
        int count(0);
        for (auto &word : words)
        {
            string transformation = transformToMorse(word);
            transformations_iterator = find(transformations.begin(), transformations.end(), transformation);
            if (transformations_iterator == transformations.end())
            {
                count++;
                transformations.push_back(transformation);
            }
        }
        return count;
    }
};

int main(int argc, char const *argv[])
{
    return 0;
}
