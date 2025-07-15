//read from emp.xls
#include<stdio.h>

struct Employee {
    char name[50];
    int age;
    int salary;
}detail[100];

int main(){
    int count = 0;

    FILE *fp = fopen("emp.xls", "r");

    while(1){
        if(feof(fp)==0){
            fscanf(fp, "%s\t", detail[count].name);
            fscanf(fp, "%d\t", &detail[count].age);
            fscanf(fp, "%d\n", &detail[count].salary);
            count++;
        } else {
            break;
        }
    }
    
    for(int i = 0; i < count; i++) {
        fprintf(fp, "Name: %s\t", detail[i].name);
        fprintf(fp, " Age: %d\t", detail[i].age);
        fprintf(fp, " Salary: %d\n", detail[i].salary);
    }

    fclose(fp);

    return 0;
}