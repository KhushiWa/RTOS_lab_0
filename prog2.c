#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}

int main()
{
    int times = 0;
    int msec;

    printf("\nPlease enter your delay(millisec): ");
    scanf("%d", &msec);
    while (!kbhit())
    {
        printf("\nDelay Time - %d", msec);
        printf("\nRandom Number - %d", rand());
        delay(msec);
        times++;
    }
    main();
    return 0;
}

