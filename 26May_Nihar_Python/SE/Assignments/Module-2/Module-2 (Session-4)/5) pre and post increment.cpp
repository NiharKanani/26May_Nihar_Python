/*5) Write a code snippet that demonstrates the difference between pre-increment (++count) and post-increment 
(count++) by logging the values before and after using both on a followerCount variable.*/
#include<stdio.h>
main()
{
    int folcnt, oricnt;
    printf("Enter no. of followers:- ");
    scanf("%d", &folcnt);
    oricnt = folcnt;
    printf("Initial Follower Count : %d\n", folcnt);
    printf("\nUsing Pre-Increment (++followerCount)");
    printf("\nValue : %d", ++folcnt);
    printf("\nFollower Count after Pre-Increment : %d\n", folcnt);
    folcnt = oricnt;
    printf("\nUsing Post-Increment (followerCount++)");
    printf("\nValue : %d", folcnt++);
    printf("\nFollower Count after Post-Increment : %d\n", folcnt);
}
