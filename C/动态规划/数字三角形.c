#include<stdio.h> 
int a[1000][1000]; 
int main() 
{ 
    int i,j; 
    int n; 
    scanf("%d",&n); 
    for(i=1;i<=n;i++) 
    { 
        for(j=1;j<=i;j++) 
        { 
            scanf("%d",&a[i][j]); 
        } 
    } 
    for(i=n-1;i>=1;i--) 
    { 
        for(j=1;j<=i;j++) 
        { 
            if(a[i+1][j]>a[i+1][j+1]) 
                a[i][j]+=a[i+1][j]; 
            else
                a[i][j]+=a[i+1][j+1]; 
        } 
    } 
    printf("%d",a[1][1]); 
    return 0; 
} 
