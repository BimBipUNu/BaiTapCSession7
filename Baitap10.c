/*Viết chương trình yêu cầu người dùng nhập vào số phần tử của mảng và từng phần tử có trong mảng.
Tiến hành in ra tất cả các phần tử trong mảng là số nguyên tố.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Nhập số phần từ của mảng: ");scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        printf("Nhập phần tử thứ %d: ",i+1);scanf("%d",&a[i]);
    }
    int count = 0;
    printf("Các phần tử trong mảng là số nguyên tố là: ");
    for(int i = 0 ; i < n ; i++)
    {
        for(int j =2 ; j*j <= a[i]; j++)
        {
            if(a[i] %j == 0)
            {
                count++;
            }
        }
        if(count==0)
        {
            if(a[i] != 1)
            {
                printf("%d ",a[i]);
            }
        }
        count=0;
    }
}