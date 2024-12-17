//Khai báo và gán giá trị cho mảng số nguyên có 5 phần tử, in ra phần tử lớn nhất và phần tử nhỏ nhất trong mảng đã khai báo.
#include<stdio.h>
int main()
{
    int a[5]={2,3,5,4,1};
    int min = a[0], max = a[0] ;
    for(int i =1 ; i < 5 ;i++)
    {
        if(a[i]> max)
        {
            max = a[i];
        }
        if(a[i]< min)
        {
            min = a[i];
        }
    }
    printf("Max: %d, Min: %d",max, min);
}