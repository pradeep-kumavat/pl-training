#include <stdio.h>

struct Employee {
    char name[50];
    int age;
    int salary;
}detail[100];

int main() {
    int count = 0;

    FILE *fp = fopen("emp.xls", "a");

    int ch;
    do{
        printf("Enter 1 to add the details\n");
        printf("Enter 0 to exit\n");
        scanf("%d", &ch);

        if(ch==1){
            if(count < 100) {
                printf("Enter name: ");
                scanf("%s", detail[count].name);
                printf("Enter age: ");
                scanf("%d", &detail[count].age);
                printf("Enter salary: ");
                scanf("%d", &detail[count].salary);
                count++;
            }
        }
        else if(ch==0){
            break;
        }
        else{
            printf("Invalid choice\n");
        }

    }while(1);

    for(int i = 0; i < count; i++) {
        fprintf(fp, "Name: %s\t", detail[i].name);
        fprintf(fp, " Age: %d\t", detail[i].age);
        fprintf(fp, " Salary: %d\n", detail[i].salary);
    }

    fclose(fp);

    




    return 0;
    
}