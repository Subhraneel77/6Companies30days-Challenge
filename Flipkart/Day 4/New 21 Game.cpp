class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        vector<double> dp(n + 1, 0);
        double prob = 1.0/maxPts;
        dp[0] = 1;
        for(int i = 0; i < k; i++) {
            double add = dp[i] * prob;
            for(int j = i + 1; j <= n && j - i <= maxPts; j++) {
                dp[j] += add;
            }
        }
        
        double sum = 0;
        for(int i = k; i <= n; i++) {
            sum += dp[i];
        }
        
        return sum;
    }
};