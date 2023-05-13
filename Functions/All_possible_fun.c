#include <stdio.h>

int num_of_stu, choice;
int marks_of_stu[100];

void readData()
{
    FILE *fp = fopen("stu_data.txt", "r");

    if (fp == 0)
    {
        printf("File not found\n");
        return;
    }

    fscanf(fp, "%d", &num_of_stu);

    for (int i = 1; i <= num_of_stu; i++)
        fscanf(fp, "%d", &marks_of_stu[i]);

    fclose(fp);
}

void writeData()
{
    FILE *fp = fopen("stu_data.txt", "w");

    fprintf(fp, "%d\n", num_of_stu);
    for (int i = 1; i <= num_of_stu; i++)
        fprintf(fp, "%d\n", marks_of_stu[i]);

    fclose(fp);
}

void show()
{
    readData();
    printf("\n\nALL DATA:\n");

    for (int i = 1; i <= num_of_stu; i++)
        printf("%d : %d\n", i, marks_of_stu[i]);
}

void update(int roll, int mark)
{
    readData();

    marks_of_stu[roll] = mark;

    writeData();
}

void Delet(int roll)
{
    readData();

    FILE *fp = fopen("stu_data.txt", "w");

    for (int i = roll; i <= num_of_stu; i++)
    {
        marks_of_stu[i] = marks_of_stu[i + 1];
    }

    num_of_stu = num_of_stu - 1;

    writeData();
    printf("Deleted Successfully");

    // fprintf(fp, "%d\n", num_of_stu - 1);
    // for (int i = 1; i <= num_of_stu; i++)
    // {
    //     if (i != roll)
    //         fprintf(fp, "%d\n", marks_of_stu[i]);
    // }
    // fclose(fp);
}

void insert(int mark)
{
    readData();

    num_of_stu++;

    marks_of_stu[num_of_stu] = mark;

    // // for (int i = 1; i <= num_of_stu; i++)
    // //     fprintf(fp, "%d", marks_of_stu[i]);

    // fclose(fp);
    writeData();
}

int swap(int num1, int num2)
{
    readData();
    int temp = marks_of_stu[num1];
    marks_of_stu[num1] = marks_of_stu[num2];
    marks_of_stu[num2] = temp;

    writeData();
}

void findByRoll(int roll)
{
    readData();

    for (int i = 1; i <= num_of_stu; i++)
    {
        if (i == roll)
            printf("Found student marks: %d\n", marks_of_stu[i]);
    }
}

void sort(int quarry)
{
    readData();

    if (quarry == 1)
    {
        for (int i = 1; i <= num_of_stu; i++)
            for (int j = 1; j <= num_of_stu; j++)
            {
                if (marks_of_stu[i] > marks_of_stu[j])
                {
                    int temp = marks_of_stu[i];
                    marks_of_stu[i] = marks_of_stu[j];
                    marks_of_stu[j] = temp;
                }
            }
    }

    if (quarry == 2)
    {
        for (int i = 1; i <= num_of_stu; i++)
            for (int j = 1; j <= num_of_stu; j++)
            {
                if (marks_of_stu[i] < marks_of_stu[j])
                {
                    int temp = marks_of_stu[i];
                    marks_of_stu[i] = marks_of_stu[j];
                    marks_of_stu[j] = temp;
                }
            }
    }
    writeData();
}

int menu()
{
    int x;
    printf("-------Menu---------\n");
    printf("1. Show all data\n");
    printf("2. Update\n");
    printf("3. Delet by roll\n");
    printf("4. Insert data\n");
    printf("5. Swap data\n");
    printf("6. Find by roll\n");
    printf("7. Sort by roll\n");
    printf("8. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &x);
    return x;
}

int main()
{
    int roll, mark;

    do
    {
        choice = menu();
        if (choice >= 1 && choice <= 8)
        {
            if (choice == 1)
                show();

            else if (choice == 2)
            {
                printf("Enter roll and marks: ");
                scanf("%d%d", &roll, &mark);
                update(roll, mark);
            }

            else if (choice == 3)
            {
                printf("Enter roll: ");
                scanf("%d", &roll);
                Delet(roll);
            }

            else if (choice == 4)
            {
                printf("Enter  marks: ");
                scanf("%d", &mark);
                insert(mark);
            }

            else if (choice == 5)
            {
                int roll1, roll2;
                printf("Enter roll1 and roll2: ");
                scanf("%d %d", &roll1, &roll2);
                swap(roll1, roll2);
            }

            else if (choice == 6)
            {
                printf("Enter roll to find: ");
                scanf("%d", &roll);

                findByRoll(roll);
            }

            else if (choice == 7)
            {
                int quarry;
                printf("What do you want?\n1. Sort Large to Small.\n");
                printf("2. Sort Small to Large.\n");

                scanf("%d", &quarry);
                sort(quarry);
            }

            printf("\n\n");
        }

        else
            printf("\n\nWrong Command!!\n\n");
    } while (choice != 8);

    return 0;
}