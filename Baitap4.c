//Viết chương trình yêu cầu người dùng nhập vào số phần tử của mảng, sau đó nhập từng phần tử có trong mảng.
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
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",a[i]);
    }
}