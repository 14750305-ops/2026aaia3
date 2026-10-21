//week 07-2.cpp
//1275.find-winner-on-a-tic-tac-toe-game
class Solution {
public: //大資料結構moves裡放中資料結構move裡放小資料結構int的i,j;
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={0};//C語言的2維陣列，都是0
        int who = 1;//1:A 2:b 現在輪到誰
        string whoTable[3]={"Draw","A","B"};
        for(vector<int> move:moves){
            int i= move[0],j= move[1];
            a[i][j] =who;//要放會變動的誰
            if(a[0][0]==a[0][1] && a[0][1] == a[0][2] && a[0][2] == who) return whoTable[who];
            if(a[1][0]==a[1][1] && a[1][1] == a[1][2] && a[1][2] == who) return whoTable[who];
            if(a[2][0]==a[2][1] && a[2][1] == a[2][2] && a[2][2] == who) return whoTable[who];

            if(a[0][0]==a[1][0] && a[1][0] == a[2][0] && a[2][0] == who) return whoTable[who];
            if(a[0][1]==a[1][1] && a[1][1] == a[2][1] && a[2][1] == who) return whoTable[who];
            if(a[0][2]==a[1][2] && a[1][2] == a[2][2] && a[2][2] == who) return whoTable[who];

            if(a[0][0]==a[1][1] && a[1][1] == a[2][2] && a[2][2] == who) return whoTable[who];
            if(a[2][0]==a[1][1] && a[1][1] == a[0][2] && a[0][2] == who) return whoTable[who];
            if(who==1) who=2;//換2:B
            else who = 1;//換1:A
            //myshowTable(a);

        }
        if(moves.size() == 9)return "Draw";//平手
        else return "Pending";
    }

    void myshowTable(int a[3][3]){
        for (int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
};
