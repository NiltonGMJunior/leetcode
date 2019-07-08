/* LeetCode
 * 1109 - Corporate Flight Bookings - https://leetcode.com/problems/corporate-flight-bookings/
 * Nilton Gomes Martins Junior
 * 08/07/2019
 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    // This is a great solution from: https://leetcode.com/problems/corporate-flight-bookings/discuss/328871/C%2B%2BJava-with-picture-O(n)
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> seats_booked(n, 0);
        for(auto &booking : bookings)
        {
            seats_booked[booking[0] - 1] += booking[2];
            if (booking[1] < n)
                seats_booked[booking[1]] -= booking[2];
        }

        for(int i = 1; i < n; ++i)
            seats_booked[i] += seats_booked[i - 1];

        return seats_booked;
    }
};

int main(int argc, char const *argv[])
{
    return 0;
}
