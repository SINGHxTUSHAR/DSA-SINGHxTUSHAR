#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<long long> road;
        road.push_back(0);

        for (int i = 0; i < n; i++)
        {
            long long stations;
            cin >> stations;

            road.push_back(stations);
        }
        road.push_back(x);
        n = road.size();

        long long max_dist_stations = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                max_dist_stations = max(max_dist_stations, 2 * (road[i] - road[i - 1]));
            }
            else
            {
                max_dist_stations = max(max_dist_stations, road[i] - road[i - 1]);
            }
        }
        cout << max_dist_stations;
    }
    return 0;
}

//https://codeforces.com/problemset/problem/1901/A