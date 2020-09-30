#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char name[50];
    int id;
    char dept[20];
    double cgpa;
} student;

int main()
{
    student info[2];
    char buff[1024];
    FILE *fp;
    fp = fopen("input.csv", "r");
    if(fp != NULL){
        
        printf("File has been opened\n\n");
        
        for (int i = 0; i < 2;i++){
            char *token;
            int count = 0;
            fgets(buff, 1024, fp);
            token = strtok(buff, ",");

            while(token != NULL){
                if(count == 0){
                    strcpy(info[i].name,token);
                }
                else if(count == 1){
                    info[i].id = atof(token);
                }
                else if(count == 2){
                    strcpy(info[i].dept, token);
                }
                else{
                    info[i].cgpa = atof(token);
                }
                token = strtok(NULL, ",");

                count++;
            }
        }
    }
    
    else{
        printf("File not found");
        return 0;
    }

    for (int j = 0; j < 2; j++){
        printf("Name : %s\n", info[j].name);
        printf("ID : %d\n", info[j].id);
        printf("Department : %s\n", info[j].dept);
        printf("CGPA : %.2f\n\n", info[j].cgpa);
    }
    fclose(fp);
    return 0;
}