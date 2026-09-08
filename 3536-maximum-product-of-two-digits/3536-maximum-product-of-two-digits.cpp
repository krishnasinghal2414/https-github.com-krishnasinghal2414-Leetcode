class Solution {
public:
    int maxProduct(int n) {
        int a=n;
        vector<int> arr;
        while(a){
            int d=a%10;
            arr.push_back(d);
            a=a/10;
        }
        sort(arr.begin(),arr.end());
        return arr[arr.size()-2]*arr[arr.size()-1];
    }
};