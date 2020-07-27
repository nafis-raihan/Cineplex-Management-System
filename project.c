#include<stdio.h>
#include <windows.h>
#include<conio.h>
#include<string.h>
void add_movie();
void view();
void edit();
void del();
void write();
void read();
void mainmenu();
void welcome();
void security();
void close();

struct cineplex
{
    char movie_name[20];
    char movie_type[20];
    char movie_date[20];
    char movie_genres[20];
    char running_time[20];
};
struct cineplex movie[50];

int n=0;

int main()
{
 system("COLOR F6");

 security();


 return 0;
}


void add_movie()
{
     system("cls");
    int i;

        printf("Add the movie no.%d:\n\n",n+1);
        printf("Enter movie name: ");
        scanf("%s",movie[n].movie_name);
        printf("Enter movie type(Example 3D or 2D): ");
        scanf("%s",movie[n].movie_type);
        printf("Enter release date (dd/mm/yy): ");
        scanf("%s",movie[n].movie_date);
        printf("Enter movie genres (Action/Comedy/Horror/Animation/Adventure): ");
        scanf("%s",movie[n].movie_genres);
        printf("Enter running time (min): ");
        scanf("%s",movie[n].running_time);
        printf("\n\n");
        n++;
        printf("Enter 1 to add another movie & 0 to return main menu: ");
        scanf("%d",&i);
        if(i==1)
        {
            add_movie();
        }
        if(i==0)
        {
            mainmenu();
        }
    }

void view()
{
    system("cls");
    printf("\tIf you want to see a particular movie no press 1\n\t Or Press 0 to see ALL\n\n");
    int i;
    scanf("%d",&i);
    if(i==0)
    {
        int x;
        for(x=0;x<n;x++)
        {

        printf("Your added movies are:\n\n");
        printf("%d no. movie is:\n\n",x+1);
        printf("Movie name: ");
        printf("%s\n",movie[x].movie_name);
        printf("Movie type: ");
        printf("%s\n",movie[x].movie_type);
        printf("Release date: ");
        printf("%s\n",movie[x].movie_date);
        printf("Movie genres: ");
        printf("%s\n",movie[x].movie_genres);
        printf("Running time: ");
        printf("%s\n",movie[x].running_time);
        }
    }
    else
    {
        printf("Enter the movie number u want to see:\n");
        int j,n;
        scanf("%d",&n);
        j=n-1;

        printf("Your added movies are:\n\n");
        printf("%d no. movie is:\n\n",i+1);
        printf("Movie name: ");
        printf("%s\n",movie[j].movie_name);
        printf("Movie type: ");
        printf("%s\n",movie[j].movie_type);
        printf("Release date: ");
        printf("%s\n",movie[j].movie_date);
        printf("Movie genres: ");
        printf("%s\n",movie[j].movie_genres);
        printf("Running time: ");
        printf("%s\n",movie[j].running_time);
        printf("\t");
    }
        printf("Enter 0 to return main menu: ");
        scanf("%d",&i);

        if(i==0)
        {
            mainmenu();
        }

}



void edit()
{
    system("cls");
    printf("\nEnter the movie number u want to edit:");
    int i;
    scanf("%d",&i);
    if(i>n)
    {

        system("cls");
        printf("\n\t!!!!There is not any movie of that number!!!!\n");
        edit();

    }
    else
    {
       system("cls");


    int j=i-1;
    printf("Enter 1 to change movie name\n");
    printf("Enter 2 to change movie type\n");
    printf("Enter 3 to change release date\n");
    printf("Enter 4 to change movie genres\n");
    int k;
    scanf("%d",&k);


    if(k==1)
            {
                printf("\n\n\nEnter movie name\n");
                scanf("%s",movie[j].movie_name);
                printf("\n\nYour edited movie name:");
                printf("%s",movie[j].movie_name);
            }
    if(k==2)
            {
                printf("Enter movie type\n");
                scanf("%s",movie[j].movie_type);
                printf("\n\nYour edited movie type:");
                printf("%s",movie[j].movie_type);
            }
    if(k==3)
            {
                printf("Enter release date\n");
                scanf("%d",movie[j].movie_date);
                printf("\n\nYour edited movie date:");
                printf("%s",movie[j].movie_date);
            }
    if(k==4)
            {
                printf("Enter movie genres\n");
                scanf("%d",movie[j].movie_genres);
                printf("\n\nYour edited movie genres:");
                printf("%s",movie[j].movie_genres);
             }
    }

    printf("\n\nEnter 0 to return main menu: ");
    scanf("%d",&i);

        if(i==0)
        {
            mainmenu();
        }

}

