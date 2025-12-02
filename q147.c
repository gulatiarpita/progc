#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp, empRead;
    FILE *fp;

    
    fp = fopen("employee.bin", "wb");  
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    
    fwrite(&emp, sizeof(struct Employee), 1, fp);

    fclose(fp);
    printf("\nEmployee details stored in binary file.\n");

    
    fp = fopen("employee.bin", "rb"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);
  
    printf("\nData read from file:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n",
           empRead.name,
           empRead.id,
           empRead.salary);

    return 0;
    }
