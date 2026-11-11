///week10-3.cpp
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0;
        int M=salary[0],m=salary[0];
        for(int now:salary){
            total+=now;
            if(now>M) M=now;
            if(now<m) m=now;
        }
        return (total-M-m)/(salary.size()-2);
    }
};
