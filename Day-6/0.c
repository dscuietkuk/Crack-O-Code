#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int i,j;
    char s[10000];
    scanf("%s",s);
    int c=sqrt(strlen(s));
    c+=1;
    for(i=0;i<c;i++){
        for(j=i;j<strlen(s);j+=c){
            printf("%c",s[j]);
        }
        printf(" ");
    }
    return 0;
}

