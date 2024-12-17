//Khai báo và gán giá trị cho một mảng bất kỳ, tiến hành in ra từng phần tử trong mảng và độ dài của mảng.
#include<stdio.h>
int main()
{
    int a[6]={2,4,6,8,10,12};
    int length =6;
    for(int i=0 ; i < length ; i++)
    {
        printf("%d\n",a[i]);
    }
}