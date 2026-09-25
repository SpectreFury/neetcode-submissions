class Solution {
    /**
     * @param {number[]} prices
     * @return {number}
     */
    maxProfit(prices) {
        if (prices.length < 2) return 0
        let maxProfit = 0;

        let left = 0;
        let right = left + 1;

        while (left < right) {
            const currMax = prices[right] - prices[left];
            if (currMax > maxProfit) {
                maxProfit = currMax;
            }

            if (right === prices.length - 1) {
                if (left === prices.length - 2) {
                    return maxProfit;
                }

                left++;
                right = left + 1;
            } else {
                right++;
            }
        }

        return maxProfit;
    }
}
