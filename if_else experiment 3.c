#include<stdio.h>

void main()
{

int threshold = 80 ,critical_temp = 100, temp;
printf("enter your body temp:",temp);
scanf("%d", &temp);

if(temp <= threshold)

{
    printf("patient status:normal");
}
else if (temp > threshold && temp <= critical_temp)
{
    printf("patient status:warning");
}
else
{
        printf("patient status:critical");
}


}