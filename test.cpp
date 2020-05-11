#include <bits/stdc++.h>
using namespace std;

typedef long long ll;	

int n, a[100];

void solve(){
	cin >> n;
	int cnt = 0, cnt2 = 0;
	while(n != 0){
		a[cnt] = n%10;
		n /= 10;
		cnt++;
		cnt2++;
	}
	int newCnt = cnt2;
	cnt2 -= 1;
	for(int i = cnt-1; i >= 0; i--){
		if(a[i] != 0){
			cout << a[i]%10;
		} else{
			newCnt--;
			cnt2 = newCnt-1;
			continue;
		}
		if(i != 0){
			while(cnt2 != 0){
				cout << "0";
				cnt2--;
			}
		} else{
			break;
		}
		if(a[cnt-1-i] != 0){
			cout << " + ";
		}
		newCnt--;
		cnt2 = newCnt-1;
	}
	cnt = cnt2 = 0;
	cout << "\n";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t, i = 1;
	cin >> t;
	while(t--){
		cout << "Case #" << i << ": ";
		i++;
		solve();
	}
}
