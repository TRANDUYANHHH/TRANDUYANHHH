#include <stdio.h>
#include <string.h>
int main(){
	char s[1005];
	scanf("%s",s);
	char mark[101] = {0};
	int n = (strlen(s) % 2) ? strlen(s) - 1 : strlen(s);
	for(int i = 0; i < n; i+=2){
		int x = (s[i]-'0') * 10 + s[i+1] -'0';
		mark[x] ++;
	}
	for(int i = 0; i < n; i+=2){
		int x = (s[i]-'0') * 10 + s[i+1] -'0';
		if(mark[x]){
			printf("%d %d\n", x, mark[x]);
			mark[x] = 0;
		}
	}
	return 0;
}
