class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int l=1,r=maxi;
        while(l<r){
            int mid=l+(r-l)/2;
            int total=0;
            for(int i=0;i<piles.size();i++){
                total+=ceil((double)piles[i]/mid);
            }
            if(total>h) l=mid+1;
            else r=mid;
        }
        return l;
    }
};
