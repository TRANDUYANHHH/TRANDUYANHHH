#include <stdio.h>
#include <string.h>
#define ll long long
long long toll(char s[]){
	long long ans = 0;
	for(int i = 0; i < strlen(s); i++){
		ans*= 10; ans += s[i] - '0';
	}
	return ans;
}
long long U(long long a, long long b){
	if(a < b){
		long long tmp = a;
		a = b; b = tmp;
	}
	while(b != 0){
		ll r = a%b;
		a = b; b = r;
	}
	return a;
}
void solve(){
	char s[20];
	scanf("%s", s);
	if(strlen(s)%2){
		printf("INVALID");
	}
	else{
		long long a, b;
		char s1[10];
		char s2[10]; 
		for(int i = 0; i < strlen(s)/2; i++){
			s1[i] = s[i];
		}
		s1[strlen(s)/2] = '\0';
		a = toll(s1);
		for(int i = strlen(s)/2; i < strlen(s); i++){
			s2[i - strlen(s)/2] = s[i];
		}
		s2[strlen(s)/2] = '\0';
		b = toll(s2);
		long long ans;
		ans = (a*b)/U(a, b);
		printf("%lld", ans);
	}
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		solve();
		printf("\n");
	}
	return 0;
}
