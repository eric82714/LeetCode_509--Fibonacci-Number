class Solution {
public:
    int fib(int N) {
        vector<int> F = {0, 1};
        
        if(N < 2) return F[N];
        
        int result = 0;
        
        for(int i = 2; i < N+1; i++) {
            result = F[i-1] + F[i-2];
            F.push_back(result);
        }
            
        return result;
        
    }
};
