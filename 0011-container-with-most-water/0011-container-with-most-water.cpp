class Solution {
public:
    int maxArea(vector<int>& height) {
       int i=0;
       int j=height.size()-1;
       int ar=0;
       int m=0;
       while(i<j){
        ar=(j-i) * min(height[j],height[i]);
        m=max(ar,m);
        if(height[j]>height[i]){
            i++;
        }
        else{
            j--;
        }
       }
       return m;
    }
};