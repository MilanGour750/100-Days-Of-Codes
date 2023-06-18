class Solution {
public:
    int getSum(int a, int b) {
        int num;
        while(b!=0){
        num=a&b;
        a=a^b;
        b = (unsigned int)num<<1;
        }
        return a;
    }
};