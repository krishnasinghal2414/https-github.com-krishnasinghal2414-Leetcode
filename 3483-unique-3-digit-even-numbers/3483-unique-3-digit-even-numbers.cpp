class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int arr[10]={0};
        int cnt = 0;
        int n=digits.size();
        for(int i=0;i<n;i++){
            arr[digits[i]]++;
        }
        for(int i=100;i<1000;i+=2){
            bool even=true;
            int a=i%10;
            int b= (i/10)%10;
            int c= i/100;
            if(--arr[a]<0) even=false;
            if(--arr[b]<0) even= false;
            if(--arr[c]<0) even=false;
            arr[a]++;
            arr[b]++;
            arr[c]++;
            if(even) cnt++;
        }
        return cnt;
    }
};