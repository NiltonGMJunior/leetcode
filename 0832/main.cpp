/* LeetCode
 * 0832  - Flipping an Image - https://leetcode.com/problems/flipping-an-image/
 * Nilton Gomes Martins Junior
 * 12/07/2019
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> flipVector(vector<int> &v)
    {
        vector<int> flipped_vector(v);
        for (int i = 0; i < v.size(); ++i)
        {
            flipped_vector[i] = v[v.size() - 1 - i];
        }
        return flipped_vector;
    }

    vector<int> invertVector(vector<int> &v)
    {
        vector<int> inverted_vector(v);
        for (int i = 0; i < v.size(); ++i)
        {
            inverted_vector[i] = (inverted_vector[i] ? 0 : 1);
        }
        return inverted_vector;
    }

    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
    {
        vector<vector<int>> new_image;
        for (auto &v : A)
        {
            vector<int> inverted_vector = invertVector(v);
            vector<int> flipped_and_inverted_vector = flipVector(inverted_vector);
            new_image.push_back(flipped_and_inverted_vector);
        }
        return new_image;
    }
};

int main(int argc, char const *argv[])
{
    // int n;
    // cin >> n;
    // vector<int> v;

    // for (int i = 0; i < n; ++i)
    // {
    //     int element;
    //     cin >> element;
    //     v.push_back(element);
    // }

    // Solution test;
    // vector<int> new_vector = test.flipVector(v);

    // for (int i = 0; i < n; ++i)
    // {
    //     cout << new_vector[i] << ' ';
    // }
    // cout << '\n';

    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix;
    for (int i = 0; i < m; ++i)
    {
        vector<int> row;
        for (int j = 0; j < n; ++j)
        {
            int element;
            cin >> element;
            row.push_back(element);
        }
        matrix.push_back(row);
    }

    Solution test;
    vector<vector<int>> transformed_image = test.flipAndInvertImage(matrix);

    cout << "Original image: \n";

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << "Trasnformed image: \n";

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << transformed_image[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
