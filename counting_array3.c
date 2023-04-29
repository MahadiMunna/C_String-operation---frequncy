#include <stdio.h>

int main(){
    char s;
    int counter[26]={0};
    while(scanf("%c",&s)!=EOF){
        counter[s-'a']++;
    }
    // for(char i='a';i<='z';i++){
    //     printf("%c - %d\n",i,counter[i-'a']);
    // }
    for(int i=0;i<26;i++){
        if(counter[i]!=0){
            printf("%c - %d\n",i+97,counter[i]);}
    }
    
    return 0;
}