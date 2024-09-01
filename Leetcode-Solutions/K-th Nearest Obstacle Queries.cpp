class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
    priority_queue<int> maxHeap;
    vector<int> results;

    // Iterate through each query and add the obstacle distance
    for (const auto& query : queries) {
        // Calculate the Manhattan distance of the obstacle from the origin
        int x = query[0];
        int y = query[1];
        int distance = abs(x) + abs(y);

        // Add the distance to the max-heap
        maxHeap.push(distance);

        // If the heap size exceeds k, remove the largest distance
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }

        // If the heap has fewer than k elements, the k-th nearest distance is not available
        if (maxHeap.size() < k) {
            results.push_back(-1);
        } else {
            // The root of the max-heap contains the k-th nearest distance
            results.push_back(maxHeap.top());
        }
    }

    return results;
    }
};