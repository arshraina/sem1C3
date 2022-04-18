#include <stdio.h>
#include <string.h> 
struct flight{
  char sp[4], dest[4];
  char st[5], at[5];
  int seats;
};

void read_flights (struct flight f[], int n){
    int i, j;
    for (i = 0; i < n; i++){
        printf ("Enter flight starting point:");
        scanf ("%s", f[i].sp);
        printf ("Enter flight destination:");
        scanf ("%s", f[i].dest);
        printf ("Enter flight starting time:");
        scanf ("%s", f[i].st);
        printf ("Enter flight arrival time:");
        scanf ("%s", f[i].at);
        printf ("Enter no. of seats:");
        scanf ("%d", &f[i].seats);
    }
}

void print_details (struct flight f[], int j){
    printf ("\nStarting point: %s", f[j].sp);
    printf ("\nDestination: %s", f[j].dest);
    printf ("\nStarting time: %s", f[j].st);
    printf ("\nArrival time: %s", f[j].at);
}

void book_flight (struct flight f[], int n){
    int q, i, j, flag;
    char src[4], des[4];
    printf ("\nEnter the number of queries:");
    scanf ("%d", &q);
    for (i = 0; i < q; i++){
        printf ("\nEnter starting point:");
        scanf ("%s", src);
        printf ("\nEnter destination:");
        scanf ("%s", des);
        flag = 0;
        for (j = 0; j < n; j++){
	        if (strcmp (src, f[j].sp) == 0 && strcmp (des, f[j].dest) == 0){
	            flag = 1;
	            if (f[j].seats > 0){
		            printf ("\nCongratulations! Your Ticket is booked");
		            f[j].seats--;
		            print_details (f, j);
		        }
	            else{
                    printf ("\nSorry! No seats available!!");
		        }
            }
        }
        if (flag == 0){
            printf ("\nSorry! No flights available!!");
        }
    }
}
int main (){
    int n;
    printf ("Enter the number of flights:");
    scanf ("%d", &n);
    struct flight f[n];
    read_flights (f, n);
    book_flight (f, n);
    return 0;
}
