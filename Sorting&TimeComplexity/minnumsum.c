#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1};
    int brr[5];
    int temp;
    int sum,m=0,m1=0;
    for(int i=0;i<5;i++){
        int min=arr[i];
        int idx=i;
        for(int j=i+1;j<5;j++){
            if(min>arr[j]){
            min=arr[j];
            idx=j;
            }
        }
                temp=arr[idx];
                arr[idx]=arr[i];
                arr[i]=temp;
                brr[i]=arr[i];
            m=(m*10)+brr[i];
            }
            int temp1;
            temp1=brr[4];
                    brr[4]=brr[3];
                    brr[3]=temp1;
                for(int i=0;i<5;i++){
                    m1=(m1*10)+brr[i];
                }
                printf("%d\n",m);
                  printf("%d\n",m1);
    sum=m+m1;
    printf("%d",sum);
    return 0;
}