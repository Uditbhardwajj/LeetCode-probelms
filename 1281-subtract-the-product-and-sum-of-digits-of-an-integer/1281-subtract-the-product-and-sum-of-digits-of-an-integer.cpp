class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp=0;
        int mul=1;
        int sum=0;
       while(n>0){
        temp=n%10;
        sum+=temp;
        mul*=temp;
        n=n/10;
       }
       return mul-sum;
    }
};