void mainmenu()
{
    int i;
    system("cls");
    printf("                                                   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  WELCOME TO NSU CINEPLEX  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
    printf("                                                         ~~~~~~NSU CINEPLEX MANAGMENT SYSTEM~~~~~~\n\n\n");
    printf("                                                 **********THIS PROGRAM WAS WRITTEN BY SHUVO & NAFIS*******\n\n\n");
	int x;
	printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\n\xDB\xDB\xDB\xDB\xB2 Press :");
	printf("\n\n\xDB\xDB\xDB\xDB\xB2 1. Add movie:\t\t");
	printf("\n\n\xDB\xDB\xDB\xDB\xB2 2. Edit movie:\t\t");
	printf("\n\n\xDB\xDB\xDB\xDB\xB2 3. Delete movie:\t\t");
	printf("\n\n\xDB\xDB\xDB\xDB\xB2 4. View movie:\t\t");
	printf("\n\n\xDB\xDB\xDB\xDB\xB2 5. Save:\t\t");
	printf("\n\n\xDB\xDB\xDB\xDB\xB2 6. Read from file:\t\t");
	//printf("\n\n\xDB\xDB\xDB\xDB\xB2 7. Search movie:\t\t");
	printf("\n\n\xDB\xDB\xDB\xDB\xB2 7. Close program:\t\t");
	printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\n\nEnter your choice:");
	scanf("%d",&x);
	switch(x)
	{

    case 1:
		add_movie();
		break;

	case 2:
		edit();
		break;
    case 3:
        del();
        break;

	case 4:
		view();
	    break;

    case 5:
		write();
		break;

    case 6:
		read();
		break;

   /* case 7:
            search();
            break;*/
    case 7:
            close();
            break;


    default:
		system("cls");
		printf("\n\n\n\t\t\t\t\t\t\t***Invalid KEY***\n\n");
		printf("Enter 0 to return main menu: ");
        scanf("%d",&i);

        if(i==0)
        {
            mainmenu();
        }
		getch();
		break;
    }
}


void write()
{
    system("cls");
    FILE *fp;
    fp=fopen("pro3.txt","wt+");
    int i,c;
    fprintf(fp,"%d\n\n\n",n);
    for(i=0;i<n;i++)
    {

        fprintf(fp,"%s\n",movie[i].movie_name);
        fprintf(fp,"%s\n",movie[i].movie_type);
        fprintf(fp,"%s\n",movie[i].movie_date);
        fprintf(fp,"%s\n",movie[i].movie_genres);
        fprintf(fp,"%s\n",movie[i].running_time);
    }
    fclose(fp);
    printf("\t\t\t***ALL DATA SAVED***\n\n\n");
    printf("Enter 0 to return main menu: ");
    scanf("%d",&c);

    if(c==0)
        {
            mainmenu();
        }
    getch();

}

void read()
{
    system("cls");
    FILE *fp;
    fp=fopen("pro3.txt","r");
    int i,j;
    fscanf(fp,"%d",&n);
    for(j=0;j<n;j++)
    {
        fscanf(fp,"%s\n",&movie[j].movie_name);
        fscanf(fp,"%s\n",&movie[j].movie_type);
        fscanf(fp,"%s\n",&movie[j].movie_date);
        fscanf(fp,"%s\n",&movie[j].movie_genres);
        fscanf(fp,"%s\n",&movie[j].running_time);

    }

        fclose(fp);

        printf("\t\t\t***********DATA LOADED***********\n\n\n");
        printf("Enter 0 to return main menu: ");
        scanf("%d",&i);

        if(i==0)
        {
            mainmenu();
        }


}




void del()
{
    system("cls");
printf("\n\n\nEnter the movie number you want to delete\n\n\n");
int d,i;
scanf("%d",&d);
if(d>n)
    {
        printf("\n\n\nThere isn't any movie of that number!!!\n\n\n");
    }
else{

    for(i=d-1;i<n;i++)
    {
        movie[i]=movie[i+1];
    }
  printf("Enter  0 to return main menu: ");
        scanf("%d",&i);

        if(i==0)
        {
            mainmenu();
        }

}

}

/*void search()
{
    system("cls");
    int i,v,count=0,x;
    char search[20];
    printf("\n\nEnter the movie name:");
    scanf("%s",search);
        for(x=0;x<n;x++)
      {

        count++;
     v=strcmp(search,movie[x].movie_name);

      }
      if(v==0)
    {
        printf("Movie found\n\n");
        printf("\n\nYour movie is at no. %d\n\n",count);

    }
    else{
        printf("Movie not found\n\n");
    }


  while(v!=0)
    {
        count++;
    }


    printf("Enter 0 to return main menu: ");
    scanf("%d",&i);
        if(i==0)
        {
            mainmenu();
        }

} */

void welcome()
{
     system("COLOR F4");
     system("cls");
 printf("**                                   ** *********************  **                    ****************  ******************  ***             ***  *******************         \n");
 printf(" **                                 **  *********************  **                    **           ***  ******************  ****           ****  *******************         \n");
 printf("  **                               **   **                     **                    **           ***  **              **  ** **         ** **  **                           \n");
 printf("   **                             **    **                     **                    **                **              **  **  **       **  **  **                           \n");
 printf("    **                           **     **                     **                    **                **              **  **   **     **   **  **                           \n");
 printf("     **                         **      **                     **                    **                **              **  **    **   **    **  **                           \n");
 printf("      **                       **       *************          **                    **                **              **  **     ** **     **  **************               \n");
 printf("       **         **          **        *************          **                    **                **              **  **      **       **  **************               \n");
 printf("        **       ** **       **         **                     **                    **                **              **  **               **  **                           \n");
 printf("         **     **   **     **          **                     **                    **                **              **  **               **  **                           \n");
 printf("          **   **     **   **           **                     **                    **           ***  **              **  **               **  **                           \n");
 printf("           ** **       ** **            *********************  ********************  **           ***  ******************  **               **  *******************          \n");
 printf("            **          **              *********************  ********************  ****************  ******************  **               **  *******************          \n");
 printf("\n\n\nPress any key to continue: \n\n\n");
 getch();
 mainmenu();

}
void security()
{

   system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n                                                     ********************Password Protected*************************\n\n");
   char ch,pass[10];
   int i=0;
   char password[10]={"beshijoss"};
    printf("\n\n\n\nEnter Password: ");

   while(ch!=13)
   {
	ch=getch();

	if(ch!=13 && ch!=8){
	putch('*');
	pass[i] = ch;
	i++;
	}
	}
   pass[i] = '\0';
   if(strcmp(pass,password)==0)
   {


	printf("\n\nPassword match\n\n");
	getch();
	welcome();

   }
   else
   {

	 printf("\n\nWarning!! Incorrect Password\n\n");
	 printf("\nTry again\n");
	 getch();
	security();
   }
}
void close()
{
    system("cls");
    printf("\n\n\n\n\t\t\t\t*****Thank you for choosing us*****\n\n\n\n");
    printf("\n\n\t\t\t\t#### all rights reserved @team BESHI JOSS ####");

}





