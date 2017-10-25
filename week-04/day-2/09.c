#include <stdio.h>
#include <time.h>

void time_diff(struct tm t1, struct tm t2, struct tm *diff);

struct tm start(time_t raw_tm);
struct tm stop(time_t raw_tm);

//TODO: write a stopwatch program. If you hit enter start the stopwatch, if you hit enter again stop the watch. If you hit escape, the program should exit.
//use the time.h header: https://www.tutorialspoint.com/c_standard_library/c_function_localtime.htm
//it's enough if you can measure the elapsed seconds, and minutes



int main()
{
    struct tm start, stop, diff;
	time_t rawtime;
    char c;

    do {
        c = getchar();
        time( &rawtime );

        start = *localtime( &rawtime );
        printf("Start: %d:%d", start.tm_min,start.tm_sec);

        c = getchar();
        time( &rawtime );

        stop = *localtime( &rawtime );
        time_diff(start, stop, &diff);
        printf("End: %d:%d\n", stop.tm_min, stop.tm_sec);
        printf("Time difference: %d:%d\n", diff.tm_min, diff.tm_sec);


	} while(c != 27);

    return 0;
}

void time_diff(struct tm t1, struct tm t2, struct tm *diff)
{
    diff->tm_sec = t2.tm_sec - t1.tm_sec;
    diff->tm_min = t2.tm_min - t1.tm_min;

    if (diff->tm_sec < 0){
        diff->tm_min -= 1;
        diff->tm_sec += 60;
    }
}
