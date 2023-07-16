
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int hour,minit,second;
    hour=minit=second=0;
    while(1)
    {
        printf("%2d :%2d :%2d\n",hour,minit,second);
        second++;
        if(second==60)
        {
            minit=minit+1;
            second=0;
        }
        if(minit==60)
        {
            hour=hour+1;
            minit=0;
        }
        if(hour==24)
        {
            hour=0;
            minit=0;
            second=0;
        }
        sleep(1);
    }
    return 0;
}
