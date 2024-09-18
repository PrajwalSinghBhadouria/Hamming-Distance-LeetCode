class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = x ^ y;
        vector<int> v;
        while(ans!=0){
            v.push_back(ans%2);
            ans = ans/2;
        }
        int count=0;
        for(int i=0; i<v.size(); i++){
            if(v[i]==1){
                count++;
            }
        }
        return count;
    }
};
