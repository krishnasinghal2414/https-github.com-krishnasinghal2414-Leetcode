class Solution {
public:
    string toHex(int num) {
            unsigned int n = num;
        string str; 
        char arr[17] = "0123456789abcdef"; 
        do {
            str += arr[n % 16];
            n /= 16;
        } while (n); 

        return {str.rbegin(), str.rend()};
    }
};