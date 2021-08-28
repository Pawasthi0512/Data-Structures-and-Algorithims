#include<stdio.h>
#include<stdlib.h>
int isSortedArray (int n, int *arr){
    if(n==1)
        return(1);
    else{
        if(arr[n-1]>arr[n-2])
            isSortedArray(n-1, arr);
        else
            return(0);
    }
}
int main(){
    int n,i;
    int *arr;
    printf("Enter length of array\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for (i=0;i<n;i++)
        scanf("%d",arr+i);
    // for (int j=0; j<n;j++)
    //     printf("%d ",arr[j]);

    i=isSortedArray(n,arr);
    printf("%d",i);
    
    free(arr);
    return 0;
}