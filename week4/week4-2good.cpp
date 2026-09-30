/// week04-1b.cpp SOIT108_Advance_008
///程式正確，但在codeblocks出錯,warning :rage-base for
///2011年後，只有在-std = c++11 or -std=gnu++11才能用
///所以要修改設定:settings-compiler-compiler setting-第二個
///下方是week04小考題目 SOIT106_ADVANCE_012
#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector <int> a;
	int now;

	for(int i=0;i<20;i++){
        cin>>now;
        if(now==0){
            break;
        }
        a.push_back(now);
	}
	cin>>now;
	int ans=0;
	for (int num : a){
		if (num==now) ans++;
	}
	cout<<ans<<"\n";
}
