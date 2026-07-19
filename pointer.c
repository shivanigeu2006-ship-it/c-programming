#include<stdio.h>
int main(){
    int p[5]={1,3,2},i ,t,*a;
    a=&p[0];
    for(int i=0;i<4;i++){
        if(*(a+i)>*(a+i+1)){
            t=*(a+i);
            *(a+i)=*(a+i+1);
            *(a+i+1)=t;
            i=-1;
        }
    }
    for(int i=0;i<=4;i++){
        printf("%d",a[i]);

    }
return 0;
}