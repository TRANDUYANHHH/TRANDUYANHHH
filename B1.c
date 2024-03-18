#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	char s[105];
	scanf("%s", s);
	int n = strlen(s);
	if(n % 3){
		int l = ((n/3)+1)*3 - n;
		char tmp[105];
		for(int i = 0; i < l; i++){
			tmp[i] = '0';
		}
		tmp[l] = '\0';
		strcat(tmp, s);
		strcpy(s, tmp);
	}
	int ans[100];
	int p = 0;
	n = strlen(s)/3;
	for(int i = n - 1; i >= 0; i--, p++){
		ans[p] = s[i*3+2]-'0' + (s[i*3+1]-'0')*2 +(s[i*3]-'0')*4;
	}
	for(int i = p -1; i >= 0; i--){
		printf("%d", ans[i]);
	}
	return 0;
}
