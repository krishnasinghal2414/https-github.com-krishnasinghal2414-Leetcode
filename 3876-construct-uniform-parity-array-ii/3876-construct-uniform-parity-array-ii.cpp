class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
    int m= *min_element(nums1.begin(),nums1.end());
    if(m%2==1){
        return true;
    }    
    else{
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==1){
                return false;
            }
        }
    }
    return true;
    }
};