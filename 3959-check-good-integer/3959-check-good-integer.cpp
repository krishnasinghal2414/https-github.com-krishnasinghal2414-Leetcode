class Solution {
public:
    bool checkGoodInteger(int n) {
    int ds=0;
    int ss=0;
     while(n){
        int d=n%10;
        ds+=d;
        ss+=(d*d);
        n=n/10;
     } 
     return (ss-ds)>50 ||(ss-ds)==50;
    }
};