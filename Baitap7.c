/*Viết chương trình yêu cầu người dùng nhập vào số phần tử của mảng,
sau đó nhập từng phần tử có trong mảng sao cho tất cả các phần tử được nhập phải là số lẻ, nếu không thì yêu cầu nhập lại phần tử đó.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Nhập số phần tử của mảng: ");scanf("%d",&n);
    int a[n];
    for (int i = 0 ; i < n ; i++)
    {
        printf("Nhập phần tử thứ %d: ",i+1);scanf("%d",&a[i]);
        while (a[i] %2 == 0)
        {
            printf("Nhập lại phần tử thứ %d: ",i+1);scanf("%d",&a[i]);
        }
    }
    for(int i = 0 ;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}