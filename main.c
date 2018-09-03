//
//  main.c
//  HeartLab
//
//  Student Name: Melanie Summers;
//  Student id: 012090935;
//  Name of the assignment: Heart Lab;
//  Date: 8/31/18;
//  Name and version of the C Compiler: Xcode v. 9.4.1;
//  Name of Operating System: Mac OS High Sierra v. 10.13.6;
//

#include <stdio.h>
FILE *fp;

int main(void) {
    int humanHeartBeatsPerMinute = 60;
    long minutesInOneYear = 525600;
    int yearsAlive = 50;
    long minutesYouveLived = minutesInOneYear * yearsAlive;
    long totalHeartBeats = minutesYouveLived * humanHeartBeatsPerMinute;
    fp = fopen("csis.txt", "w");
    
    printf("The number of beats your heart has beat if you are 50: %ld\n", totalHeartBeats);
    fprintf(fp, "The number of beats your heart has beat if you are 50: %ld\n", totalHeartBeats);
    
    fclose(fp);
    return 0;
}
