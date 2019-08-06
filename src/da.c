#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
int n_of_containers;
    FILE *fptr, *tpr;
    char filename[15] = "f.odt";
    char ch, temp, dname,chh;
    char temp1[20][6];
    char ram_val1[20][6];
    int i = 0;
    int k = 0;
    float f;
    int c = 0, count = 0;
    char container_name_file[15] = "dname.odt";
    char arr1[6], arr2[6], arr3[6], arr4[6], arr5[6];
    FILE *dptr, *dptr_temp;
    char cmdbeg[] = "sudo timeout 4 docker stats ";
    char *c1[20];
    char str4[5];
    size_t len = 0;
    char tempar[100];
    char cmdend[] = " --format '{{.Name}}: {{.MemUsage}}'>f.odt";
    char ports[5][5]={"7001","7002","7003","7004","7005"};
    char new_ports[5][5]={"7006","7007","7008","7009","7010"};
    char cnames[5][5]={"c1","c2","c3","c4","c5"};
  


int ClientAccess(char *cname) //returns 1 if Client has closed the website on given container
{
FILE *fp,*outputfile;
  char var[40],word[10],command[70];
  char *a=cname;
  int len;
  len = snprintf(command,sizeof(command),"docker ps -qf \"name=%s\"",a);
  int flag=0;
  fp = popen(command, "r");
  fscanf(fp,"%s",var);
  pclose(fp);
  strcat(var,".txt");
  char filename[]="/var/www/html/website/";
  strcat(filename,var);
  outputfile=fopen(filename,"r");
 if (outputfile!=NULL){
 while(fscanf(outputfile,"%s",word)!= EOF)
	{
		if(strcmp(word,"1")==0)
		//printf("FOUND");
		flag=1;
	}
 fclose(outputfile);

  return flag;
        }
else 
return 0;
}


