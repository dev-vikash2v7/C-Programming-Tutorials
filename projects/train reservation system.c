#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef unsigned int ui;
typedef char ch;

void train_entry();
void show_train();
void search_train();
void reservation();
void show_user();

FILE *train_data, *user_data;
char cont = 'y';

struct train_live_status
{
    ch status; //'R' 'S'
    ui total_seats;
    ui reserved_seats;
    ui waiting_list;
    ui arrival;
    ui departure;
}train_status;

struct train_info
{
    ch train_name[30];
    ch train_number[10];

    ui total_coach;

    ch from[30];
    ch destination[30];
    ui fare;

    struct train_live_status train_status;

} t1;

// struct station

// {
//     ch station_name[30];
//     ch code[10];
//     ui platform;
// };

struct ticket_status
{
    ch status;
    ui fare;
    ui total_passenger;
    ch coach[2];
    ui *seat_number[5];
    ch booking_time[8];
    unsigned long PNR;
} ticket;

struct user_details
{
    ch irctc_id[10];
    ch name[30];
    ui age;
    ch phone[10];
    ch sex;
    struct ticket_status ticket;
} user;

int main()
{
    system("cls");
    int choice;

    puts("\t\t\t Welcome to vk_train tracker!!!\n");

    puts("\t\t\t\t 1.entry of train\n \t\t\t\t 2.search train\n \t\t\t\t 3.Reservation\n \t\t\t\t 4.Check Status of Seat\n \t\t\t\t 5.show all trains\n \t\t\t\t 6.Show all Users\n \t\t\t\t 7.EXIT\n");

    printf("enter option number from the above : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        train_entry();
        break;

    case 2:
        search_train();
        break;

    case 3:
        reservation();
        break;

    case 4:
        ticket_show(ticket);
        break;

    case 5:
        puts("showing all trains information\n\n");
            train_data = fopen("train_data.dat", "rb");
    train_data == NULL && puts("not find file !!!!");

        while (fread(&t1, sizeof(t1), 1, train_data) == 1)
        {
            show_train(t1);
        }

        break;

    case 6:
        show_user();
        break;

    case 7:
        puts("thaks!!");
        exit(0);
        break;

    default:
        puts("enter wrong choice number!!!!!!\n");
        break;
    }
label:
    printf("want to continue (y/n) : ");
    cont = getch();

    cont == 'y' ? main() : exit(0);

    goto label;

    return 0;
}

void train_entry()
{
    do
    {
        train_data = fopen("train_data.dat", "ab");

        train_data == NULL &&puts("file does not exist!!!");

        puts("\nEnter details of Train : ");

        printf("train name : ");
        scanf("%s", t1.train_name);

        printf("train number : ");
        scanf("%s", t1.train_number);

        printf("from : ");
        scanf("%s", t1.from);

        printf("destination : ");
        scanf("%s", t1.destination);

        //   printf("arrival time : " );
        //   scanf(&t1.arrival  );
        //   printf("departure time : " );
        //   scanf(&t1.departure  );
        //   printf("total_coach : " );
        //   scanf(&t1.total_coach  );
        t1.total_coach = 10;

        t1.train_status.total_seats = 400;
        t1.train_status.arrival = 13;
        t1.train_status.departure = 19;
        t1.train_status.reserved_seats = 300;
        t1.train_status.status = 'R';
        t1.train_status.waiting_list = 100;

        fwrite(&t1, sizeof(t1), 1, train_data);
        fclose(train_data);

        fflush(stdin);

        printf("enter more details (y/n) : ");
        cont = getchar();
    } while (cont == 'y');
};

void show_train(struct train_info t1)
{
    printf("\t* train name : %s\n", t1.train_name);
    printf("\t* train number : %s\n", t1.train_number);
    printf("\t* live status : %c\n", t1.train_status.status);
    printf("\t* arrival : %u\n", t1.train_status.arrival);
    printf("\t* departure : %u\n", t1.train_status.departure);
    printf("\t* from : %s\n", t1.from);
    printf("\t* destination : %s\n", t1.destination);
    printf("\t* total coaches : %u\n", t1.total_coach);
    printf("\t* total seats : %u\n", t1.train_status.total_seats);
    printf("\t* reserved seats : %u\n", t1.train_status.reserved_seats);
    printf("\t* in waiting : %u\n\n\n", t1.train_status.waiting_list);
}

