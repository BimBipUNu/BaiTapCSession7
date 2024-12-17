/*Khai báo và gán giá trị cho mảng số nguyên có 5 phần tử,
tiến hành thay đổi mảng đã khai báo, nếu là số lẻ thì tăng lên 2 đơn vị, nếu là số chẵn thì tăng lên 3 đơn vị.
In mảng mới sau khi đã thay đổi.*/
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    for(int i = 0; i < 5 ;i++)
    {
        if(a[i] %2 ==0)
        {
            a[i]+=3;
        }else
        {
            a[i]+=2;
        }
    }
    for (int i = 0; i < 5 ;i++)
    {
        printf("%d ",a[i]);
    }
}