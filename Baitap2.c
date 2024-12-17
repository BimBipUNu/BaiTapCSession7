/*Khai báo mảng số nguyên có 5 phần tử, yêu cầu người dùng nhập lần lượt từng phần tử trong mảng,
sau khi nhập xong thì in mảng ra màn hình*/
#include<stdio.h>
int main()
{
    int a[5];
    for(int i =0 ; i < 5 ; i++)
    {
        printf("Nhập phần tử thứ %d: ",i+1);scanf("%d",&a[i]);
    }
    for(int i =0 ; i < 5 ; i++)
    {
        printf("%d ",a[i]);
    }
}