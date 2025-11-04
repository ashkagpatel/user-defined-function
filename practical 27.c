#include<stdio.h>

int fibo(int n){
    if(n==1){
        return 1;
        }
        if(n==2){
            return 1;
        }
int f=(fibo(n-1) + fibo(n-2));

//for(int i=0;i<=n;i++)
//printf("Month : %d",f);

return f;
}


int main(){
int n,i;
printf("Enter the no. of month: ");
scanf("%d",&n);

fibo( n);
for(i=1;i<=n;i++){

printf("Month %d: Rs.%d\n",i,fibo(i));
}



return 0;
}
