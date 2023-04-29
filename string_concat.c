#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    scanf("%s %s",a,b);

    // using strcat function
    strcat(a,b);

    // strcat algorithm

    // int k=strlen(a);
    // for(int i=0;i<=strlen(b);i++){
    //     a[k]=b[i];
    //     k++;
    // }
    printf("%s %s",a,b);
    return 0;
}