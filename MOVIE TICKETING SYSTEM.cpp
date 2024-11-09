#include <stdio.h>
#include <conio.h>
#include <ctype.h> //declares a set of functions to classify (and transform) individual characters
#include <stdlib.h> //declares various utility functions for type conversions, memory allocation, algorithms, and other similar use cases
#include <string.h>
// Global variables for tracking booking details
int adultTickets = 0;
int childTickets = 0;
struct user {
    char fullName[50];
    char email[50];
    char password[50];
    char username[50];
    char phone[50];
}u;
// Function prototypes
void signup();
void displayCities();
void displayCinemas(int cityChoice);
void displayMovies();
void comingsoon();
void displayDates();
void displayTimes();
void displaySeats();
void bookTickets();
void displayTransaction();
int main()
{
	printf("\n\n\n\n\t\t\t**************************************************************************\n");
    printf("\t\t\t*                                                                        *\n");
    printf("\t\t\t*                ***************************************                 *\n");
	printf("\t\t\t*                                                                        *\n");
    printf("\t\t\t*          ***   |||    SHINE MOVIE TICKETING HALL   |||   ***           *\n");
    printf("\t\t\t*                                                                        *\n");
    printf("\t\t\t*                ***************************************                 *\n");
    printf("\t\t\t*                                                                        *\n");
    printf("\t\t\t*                    -Your ultimate movie destination                    *\n");
    printf("\t\t\t*                                                                        *\n");
    printf("\t\t\t**************************************************************************\n");
    printf("\t\t\t\t\t\t ### BY KRITI SINTAKALA ### \t\t\t\t\t\t\n");
    system("pause");
	welcome:{
	system("cls");
	{ 
		printf("\n\n\n\n\t\t\t**********************************************************************\n");
		printf("\t\t\t # ---------------------------------------------------------------- #\n");
		printf("\t\t\t # ---------------------------------------------------------------- #\n");
		printf("\t\t\t #							   	    #\n");
		printf("\t\t\t #     	      || 	     WELCOME TO             ||              #\n");
		printf("\t\t\t #     	      ||     SHINE MOVIE TICKETING HALL     ||              #\n");
		printf("\t\t\t #							   	    #\n");
		printf("\t\t\t #							   	    #\n");
		printf("\t\t\t #		    -Enjoy your favourite movies!!!                 #\n");
		printf("\t\t\t # ---------------------------------------------------------------- #\n");
		printf("\t\t\t # ---------------------------------------------------------------- #\n");
		printf("\t\t\t**********************************************************************\n");
	}
	printf("\nEnjoy our various services.\n\n");
	system("pause ");
	}
	login:
	{
		int option;
	    system("cls");
	    do{
			system("cls");
			printf("\n\n++++++++++++++++++++++++++++++  FOR LOGIN   ++++++++++++++++++++++++++++++  ");
		    printf("\n\n1. SIGNUP");
		    printf("\n2. LOGIN");
		    printf("\n3. EXIT");
		    printf("\n\nNOTE=First go to signup process (1) to have username and password then go to login process (2).");
		    printf("\n\nEnter the option number: ");
		    scanf("%d", &option);
		    switch (option) {
		        case 1:
		            signup();
		            getch();
		            break;
		       case 2:
		       	system("cls");
		       			struct user {
		    char fullName[50];
		    char email[50];
		    char password[50];
		    char username[50];
		    char phone[50];
		}u;
		 FILE *fl,*fll;
		    int option, usrFound = 0;
		    char password2[50];
		    char sa[5];
			char username[50],password[50];
			printf("\n\n++++++++++++++++++++++++++++++  LOGIN   ++++++++++++++++++++++++++++++  ");
		    printf("\n\nENTER YOUR USERNAME: ");
		    scanf("%s", username);
		    printf("ENTER YOUR PASSWORD: ");
		    scanf("%s", password);
		    fl = fopen("Users.txt", "r");
		    if (fl == NULL) {
		        printf("\n\nSorry! Something went wrong :(");
		        system("pause");
		    }
		    int isFound = 0;
		    while (fread(&u, sizeof(u), 1, fl) == 1) {
		        if (strcmp(u.username, username) == 0 && strcmp(u.password, password) == 0) {
		            isFound = 1;       
		        }
		    }
		    fclose(fl);
		    if (isFound) {
		        printf("\n\nLogin successful. Welcome, %s", u.fullName);
		     	goto main;
		    } else {
		        printf("\n\nUsername or password is incorrect.");
		    }
		    system("pause");
		       	getch();
		       	break;  
			    }
			    if (option==3){
			    	exit(0);
				}
		}while(1);
			return 0;
			    }
			     int choice;
    
	main:{
    do {
    system("cls");
    printf("\n");
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\t\t\t                      SHINE'S MENU            \n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
    	printf("================================\n");
        printf("1. Display Cities\n");
        printf("2. Book Tickets\n");
        printf("3. Display Transaction\n");
        printf("4. Exit\n"); 					
		printf("================================\n");			
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayCities();
                break;
            case 2:
                bookTickets();
                break;
            case 3:
                displayTransaction();
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}
}
  	FILE *fl,*fll;
    int option, usrFound = 0;

    char password2[50];
			void signup()
{
	system("cls");
	printf("\n\n++++++++++++++++++++++++++++++  SIGNUP  ++++++++++++++++++++++++++++++  ");
            printf("\n\nENTER YOUR NAME: ");
            scanf("%s", u.fullName);

            printf("ENTER CONTACT NUMBER: ");
            scanf("%s", u.phone);

			printf("ENTER YOUR EMAIL: ");
            scanf("%s", u.email);
            
            printf("ENTER YOUR PASSWORD: ");
            scanf("%s", u.password);

            printf("CONFIRM YOUR PASSWORD: ");
            scanf("%s", password2);

            if (strcmp(u.password, password2) == 0) {
                int i;
                for (i = 0; u.email[i] != '@'; i++) {
                    u.username[i] = u.email[i];
                }
                u.username[i] = '\0';

                fl = fopen("Users.txt", "a+");
                fwrite(&u, sizeof(u), 1, fl);

                if (fwrite != 0) {
                    printf("\n\nYour registration Process is Successful. \n\tYour username is [%s]\n", u.username);
                    
                } else {
                    printf("\n\nSorry! Something went wrong :(");
                }
                fclose(fl);
            } else {
                printf("\n\nPassword doesn't match");
            }
            system("pause");
    
    		getch();
}
void displayCities() {
    system("cls");
    printf("\nCities:\n");
    printf("================================\n");
    printf("1. Kathmandu\n");
    printf("2. Pokhara\n");
    printf("3. Biratnagar\n");
    printf("4. Butwal\n");
    printf("================================\n");
    system("pause");
}

void displayCinemas(int cityChoice) {
    system("cls");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\t\t\t                       BOOK SHINE'S TICKET            \n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
    printf("\nCinemas in selected city:\n");
    switch (cityChoice) {
        case 1:
            printf("1. QFX Civil Mall\n");
            printf("2. QFX Kumari\n");
            break;
        case 2:
            printf("1. QFX Lakeside\n");
            printf("2. QFX Midtown\n");
            break;
        case 3:
            printf("1. QFX Biratnagar Plaza\n");
            printf("2. QFX Birtamod\n");
            break;
        case 4:
            printf("1. QFX Butwal \n");
            printf("2. QFX Hall\n");
            break;
        default:
            printf("Invalid city choice.\n");
    }
}

void displayMovies() {
    system("cls");
    printf("\nComing soon movies are....\n\n");
	printf("1. Crew(29 March 2024)\n");
    printf("2. Godzilla X Kong(01 April 2024)\n\n");
    printf("Now Showing Movies:\n");
    printf("1. Avengers: Endgame\n");
    printf("2. Joker\n");
    printf("3. The Lion King\n");
    printf("4. Frozen 2\n");
}
	

void displayDates() {
    system("cls");
    printf("\nEnter Date :\n");
    printf("1. Today\n");
    printf("2. Tomorrow\n");
}

void displayTimes() {
    system("cls");
    printf("\nSelect Time:\n");
    printf("1. 2:00 PM\n");
    printf("2. 5:00 PM\n");
    printf("3. 8:00 PM\n");
}

void displaySeats() {
    system("cls");
    printf("\nSelect Seat Type:\n");
    printf("1. Regular (Rs. 300)\n");
    printf("2. Premium (Rs. 500)\n");
}

void bookTickets() {
    system("cls");
    int cityChoice, cinemaChoice, movieChoice, dateChoice, timeChoice, seatChoice;
    int numAdults, numChildren;

    displayCities();
    printf("Enter the city number: ");
    scanf("%d", &cityChoice);

    displayCinemas(cityChoice);
    printf("Enter the cinema number: ");
    scanf("%d", &cinemaChoice);

    displayMovies();
    printf("Enter the movie number you want to watch: ");
    scanf("%d", &movieChoice);

    displayDates();
    printf("Enter the date number: ");
    scanf("%d", &dateChoice);

    displayTimes();
    printf("Enter the time number: ");
    scanf("%d", &timeChoice);

    displaySeats();
    printf("Enter the seat type number: ");
    scanf("%d", &seatChoice);

    printf("Enter the number of adult tickets: ");
    scanf("%d", &numAdults);

    printf("Enter the number of child tickets: ");
    scanf("%d", &numChildren);

    // Update global ticket counts
    adultTickets += numAdults;
    childTickets += numChildren;

    printf("Tickets booked successfully!\n");
}

void displayTransaction() {
    system("cls");
    printf("\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =           <<PAYMENT>>     		    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n\n\n");
    int paymentchoice;
    printf("\nTransaction Details:\n");
    printf("Adult Tickets: %d\n", adultTickets);
    printf("Child Tickets: %d\n", childTickets);
    printf("Total Amount: Rs. %d\n", (adultTickets * 300) + (childTickets * 150));
    printf("\nSelect a payment method:\n");
    printf("1. Cash\n");
    printf("2. Card\n");
    printf("3. Master Card\n");

    // Get user input for payment method
    printf("Enter your choice (1-3): ");
    scanf("%d", &paymentchoice);

    switch (paymentchoice) {
        case 1:
            printf("You have chosen to pay with cash.\n");
            system("pause");
            break;

        case 2: {
            // For card payment, ask for login username and password
            char username[20];
            char password[20];

            printf("Enter your login username for card payment: ");
            scanf("%s", username);

            printf("Enter your login password for card payment: ");
            scanf("%s", password);

            // Check the username and password (a simple example, you may wantto use secure password handling)
            if (strcmp(username, "carduser") == 0 && strcmp(password, "cardpassword") == 0) {
                printf("Login successful. Payment with card accepted.\n");
            } else {
                printf("Incorrect username or password. Payment with card failed.\n");
            }
            system("pause");
            break;
        }

        case 3: {
            // For Master Card payment, ask for login username and password
            char username[20];
            char password[20];

            printf("Enter your login username for Master Card payment: ");
            scanf("%s", username);

            printf("Enter your login password for Master Card payment: ");
            scanf("%s", password);

            // Check the username and password (a simple example, you may want to use secure password handling)
            if (strcmp(username, "masteruser") == 0 && strcmp(password, "masterpassword") == 0) {
                printf("Login successful. Payment with Master Card accepted.\n");
            } else {
                printf("Incorrect username or password. Payment with Master Card failed.\n");
            }
            system("pause");
            break;
        }

        default:
            printf("Invalid choice. Please select a valid payment method.\n");
    }   
    {
    system("cls");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =           <<THANK YOU>>     		    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n\n\n");
	printf("\n\n\tDear user thank you for using our shine movie ticketing system!\n\t\tSmile,Enjoy your movie and visit again.\n\n");
	system("pause");
	}
	}
