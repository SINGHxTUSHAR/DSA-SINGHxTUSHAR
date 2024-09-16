class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();

        // to store the minutes of each ele of timepoints
        vector<int> minutes(n);

        for(int i=0; i<n; i++){
            string time = timePoints[i];

            //fetch the HH & MM
            string hourSubstr = time.substr(0, 2);
            string minuteSubstr = time.substr(3, n);

            //stores the hour & minute in int for
            int hourInt = stoi(hourSubstr);
            int minuteInt = stoi(minuteSubstr);

            //total minutes for ele[i]
            minutes[i] = (hourInt * 60) + minuteInt;
        }
        
        //sort to take easy diff b/w two adjacent ele
        sort(begin(minutes), end(minutes));

        // to cal the diff b/w two adjc. ele
        int result = INT_MAX;
        for(int i=1; i<minutes.size(); i++){
            result = min(result, minutes[i]-minutes[i-1]);
        }

        //edge case : for the diff b/w the clockwise closet and anti-clock closet ele
        return min(result, (24*60 - minutes[n-1] + minutes[0]));
    }
};