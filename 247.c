#include <stdio.h>
int main() {
    int sensor;
    printf("1. Temperature\n2. Ultrasonic\n3. IR Sensor\nEnter sensor: ");
    scanf("%d", &sensor);
    switch(sensor) {
        case 1: printf("Temperature Sensor Working.\n"); break;
        case 2: printf("Ultrasonic Sensor Active.\n"); break;
        case 3: printf("IR Sensor Operational.\n"); break;
        default: printf("Invalid Sensor.\n");
    }
    return 0;
}
