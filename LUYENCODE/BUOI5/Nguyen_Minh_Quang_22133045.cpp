#include <bits/stdc++.h>
using namespace std;
char temp,result;
string S;
int k;
void decode(){
	for (int i = 0; i < S.size(); i++)
	if (S[i] >= 'A' && S[i] <= 'Z'){
		if ((S[i] - k) < 'A') result = 90 - (65 - (S[i] - k)) + 1;
		else result = S[i] - k;
		cout << result;
	} else if (S[i] >= 'a' && S[i] <= 'z') {
			if ((S[i] - k) < 'a') result = 122 - (97 - (S[i] - k)) +1;
			else result = S[i] - k;
			cout << result;
		} else cout << " ";
}
void encode(){
	for (int i = 0; i < S.size(); i++)
	if (S[i] >= 'A' && S[i] <= 'Z'){
		if ((S[i] + k) > 'Z') result = 64 + ((S[i] + k) - 90);
		else result = S[i] + k;
		cout << result;
	} else if (S[i] >= 'a' && S[i] <= 'z') {
			if ((S[i] + k) > 'z') result = 96 + ((S[i] + k) - 122);
			else result = S[i] + k;
			cout << result;
		} else cout << " ";
}
int main(){
	getline(cin,S);
	cout << "Nhap k: " ; 
	cin >> k;
	cout << "Ban muon Decode hay Encode [D/E]: ";
	cin >> temp;
	if (temp == 'D' || temp == 'd') decode();
	if (temp == 'E' || temp == 'e') encode();
	return 0;
}