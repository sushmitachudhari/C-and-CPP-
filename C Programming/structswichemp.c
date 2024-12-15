#include<stdio.h>
#include<string.h> // Include string.h for strcmp()

struct emp{
    int id;
    char email[10];
    char name[10];
    char contact[10];
    int sal;
};

int main() {
    struct emp e[15], temp;
    char ch, sname[10];
    int choice, i, index, sid, count = 0, j, c = 0, size, max;

    do {
        printf("\n=====================================\n********MENU********\n=====================================");
        printf("\n1.Add Employee\n2.Display Employee\n3.Search Employee by ID\n4.Update Employee Details by name");
        printf("\n5.Delete Employee Details by name\n6.Display List with count of Employee\n7.Display list of Employee by ascending salary");
        printf("\n8.Display Employee Details Whose Salary is Highest salary\n9.Display the details of employee whose salary is between 10000 and 60000\n10.Exit");
        printf("\n=====================================");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter id, name, email, contact, sal for 5 records");
                for(i = count; i < count + 5; i++) {
                    scanf("%d%s%s%s%d", &e[i].id, e[i].name, e[i].email, e[i].contact, &e[i].sal);
                }
                count += 5;
                break;

            case 2:
                printf("\nRecords are:\n");
                for(i = 0; i < count; i++) {
                    printf("\n%d\t%s\t\t%s\t%s\t%d", e[i].id, e[i].name, e[i].email, e[i].contact, e[i].sal);
                }
                break;

            case 3:
                printf("\nEnter Id to Search: ");
                scanf("%d", &sid);
                for(i = 0; i < count; i++) {
                    if(e[i].id == sid) {
                        printf("\n%d\t%s\t\t%s\t%s\t%d", e[i].id, e[i].name, e[i].email, e[i].contact, e[i].sal);
                    }
                }
                break;

            case 4:
                printf("\nEnter Employee name to search: ");
                scanf("%s", sname);
                for(i = 0; i < count; i++) {
                    if(strcmp(e[i].name, sname) == 0) {
                        printf("\nEnter Details of Employee to change: ");
                        scanf("%d%s%s%s%d", &e[i].id, e[i].name, e[i].email, e[i].contact, &e[i].sal);
                    }
                }
                break;

            case 5:
                printf("\nEnter Employee Name To delete Employee: ");
                scanf("%s", sname);
                c = 0;
                for(i = 0; i < count; i++) {
                    if(strcmp(e[i].name, sname) == 0) {
                        c++;
                        for(j = i; j < count - 1; j++) {
                            e[j] = e[j + 1];
                        }
                        count--;
                        i--;
                    }
                }
                if(c > 0) {
                    printf("\n%d Record(s) deleted", c);
                } else {
                    printf("\nRecord Not found");
                }
                break;

            case 6:
                printf("\nEmployees are:\n");
                for(i = 0; i < count; i++) {
                    printf("\n%d\t%s\t\t%s\t%s\t%d", e[i].id, e[i].name, e[i].email, e[i].contact, e[i].sal);
                }
                printf("\nCount of employees: %d", count);
                break;

            case 7:
                // Display employees by ascending salary
                for(i = 0; i < count - 1; i++) {
                    for(j = i + 1; j < count; j++) {
                        if(e[i].sal > e[j].sal) {
                            temp = e[i];
                            e[i] = e[j];
                            e[j] = temp;
                        }
                    }
                }
                printf("\nEmployees sorted by ascending salary:\n");
                for(i = 0; i < count; i++) {
                    printf("\n%d\t%s\t\t%s\t%s\t%d", e[i].id, e[i].name, e[i].email, e[i].contact, e[i].sal);
                }
                break;

            case 8:
                // Find employee with highest salary
                max = e[0].sal;
                index = 0;
                for(i = 1; i < count; i++) {
                    if(e[i].sal > max) {
                        max = e[i].sal;
                        index = i;
                    }
                }
                printf("\nEmployee with highest salary:\n");
                printf("%d\t%s\t\t%s\t%s\t%d", e[index].id, e[index].name, e[index].email, e[index].contact, e[index].sal);
                break;

            case 9:
                printf("\nEmployees with salary between 10000 and 60000:\n");
                for(i = 0; i < count; i++) {
                    if(e[i].sal >= 10000 && e[i].sal <= 60000) {
                        printf("\n%d\t%s\t\t%s\t%s\t%d", e[i].id, e[i].name, e[i].email, e[i].contact, e[i].sal);
                    }
                }
                break;

            case 10:
                break;

            default:
                printf("\nYou have entered a wrong choice");
        }

        printf("\nDo you want to continue (Y/N)? ");
        scanf(" %c", &ch); // Note: Space before %c to consume the newline character
    } while(ch == 'y' || ch == 'Y');

    return 0;
}

