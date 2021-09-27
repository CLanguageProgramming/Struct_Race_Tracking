#include <string.h>
#include <stdio.h>

struct timer
{
    int hours;
    int mins;
    int sec;
}t[3];
int main()
{
    printf("Enter start time details\n");
    for(int i=1;i<=1;i++)
    {
        printf("Enter hours: ");
        scanf("%d", &t[i].hours);
        printf("Enter Minutes: ");
        scanf("%d", &t[i].mins);
        printf("Enter Seconds: ");
        scanf("%d", &t[i].sec);
        printf("\n");
    }
    
    printf("Enter Stop time details\n");
    for(int i=2;i<=2;i++)
    {
        printf("Enter hours: ");
        scanf("%d", &t[i].hours);
        printf("Enter Minutes: ");
        scanf("%d", &t[i].mins);
        printf("Enter Seconds: ");
        scanf("%d", &t[i].sec);
        printf("\n");
    }
    
    for(int i=3;i<=3;i++)
    {
        t[i].hours = t[i-1].hours-t[i-2].hours;
        t[i].mins = t[i-1].mins-t[i-2].mins;
        t[i].sec = t[i-1].sec-t[i-2].sec;
        
        printf("Duration of Race: %d:%d:%d", t[i].hours, t[i].mins, t[i].sec);
    }
}