void ramUsage(){

printf("Reading Ram Usage  of Live Containers........... \n");
   //   printf("..");
       

    if (c == 0&&count>=1)
    {
        // printf("%d",k);
        fgets(arr1, 100, dptr);
        c1[c] = arr1;
        // printf("%s", c1[c]);
        // printf("%s \n", arr);
        len = strlen(arr1) - 1;
        if (arr1[len] == '\n')
            arr1[len] = '\0';
        strcpy(tempar, cmdbeg);
        strcat(tempar, arr1);
        strcat(tempar, cmdend);
        // printf("%s",cmdbeg);
        // printf("%s \n", tempar);

        system(">f.odt");

        system(tempar);

        fptr = fopen(filename, "r");
        tpr = fopen(filename, "r");
        ch = fgetc(fptr);
        temp = fgetc(tpr);
        temp = fgetc(tpr);
//   printf("..");
        while (ch != EOF)
        {
            // printf("%c %c \n",ch,temp);

            if (ch == ':')
            {
                // printf("here1");
                while (temp != 'M')
                {
                    temp1[k][i] = temp;
                    ch = fgetc(fptr);
                    temp = fgetc(tpr);
                    i++;
                }

                while (i < 5)
                {
                    temp1[k][i] = '\0';
                    i++;
                }
                i = 0;
                k = 1;
            }
            temp = fgetc(tpr);
            ch = fgetc(fptr);
        }
        c++;
        fclose(fptr);
        fclose(tpr);
        //   printf("..");
    }

    if (c == 1&&count>=2)
    {
        strcpy(tempar, "");
        fgets(arr2, 100, dptr);
        c1[c] = arr2;
        // printf("%s", c1[c]);

        // printf("%s \n", arr);
        len = strlen(arr2) - 1;
        if (arr2[len] == '\n')
            arr2[len] = '\0';
        strcpy(tempar, cmdbeg);
        strcat(tempar, arr2);
        strcat(tempar, cmdend);
        // printf("%s",cmdbeg);
        // printf("%s \n", tempar);

        system(">f.odt");

        system(tempar);

        fptr = fopen(filename, "r");
        tpr = fopen(filename, "r");
        ch = fgetc(fptr);
        temp = fgetc(tpr);
        temp = fgetc(tpr);
        // printf("%d",k);
        //   printf("..");
        while (ch != EOF)
        {
            // printf("%c %c \n",ch,temp);

            if (ch == ':')
            {
                // printf("here2 \n");

                while (temp != 'M')
                {
                    temp1[k][i] = temp;
                    ch = fgetc(fptr);
                    temp = fgetc(tpr);
                    i++;
                }

                while (i < 5)
                {
                    temp1[k][i] = '\0';
                    i++;
                }
                i = 0;

                k = 2;
            }
            temp = fgetc(tpr);
            ch = fgetc(fptr);
        }
        c++;
        fclose(fptr);
        fclose(tpr);
        //   printf("..");
    }

    if (c == 2&&count>=3)
    {
        // printf("%d",k);

        strcpy(tempar, "");

        fgets(arr3, 100, dptr);
        c1[c] = arr3;
        // printf("%s\n", c1[c]);
        // printf("%s\n", c1[0]);
        // printf("%s\n", c1[1]);

        // printf("%s \n", arr);

        len = strlen(arr3) - 1;
        if (arr3[len] == '\n')
            arr3[len] = '\0';
        strcpy(tempar, cmdbeg);
        strcat(tempar, arr3);
        strcat(tempar, cmdend);
        // printf("%s",cmdbeg);
        // printf("%s \n", tempar);

        system(">f.odt");

        system(tempar);

        fptr = fopen(filename, "r");
        tpr = fopen(filename, "r");
        ch = fgetc(fptr);
        temp = fgetc(tpr);
        temp = fgetc(tpr);
//   printf("..");
        while (ch != EOF)
        {
            // printf("%c %c \n",ch,temp);

            if (ch == ':')
            {
                // printf("here3 \n");

                while (temp != 'M')
                {
                    temp1[k][i] = temp;
                    ch = fgetc(fptr);
                    temp = fgetc(tpr);
                    i++;
                }

                while (i < 5)
                {
                    temp1[k][i] = '\0';
                    i++;
                }
                i = 0;
                k = 3;
            }
            temp = fgetc(tpr);
            ch = fgetc(fptr);
        }
        c++;
        fclose(fptr);
        fclose(tpr);
        //   printf("..");
    }

    if (c == 3&&count>=4)
    {//   printf("..");
        // printf("%d",k);

        strcpy(tempar, "");

        fgets(arr4, 100, dptr);
        c1[c] = arr4;
        // printf("%s\n", c1[c]);
        // printf("%s\n", c1[0]);
        // printf("%s\n", c1[1]);

        // printf("%s \n", arr);

        len = strlen(arr4) - 1;
        if (arr4[len] == '\n')
            arr4[len] = '\0';
        strcpy(tempar, cmdbeg);
        strcat(tempar, arr4);
        strcat(tempar, cmdend);
        // printf("%s",cmdbeg);
        // printf("%s \n", tempar);

        system(">f.odt");

        system(tempar);

        fptr = fopen(filename, "r");
        tpr = fopen(filename, "r");
        ch = fgetc(fptr);
        temp = fgetc(tpr);
        temp = fgetc(tpr);

        while (ch != EOF)
        {
            // printf("%c %c \n",ch,temp);

            if (ch == ':')
            {
                // printf("here3 \n");

                while (temp != 'M')
                {
                    temp1[k][i] = temp;
                    ch = fgetc(fptr);
                    temp = fgetc(tpr);
                    i++;
                }

                while (i < 5)
                {
                    temp1[k][i] = '\0';
                    i++;
                }
                i = 0;
                k = 4;
            }
            temp = fgetc(tpr);
            ch = fgetc(fptr);
        }
        c++;
        fclose(fptr);
        fclose(tpr);
        //   printf("..");
    }
    if (c == 4&&count>=5)
    {
        // printf("%d",k);
//   printf("..");
        strcpy(tempar, "");

        fgets(arr5, 100, dptr);
        c1[c] = arr5;
        // printf("%s\n", c1[c]);

        // printf("%s \n", arr);

        len = strlen(arr5) - 1;
        if (arr5[len] == '\n')
            arr5[len] = '\0';
        strcpy(tempar, cmdbeg);
        strcat(tempar, arr5);
        strcat(tempar, cmdend);
        // printf("%s",cmdbeg);
        // printf("%s \n", tempar);

        system(">f.odt");

        system(tempar);

        fptr = fopen(filename, "r");
        tpr = fopen(filename, "r");
        ch = fgetc(fptr);
        temp = fgetc(tpr);
        temp = fgetc(tpr);

        while (ch != EOF)
        {
            // printf("%c %c \n",ch,temp);

            if (ch == ':')
            {
                // printf("here3 \n");

                while (temp != 'M')
                {
                    temp1[k][i] = temp;
                    ch = fgetc(fptr);
                    temp = fgetc(tpr);
                    i++;
                }

                while (i < 5)
                {
                    temp1[k][i] = '\0';
                    i++;
                }
                i = 0;
                k = 5;
            }
            temp = fgetc(tpr);
            ch = fgetc(fptr);
        }
        c++;
        fclose(fptr);
        fclose(tpr);//   printf("..");
    }

    fclose(dptr);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 5; j++)
            ram_val1[i][j] = temp1[i][j];
        // printf ("%c ", temp1[j]);
    }
