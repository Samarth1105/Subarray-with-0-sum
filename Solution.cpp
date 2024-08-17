class Solution{
    public:
    bool subArrayExists(int arr[], int n){
        int sum_so_far= 0;
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++){
            sum_so_far+=arr[i];
            
            if(sum_so_far==0){
                return true;
            }
            if(m.find(sum_so_far) != m.end()){
                return true;
            }
            m[sum_so_far]++;
        }
        return false;
    }
};
