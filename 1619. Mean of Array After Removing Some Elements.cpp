//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/806827037/

class Solution {
public:
    double trimMean(vector<int>& arr) {
        double mean = 0;
        
        double fivePercentSize = arr.size()*0.05;
        int count = 0;
        
        sort(arr.begin(), arr.end());
        
        for (int i = fivePercentSize; i < arr.size()-fivePercentSize; i++){
            cout << arr[i] << " ";
            mean += arr[i];
            count++;
        }
        
        return mean/count;
        
    }
};