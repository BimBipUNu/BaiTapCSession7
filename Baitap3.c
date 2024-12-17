/*Khai báo và gán giá trị cho mảng số nguyên có 5 phần tử,
in ra tất cả các phần tử là số chẵn trong mảng, nếu không có thì in ra mảng không chứa số chẵn.*/
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int count =0;
    for(int i=0 ; i < 5 ; i++)
    {
        if(a[i] %2 == 00)
        {
            count++;
            printf("%d ",a[i]);
        }
    }
    if(count == 0)
    {
        printf("Không có số chẵn trong mảng");
    }
}