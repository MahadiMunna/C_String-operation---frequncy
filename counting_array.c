#include <stdio.h>

int main(){
    int cnt[6]={0};
    int n,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        cnt[k]++;
    }
    for(int i=0;i<n;i++){
        printf("%d - %d\n",i,cnt[i]);
    }
    return 0;
}