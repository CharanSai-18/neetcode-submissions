class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
                int n=nums.size();
                        int ans=n+n;
                                vector<int> arr(ans);
                                        for(int i=0;i<n;i++){
                                                    arr[i]=nums[i];
                                                                arr[i+n]=nums[i];
                                                                        }
                                                                                return arr;
                                                                                    }
                                                                                    };
