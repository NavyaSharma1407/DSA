class Solution {
public:
    int distMoney(int money, int children) {
        if(children > money) return -1;
        int cnt = 0;
        while(money >= 8 && money > children && children > 0){
            money -= 8;
            children--;
            cnt++;
        }
        if(money < children || children == 1 && money == 4 || 
           children == 0 && money > 0){
            cnt--;
        }
        return cnt;
    }
};
