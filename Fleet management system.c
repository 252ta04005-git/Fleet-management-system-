#include <stdio.h>

struct Transport {
    int vehicleNo;
    char driverName[50];
    char route[50];
    int distance;
};

int main() {
    struct Transport t[10];
    int n, i;

    printf("Enter number of vehicles: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for Vehicle %d\n", i + 1);

        printf("Vehicle Number: ");
        scanf("%d", &t[i].vehicleNo);

        printf("Driver Name: ");
        scanf("%s", t[i].driverName);

        printf("Route: ");
        scanf("%s", t[i].route);

        printf("Distance (km): ");
        scanf("%d", &t[i].distance);
    }

    printf("\n------ Transportation Details ------\n");

    for(i = 0; i < n; i++) {
        printf("\nVehicle %d\n", i + 1);
        printf("Vehicle Number : %d\n", t[i].vehicleNo);
        printf("Driver Name    : %s\n", t[i].driverName);
        printf("Route          : %s\n", t[i].route);
        printf("Distance       : %d km\n", t[i].distance);
    }

    return 0;
}
