/*Viết chương trình yêu cầu người dùng nhập vào số hàng và cột của một mảng 2 chiều.
Yêu cầu người dùng nhập từng phần tử trong mảng và in mảng ra màn hình theo ma trận.*/
#include<stdio.h>
int main()
{
    int column,row;//cột, hàng
    printf("Nhập số hàng của ma trận: ");scanf("%d",&row);
    printf("Nhập số cột của ma trận: ");scanf("%d",&column);
    int a[row*column];
    int count = 0;
    for(int i = 1; i <= column; i++)
    {
        for(int j = 1; j <= row ;j++)
        {
            printf("Nhập phần tử ở vị trí (%d;%d): ",i,j);scanf("%d",&a[count]);
            count++;
        }
    }
    for(int i = 0; i< row*column ; i++)
    {
        printf("%d ",a[i]);
        if((i+1) % column ==0)
        {
            printf("\n");
        }
    }
}