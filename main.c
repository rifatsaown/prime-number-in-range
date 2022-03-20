#include<stdio.h>
main()
{
    int i,s,e,j,c=0;
    printf("Enter the starting number : ");
    scanf("%d",&s);
    printf("Enter the ending number : ");
    scanf("%d",&e);
    for(i=s;i<=e;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
               c++;
               break;
            }
        }
        if(c==0){
            printf("%d\n",i);
        }
        c=0;
    };

}
