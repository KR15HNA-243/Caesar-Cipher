#include <stdio.h>

int main()
{
    int len,k,i;
    scanf("%d",&len);
    char str[len];
    for(i=0;i<len+1;i++){
        scanf("%c",&str[i]); //take string as input
    }
    scanf("%d",&k); //positions to be shifted by
    for(i=0;i<len+1;i++){
        if(((str[i]<91)&&(str[i]>64))||((str[i]<123)&&(str[i]>96))){
            str[i]=str[i]+k;
        }
    }
    for(i=0;i<len+1;i++){
        printf("%c",str[i]);
    }
    
 
    return 0;   
}
