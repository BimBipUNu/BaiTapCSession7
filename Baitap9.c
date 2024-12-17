/*Viết chương trình yêu cầu người dùng nhập vào số hàng và cột của một mảng 2 chiều.
Yêu cầu người dùng nhập từng phần tử trong mảng. Sau khi nhập xong thì in ra các phần tử nằm trên đường biên của ma trận theo mảng.*/
//Dùng kiến thức mảng 2 chiều session8
#include<stdio.h>
int main()
{
    int column,row;//cột, hàng
    printf("Nhập số hàng của ma trận: ");scanf("%d",&row);
    printf("Nhập số cột của ma trận: ");scanf("%d",&column);
    int a[row][column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column ;j++)
        {
            printf("Nhập phần tử ở vị trí (%d;%d): ",j+1,i+1);scanf("%d",&a[i][j]);
        }
    }
    for(int i =0 ; i < row ; i++)
    {
        for(int j =0 ; j < column ; j++)
        {
            if(i == 0 || j ==0 || i==row-1 || j==column-1)
            {
                printf("%d ",a[i][j]);
            }else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}