void search_train()
{
    //printf("Enter choice to search train by \n 1.train name \n 2.train number \n 3.from - to destination \t");
    ch train_number[6];
    int found = 0;

    printf("enter train number : ");
    scanf("%s", train_number);

    train_data = fopen("train_data.dat", "rb");
    train_data == NULL &&puts("file does not exist !!!!! ");

    while (fread(&t1, sizeof(t1), 1, train_data) == 1)
    {

        if (strcmp(train_number, t1.train_number) == 0)
        {
            printf("\ttrain is found with train number %s \n", train_number);
            found = 1;
            show_train(t1);
            break;
        };
    };

    // !found && printf("no record found with train number %s", train_number) ;
};

void traveller_entry(struct train_info train)
{
    user_data = fopen("user_data.dat", "ab");
    user_data == NULL &&puts("file does not exits!!!");

    int passenger;

    printf("how many passenger travelling : ");
    scanf("%d", &passenger);


    for (int i = 1; i <= passenger; i++)
    {
        printf("enter details of passenger %d below :\n", i);

        printf("enter your irctc id : ");
        scanf("%s", user.irctc_id);

        printf("enter your name : ");
        scanf("%s", user.name);

        printf("enter your age : ");
        scanf("%d", &user.age);

        printf("enter your sex (M / F) : ");
        scanf("%c", &user.sex);

        printf("enter your phone number : ");
        scanf("%s", user.phone);

        fwrite(&user, sizeof(user), 1, user_data);
        puts("\n");
    }

    user.ticket.status = 'c';
    user.ticket.fare = passenger * train.fare;
    strcpy(user.ticket.PNR , "1234567890");
     strcpy(user.ticket.coach , "d2");

    int a[2] = {42 ,43};
    printf("%d",user.ticket.seat_number );


    strcpy(user.ticket.booking_time,"1-1-2022 17:03");
    user.ticket.total_passenger = passenger;

    fwrite(&user, sizeof(user), 1, user_data);

    printf("congratulation reservation is confired in %s  !!!", train.train_name);

    show_user();

    ticket_show(user.ticket);


    fclose(user_data);
}

void reservation()
{
    ch from[10], destination[10];
    int sno  , i=0;

    printf("enter from where to travell : ");
    scanf("%s", from);

    printf("enter destination of travelling : ");
    scanf("%s", destination);

    printf("\n\nfollowing train from %s to %s \n", from, destination);

    while (fread(&t1, sizeof(t1), 1, train_data) == 1)
    {
        if ((strcmp(t1.from, from) == 0) && (strcmp(t1.destination, destination) == 0))
        {
            printf("ues ");
            trains[i]  = t1;
            i++;
            show_train(t1);
        };
    };

    if( trains ){
    printf("\nwhich train to travell ? enter serial number  : ");
    scanf("%d", &sno);
    traveller_entry(trains[sno - 1]);
    }
    else{
        puts("sorry !! no train found with this date !!!");
    }
};

void show_user()
{
    user_data = fopen("user_data.dat", "rb");
    user_data == NULL &&puts("file does not exits!!!");
    int i = 0;

    while (fread(&user, sizeof(user), 1, user_data) == 1)
    {
        i++;
        printf(" user %d info => \n\n", user.irctc_id);
        printf("IRCTC ID : %s\n", user.name);
        printf("NAME : %s\n", user.age);
        printf("SEX : %c\n", user.sex);
        printf("PHONE NO. : %s\n", user.phone);
    }

    fclose(user_data);
}

void ticket_show(struct ticket_status ticket)
{
    printf("Ticket Status : %s\n", ticket.status);
        printf("PNR No : %s\n" ,ticket.PNR);
        printf("Total Passenger : %u\n" ,ticket.total_passenger);
        printf("TOTAL FAIR : %u\n" ,ticket.fare);
        printf("Seat Number : %s / %s\n" ,ticket.coach , ticket.seat_number);
        printf("BOOKING TIME : %s\n",ticket.booking_time);
}
