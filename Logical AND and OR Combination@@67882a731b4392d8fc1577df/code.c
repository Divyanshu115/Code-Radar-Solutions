#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    bool condition (a>0 && b<0) ||(a==0 && b==0);
    if(condition){
        printf("True\n");

    }
    else{
        printf("Falase\n");
    }
    return 0;
    }
    
