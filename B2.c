#include <stdio.h>
#include <string.h>
#include <math.h>
int check(char s[]){
	for(int i = 0; i < strlen(s)-2; i+= 2){
		if(s[i] != s[i+2]) return 0;
	}
	return 1;
}
void solve(){
	char s[505];
	scanf("%s", s);
	if(strlen(s)%2){
		if(s[0] != s[1]){
			if(check(s)){
				printf("YES");
			}
			else printf("NO");
		}
		else printf("NO");
	}
	else{
		printf("NO");
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
