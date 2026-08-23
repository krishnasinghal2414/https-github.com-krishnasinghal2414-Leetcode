class Solution {
public:
    bool checkDivisibility(int n) {
        long long  t=0;
        long long p=1;
        int a=n;
        while(n!=0){
             int d=n%10;
             t=(t+d);
             p=(p*d);
             n=n/10;
        }
        if ((t+p) == 0) {
            return false; 
        }
        return (a%(t+p)==0);
        
    }
};