#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void errorr(char *message){
    printf("Try again . Error > %s \n\n",message);
}



int main(void)
{
    srand(time(NULL));

    printf("Welcome to brute force lab program.\n\n");

    while (1){
        int order;
        while (1){
            printf("1- Brute Force without creating password\n2- Brute Force with creating password\n3- Create passwords\n4- Exit\n\n   >>> ");
            scanf("%d",&order);
            if (order==1 || order==2 || order==3 || order==4)
                break;
            errorr("wrong input");
        }

        if (order==1){
            printf("You must store your passwords in passwords.txt\n");


            int target;
            printf("Enter target password  >> ");
            scanf("%d",&target);


            FILE *file=fopen("passwords.txt","r");
            if (file==NULL){
                errorr("file doesn't exist");
                continue;
            }


            int number,isFind=0,counter=1;
            while (fscanf(file,"%d",&number)!=EOF){
                if (number==target){
                    isFind=1;
                    break;
                }

                else{
                    counter++;
                    printf("%d. try X and itsn't %d\n",counter,number);
                }
            }

            fclose(file);


            if (isFind==1){
                printf("Your password is found in %d. line and it is > %d \n\n",counter,target);
            }

            else
                printf("Your password isn't found in %d try\n\n",counter);

            
            char isExit;
            printf("Are you want to try again (y/n)  >> ");
            scanf(" %c",&isExit);

            if (isExit=='n')
                break;

        }
    

        else if (order==2){
            int target;
            while (1){
                printf("Enter target password (it must be 6 digits)  >> ");
                scanf("%d",&target);
                if (target<1000000 && target>99999)
                    break;
                errorr("wrong input");
            }


            int number;
            while (1){
                printf("How many number will create  >> ");
                scanf("%d",&number);
                if (number>0)
                    break;
                errorr("number must be > 0");
            }


            int *passwords=malloc(number * sizeof(int));

            int password;
            for (int i=0 ; i<number ; i++){
                password = (rand() % 9) + 1; 
                for(int j = 0; j < 5; j++) { 
                    password = password * 10 + (rand() % 10);
                }

                passwords[i]=password;
            }


            int isFind=0;
            for(int i=0 ; i<number ; i++){
                if (passwords[i]==target){
                    printf("Your password found at %d. try and it is > %d\n\n",i+1,target);
                    isFind=1;
                    break;
                }

                else{
                    printf("%d. try X , its not %d\n",i+1,passwords[i]);
                }
            }

            free(passwords);


            if (isFind==0){
                printf("Program couldn't find your password.\n\n");
            }


            char isExit;
            printf("Are you want to try again (y/n)  >> ");
            scanf(" %c",&isExit);

            if (isExit=='n')
                break;


        }


        else if (order==3){
            int number;
            while (1){
                printf("How many number are you want  >> ");
                scanf("%d",&number);
                if (number>0)
                    break;
                errorr("number must be > 0");
            }

            FILE *file=fopen("passwords.txt","w");
            if (file==NULL){
                errorr("file cant open");
                continue;
            }

            int password;
            for (int i=0 ; i<number ; i++){
                password = (rand() % 9) + 1; 
                for(int j = 0; j < 5; j++) { 
                    password = password * 10 + (rand() % 10);
                }

                fprintf(file,"%d\n",password);
                printf("Created Password , Line > %d , Password > %d \n",i+1,password);
            }

            fclose(file);

            char isExit;
            printf("Are you want to try again (y/n)  >> ");
            scanf(" %c",&isExit);

            if (isExit=='n')
                break;


        }

        else if (order==4){
            printf("exiting ...");
            break;
        }

        else{
            errorr("wrong input,exiting ...");
            break;
        }
    }

    return 0;
}