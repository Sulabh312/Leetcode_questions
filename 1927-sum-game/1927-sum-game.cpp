class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int aSum = 0, aq = 0, bSum = 0, bq = 0;
        for(int i = 0; i < n; i++){
            if(i < n/2){
                if(num[i] == '?') aq++;
                else aSum += num[i] - '0';
            }
            else {
                if(num[i] == '?') bq++;
                else bSum += num[i] - '0';
            }
        }
        int qDif = aq - bq;
        int sumDif = aSum - bSum;
        if(qDif % 2) return true;
        return sumDif != -9 * (qDif/2);
    }
};