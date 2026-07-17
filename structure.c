#include<stdio.h>

struct employee {
    int id;
    char name[50];
    float basic, da, ta, allowance, deduction;
    float gross, net;
    char month[20];
    int year;
};

int main() {

    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct employee e[n];

    for(int i = 0; i < n; i++) {

        printf("\nEnter details of employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Employee Name: ");
        scanf("%s", e[i].name);

        printf("Basic Salary: ");
        scanf("%f", &e[i].basic);

        printf("DA: ");
        scanf("%f", &e[i].da);

        printf("TA: ");
        scanf("%f", &e[i].ta);

        printf("Other Allowance: ");
        scanf("%f", &e[i].allowance);

        printf("Deduction: ");
        scanf("%f", &e[i].deduction);

        printf("Month: ");
        scanf("%s", e[i].month);

        printf("Year: ");
        scanf("%d", &e[i].year);

        e[i].gross = e[i].basic + e[i].da + e[i].ta + e[i].allowance;

        e[i].net = e[i].gross - e[i].deduction;
    }

    printf("\nEmployees having net salary greater than 50000\n");

    for(int i = 0; i < n; i++) {

        if(e[i].net > 50000) {

            printf("\nEmployee Name : %s", e[i].name);
            printf("\nEmployee ID   : %d", e[i].id);
            printf("\nMonth/Year    : %s/%d", e[i].month, e[i].year);
            printf("\nGross Salary  : %.2f", e[i].gross);
            printf("\nNet Salary    : %.2f\n", e[i].net);
        }
    }

    return 0;
}