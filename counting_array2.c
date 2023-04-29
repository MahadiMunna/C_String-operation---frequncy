#include <stdio.h>
#include <string.h>
int main(){
    int cnt[26]={0};
    char s[100];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        cnt[s[i]-'a']++;
    }
    for(int i=0 ;i<26;i++){
        printf("%c - %d\n",i+'a',cnt[i]);
    }
    return 0;
}