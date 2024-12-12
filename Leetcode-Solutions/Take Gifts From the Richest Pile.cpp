class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        //HEAPIFY - PUSHING ELE IN MAX HEAP 
        priority_queue<int> pq(begin(gifts), end(gifts)); //max_heap

        long long initial_sum = 0;
        for(int &gift : gifts){
            initial_sum += gift;
        }

        long long curr_sum = 0;
        while(k--){
            int maxEle = pq.top();
            pq.pop();

            // taken gift value after the operation : maxele - sqrt(maxele) = taken_ele
            // remaining gift value : sqrt(maxele)
            int remaining_ele = floor(sqrt(maxEle));
            pq.push(remaining_ele);

            //find the current sum after removing the gifts value
            curr_sum += maxEle - remaining_ele;
        }

        return initial_sum - curr_sum;
    }
};