#include<stdio.h>
int main(){
    int decimal,n,top=-1;
    printf("enter n value");
    scanf("%d",&n);
    int binary[n];
    printf("enter decimal number:");
    scanf("%d",&decimal);
    if(decimal==0){
        printf("binary=0\n");
        return 0;
    }
    while(decimal>0){
        top++;
        binary[top]=decimal%2;
        decimal=decimal/2;
    }
    printf("binary:");
    for(int i=top;i>=0;i--){
        printf("%d",binary[i]);
    }
    printf("\n");
    return 0;
}
