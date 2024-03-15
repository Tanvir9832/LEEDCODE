class Solution {
public:
    int pivotInteger(int n) {
        int totalNumber = (n * (n+1))/2;
        int l = 1, r = n;
        while(l<=r){
            int mid = (l + r)/2;
            int left = (mid * (mid + 1))/2;
            int right = totalNumber - left + mid;
            if(left==right)return mid;
            else if(left > right) r = mid - 1;
            else l = mid + 1;
        }
        return -1;
    }
};