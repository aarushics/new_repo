#include <stdio.h>

int main()
{
    int h, m;
    float dep_time[7]={8.00,9.43,11.19,12.47,17.45,19.00,21.45},ar_time[7]={10.16,11.52,13.32,15.00,16.08,21.20,23.58};
    printf("enter a 24-hours time(HH:MM):");
    scanf("%d:%d", &h, &m);
    if (h < 21)
    {
        if (h < 19 | h == 19 && m < 45)
        {
            if (h < 15 | h == 15 && m < 45)
            {
                if (h < 14)
                {
                    if (h < 12)
                    {
                        if (h < 11 | h == 11 && m < 19)
                        {
                            if (h < 9 | h == 9 && m < 43)
                            {
                                if (h < 8)
                                    printf("Closest Departure time : %4f\n",dep_time[0]);
                                else
                                    printf("Closest Departure time : %4f\n",dep_time[1]);
                            }
                            else
                                printf("Closest Departure time : %4f\n",dep_time[2]);

                            printf("Closest Arrival time : %4f\n",ar_time[0]);
                        }
                        else
                        {
                            printf("Closest Departure time : %4f\n",dep_time[3]);
                            if (m < 52)
                                printf("Closest Arrival time : %.2f\n",ar_time[1]);
                            else
                                printf("Closest Arrival time : %.2f\n",ar_time[2]);
                        }
                    }
                    else
                    {
                        printf("Closest Departure time : %.2f\n",dep_time[4]);
                        printf("Closest Arrival time : %.2f\n",ar_time[2]);
                    }
                }
                else
                    printf("Closest Departure time : %.2f\nClosest Arrival time : %.2f\n",dep_time[4],ar_time[3]);
            }
            else
            {
                printf("Closest Departure time : %.2f\n",dep_time[5]);
                
                if (h < 17 | h == 17 && m < 55)
                    printf("Closest Arrival time : %.2f\n",ar_time[4]);
                else
                    printf("Closest Arrival time : %.2f\n",ar_time[5]);
            }
        }
        else
        {
            printf("Closest Departure time : %.2f\n",dep_time[6]);
            printf("Closest Arrival time : 9%.2f\n",ar_time[5]);
        }
    }
    else
    {
        printf("Closest Departure time : %.2f\n",dep_time[6]);
        if (h < 21 | h == 21 && m < 20)
            printf("Closest Arrival time : %.2f\n",ar_time[5]);
        else
            printf("Closest Arrival time : %.2f\n",ar_time[6]);
    }
}