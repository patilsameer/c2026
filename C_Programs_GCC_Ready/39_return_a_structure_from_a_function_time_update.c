/* Return a structure from a function: update time by one second (printed page 111). */
#include <stdio.h>

struct time_value {
    int min;
    int hr;
    int sec;
};

static struct time_value time_update(struct time_value now);

int main(void)
{
    struct time_value original;

    printf("Enter time (hh:mm:ss): ");
    if (scanf("%d:%d:%d", &original.hr, &original.min, &original.sec) != 3 ||
        original.hr < 0 || original.hr > 23 ||
        original.min < 0 || original.min > 59 ||
        original.sec < 0 || original.sec > 59) {
        fprintf(stderr, "Invalid time.\n");
        return 1;
    }

    struct time_value next = time_update(original);
    printf("Updated time is: %02d:%02d:%02d\n", next.hr, next.min, next.sec);
    return 0;
}

static struct time_value time_update(struct time_value now)
{
    ++now.sec;
    if (now.sec == 60) {
        now.sec = 0;
        ++now.min;
        if (now.min == 60) {
            now.min = 0;
            ++now.hr;
            if (now.hr == 24) {
                now.hr = 0;
            }
        }
    }
    return now;
}