printf("..\n\n");
    // for (int i = 0; i < count; i++)
    // {
    //     printf("%s \n", c1[i]);
    // }
    printf("Done......................\n");


}
void priSchedAlgo(){
ramUsage();
    //     int n = sizeof(temp1) / sizeof(char);
    // printf("%d",n);
    
    for (int i = 0; i < count; i++)
    {
        // printf("%s \n",c1[i]);

        f = (float)atof(ram_val1[i]);
        if (f > 0)
        {
            // printf("%f\n", f);
            if (f > 7)
            {   
			int ca=ClientAccess(c1[i]);
			if (ca==1){		
		printf("Usage of Container %s > 7\n Killing the Container process\n", c1[i]);

                // printf("yooooooooo\n");
                strcpy(tempar, "");
                // printf("%s\n", tempar);

                strcat(tempar, "sudo docker rm --force ");
                // printf("%s\n", tempar);

                strcat(tempar, c1[i]);
                // printf("%s\n", tempar);

                // printf("%s", tempar);
                system(tempar);
                clock_t start_time = clock(); 

    while (clock() < start_time + 2000);
        printf("Killed......................\n\n");

                strcpy(tempar, "");
                // sudo docker rm --force
            }
		else
 		{
			printf("Usage of Container %s > 7\n and Client is Accessing the website\n Cannot Kill the Container process\n", c1[i]);
		}
}
            else if (f < 7)
            {
                printf("Usage of Container %s <7\n Deploying it on another available port....\n\n", c1[i]);
                strcpy(tempar, "");
                strcat(tempar, "sudo docker rm --force ");
                strcat(tempar, c1[i]);
                // printf("%s", tempar);
                system(tempar);
                strcpy(tempar, "");

                strcat(tempar, "docker run -dit --privileged -v /sys/fs/cgroup:/sys/fs/cgroup -v /var/www/html:/var/www/html --name ");

                strcat(tempar, c1[i]);
                strcat(tempar, " -p ");
                // printf("Enter port number\t");
                // scanf("%[^\n]%*c", str4);
                strcat(tempar, new_ports[i]);

                // strcat(tempar,'2');
                strcat(tempar, ":80 httpd:v1");
                // printf("%s", tempar);
                system(tempar);
                    clock_t start_time = clock(); 

    while (clock() < start_time + 2000);
                    printf("Done......................\n deployed on port %s\n\n",new_ports[i]);

                strcpy(tempar, "");
            }
        }
    }
		
}
void main()
{
    // if (fptr == NULL)
    // {
    //     printf("Cannot open file \n");
    //     exit(0);
    // }
    printf("Enter number of containers to deploy (max 5) :\t");
    scanf("%d", &n_of_containers);
   
    
    for(int i=0;i<n_of_containers;i++){
    printf("\n\nlaunching container %s at port %s \n",cnames[i],ports[i]);
    strcpy(tempar, "");

    strcat(tempar, "docker run -dit --privileged -v /sys/fs/cgroup:/sys/fs/cgroup -v /var/www/html:/var/www/html --name ");
	//printf("Enter container number\t");
          //scanf("%[^\n]%*c", &cnames);
    strcat(tempar,cnames[i]);
	
    strcat(tempar, " -p ");
    strcat(tempar, ports[i]);

    // strcat(tempar,'2');
    strcat(tempar, ":80 httpd:v1");

    system(tempar);
    clock_t start_time = clock(); 
  
    // looping till required time is not acheived 
    while (clock() < start_time + 2000);
	    
}
    for (int i = 0; i < 3; i++)
    {
        c1[i] = NULL;
    }
    system(">dname.odt");
    system("sudo docker ps --format '{{.Names}}'>dname.odt");
    dptr = fopen(container_name_file, "r");
    dptr_temp = fopen(container_name_file, "r");

    for (char c = getc(dptr_temp); c != EOF; c = getc(dptr_temp))
        if (c == '\n')
            count = count + 1;
    fclose(dptr_temp);

    printf("\nNo. of Live Containers: %d\n\n", count);
   getchar();
        printf("TO RUN ALGORITHM PRESS y\n");
scanf("%c",&chh);
    if (chh=='y')
   {
	//
	    priSchedAlgo();
       }
	else
     { printf("out");}
   getchar();
printf("TO KILL ALL LIVE CONTAINERS PRESS k\n");
scanf("%c",&chh);
    if (chh=='k')
   {
	//
	    system("docker rm -f $(docker ps -a -q)");
       }
}

