#include <stdio.h>


struct Time {
    int hours;
    int minutes;
    int seconds;
};


void calculateTimeDifference(struct Time t1, struct Time t2, struct Time* diff) {
    int seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int difference = seconds2 - seconds1;

    diff->hours = difference / 3600;
    difference %= 3600;
    diff->minutes = difference / 60;
    diff->seconds = difference % 60;
}

int main() {
    struct Time startTime, endTime, diff;

    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    calculateTimeDifference(startTime, endTime, &diff);

    printf("\nTime Difference: %d hours, %d minutes, %d seconds\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
