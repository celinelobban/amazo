#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct Artistbooking
{
    int bookingNum;
    char  bookingtype;
    char  hotel [25];
    char  guide [30];
    char flightinfo [30];
    char location [25];
    int theDate;
    float localrate;
    float foreignrateperhow;
};
struct Artiistfoundation
{
    int fAcnum;
    float balance;
    char MajorCurCharity [25];
};
struct Artist
{
    char StageName [25];
    char realname [25];
     int Accountnum;
     float Accountbal;
     long telephone;
     float Earningperyr;
};

struct login{
char employeeId[10];
char salesmanName[25];
char password[25];
} Login;

void main()
{
    char usertype,result,transOption;
    int MenuOption,operationOption,attempt=0,access=0;
    printf  (" Welcome to Artist booking system\n ");
	while((attempt>-1)&&(attempt<3))
	{
		printf("Enter Your Name");
		scanf("%s", &username);
		printf("Enter Your Password");
		scanf("%s", &pwd);
		if(ValidatedLogin(username,pwd) == 1)
		{
			access=1;
			break;
		}
		elseif(ValidatedLogin(username,pwd) == 0)
		{
			attempt+=1;
		}
	}
	if(access == 1)
	{
		printf (" select a user category 'm' or 'c' ");
		scanf ("%c", &usertype);
		result = tolower(c);
		if (result == 'c')
		{
			while (1)
			{
				MenuOption = ClarkMenu();
				switch(MenuOption)
				{
					case 1:operationOption = operationMenu('a');
							switch(operationOption)
							{
								case 1:AddArtist();
									break;
								case 2:RetriveArtist();
									break;
								case 3:UpdateArtist();
									break;
								case 4:DeleteArtist();
									break;
								default:printf("Invalid Option");
							}
						break;
					case 2: operationOption = operationMenu('b');
							switch(operationOption)
							{
								case 1: addBooking ();
									break;
								case 2: RetrieveBooking ();
									break;
								case 3: UpdateBooking ();
									break;
								case 4: DeleteBooking ();
									break;
								default:printf("Invalid Option");
							}
						break;
					case 3:operationOption = operationMenu('f');
							switch(operationOption)
							{
								case 1: AddFoundation ();
									break;
								case 2: RetrieveFoundation ();
									break;
								case 3: UpdateFoundation ();
									break;
								case 4: DeleteFoundation ();
									break;
								default:printf("Invalid Option");
							}
						break;
					default:
						prntf ("Invalid Option");
				}
				printf("Do you want to make another Transaction? Y/N");
				scanf("%c",&transOption);
				if(transOption == 'y')
				{
					MenuOption = ClarkMenu();
				}
				elseif(transOption == 'n')
				{
					break;
				}
				else
				{
					printf("Not an Option");
					break;
				}
			}
		}
		elseif(result == 'm')
		{
			 while (1)
			{
				printf("Do you want to make another Transaction? Y/N");
				scanf("%c",&transOption);
				if(transOption == 'y')
				{

				}
				elseif(transOption == 'n')
				{
					break;
				}
				else
				{
					printf("Not an Option");
					break;
				}
		}
		else
		{
			printf("That option is not in the Menu");
		}
	}
	else
	{
		printf("You have exceeded your number of Attempts. Please try again Later.");
	}
}



int ClarkMenu()
{
    int option;
    printf  ("Clark Menu Options\n ");
    printf (" select an Operation");
    printf("1............Foundation");
    printf("2............Artist");
    printf ("3............Booking");
        scanf ("%c", &option);
    return option;
}

int operationMenu(char type)
{
    int option;
    if(type == 'a')
    {
        printf("Clark Menu Options\n ");
        printf("1............Add Artist");
        printf("2............Retrieve Artist");
        printf("3............Update Artist");
        printf("4............Delete Artist");
    }
    elseif(type == 'b')
    {
        printf("Clark Menu Options\n ");
        printf("1............Add Booking");
        printf("2............Retrieve Booking");
        printf("3............Update Booking");
        printf("4............Delete Booking");
    }
    elseif(type == 'f')
    {
        printf("Clark Menu Options\n ");
        printf("1............Add Foundation");
        printf("2............Retrieve Foundation");
        printf("3............Update Foundation");
        printf("4............Delete Foundation");
    }
    scanf("%d", &option);
    return option;
}

void addArtist()
{
    printf ("enter an Artist real name ");
    scanf ("%s", realname);
    pintf ("enter the stage name ");
    scanf ("%s", StageName);
    printf (" enter an artist account number ");
    scanf ("%d", &Acconutnum);
    printf ("  enter an artist account balance ");
    scanf ("%f", &Accountbal);
    printf ("enter the artist telephone number ");
    scanf ("%d", &telephone);
    printf ("enter the artist earning per year ");
    scanf ("%f", &Earningperyr);
}
void retrieveArtist(char StageName[23])
{
    FILE *fptr;
    fptr = fopen("artist.txt","r");
    fscanf(fptr,"%[^\n]", c);
    fclose(fptr);
}
void updateArtist(char StageName[23])
{

}
void deleteArtist(char StageName[23])
{

}

void addBooking()
{
    printf ("enter the booking date ");
    scanf ("%d", &theDate);
    printf ("enter a hotel ");
    scanf ("%s", hotel);
    printf (" enter a location address");
    scanf ("%s", location);
    printf (" enter a guide");
    scanf ("%s", guide);
    printf (" enter flight information ");
    scanf ("%s", flightinfo);
    printf (" enter booking type ");
    scanf ("%c",%bookingtype);
}
void AddFoundation ()
{
    printf (" enter a foundation account number ");
    scanf ("%d", &fAcNum);
    printf ("enter  the balance ");
    scanf ("%f", &balance);
    printf ("enter the Major Current charity");
    scanf ("%s", MajorCurCharity);
}

void StoreToFile()
{

}

void ReadFromFile(int filetype,char searchKey[30])
{
    struct Artist artist[20];
    struct Artiistfoundation artfound[20];
    struct Artistbooking artistbooking[20];
    FILE *fptr;
    int i;
    if(filetype == 1)
    {
        fptr = fopen("Artist.txt","wb");
        for(i = 0; i < 19; ++i)
        {
            fflush(stdin);
            gets(stud1[i].name);
            scanf("%d", &stud1[i].height);
            StageName [25];
            char realname [25];
            int Accountnum;
            float Accountbal;
            long telephone;
            float Earningperyr;
            if(searchKey == artist[i].StageName)
            {

            }
        }
    }
    elseif(filetype == 2)
    {
        fptr = fopen("ArtistBooking.txt","wb");
        for(i = 0; i < 5; ++i)
        {
            fflush(stdin);
            printf("Enter name: ");
            gets(stud1[i].name);

            printf("Enter height: ");
            scanf("%d", &stud1[i].height);
        }
    }
    elseif(filetype == 3)
    {
        fptr = fopen("ArtistFoundation.txt","wb");
        for(i = 0; i < 5; ++i)
        {
            fflush(stdin);
            printf("Enter name: ");
            gets(stud1[i].name);

            printf("Enter height: ");
            scanf("%d", &stud1[i].height);
        }
    }
}

int ValidatedLogin(char username[25], char pwd[25])
{
	FILE *fptr;
    fptr = fopen("artist.txt","r");
    fscanf(fptr,"%[^\n]", c);
    fclose(fptr);
	if()
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
