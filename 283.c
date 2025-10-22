#include <stdio.h>
int main() {
    int task;
    printf("1. In Progress\n2. Completed\n3. Failed\nEnter status: ");
    scanf("%d", &task);
    switch(task) {
        case 1: printf("Task running.\n"); break;
        case 2: printf("Task completed successfully.\n"); break;
        case 3: printf("Task failed, retrying.\n"); break;
        default: printf("Invalid Status.\n");
    }
    return 0;
}
