# include<stdio.h>

int main()
{
    int one=20,two=30,three=100,four=40,five=50,six=60;

    int sum1=one+two;
    int sum2=four+five;
    printf("sum1:%d\n",sum1);
    printf("sum2:%d\n",sum2);

    if(sum1>three && sum2>six)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

return 0;
}