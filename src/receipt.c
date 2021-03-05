// This program demonstrates the use of a switch conditional statements
// The is a receipt generator for customers to a mini-shop
// For now the shop has ONLY 3 items available
// 1. Exercise Book, 2. Pencil and 3. A Rubber

#include <cs50.h>
#include <stdio.h>

void showItems(void);
int selectItem(void);
int getCash(int t);
void showHeader(void);
void starsLine(void);
void dashesLine(void);
void dashesLineSpecial(void);

int main(void) {
  showHeader();
  // Item price
  int book = 80, pencil = 25, rubber = 20;
  // Quantity taken by customer
  int book_qty = 0, pencil_qty = 0, rubber_qty = 0, total_items = 0;
  // Totals
  int total, book_total, pencil_total, rubber_total;
  // Change
  int cash, change;

  // Display available items
  showItems();

  // Customer item selection
  int choice;
  do {
    choice = selectItem();
    starsLine();

    switch (choice) {
      case 1:
        book_qty = get_int("How many Exercise Books: ");
        break;
      case 2:
        pencil_qty = get_int("How many Pencils: ");
        break;
      case 3:
        rubber_qty = get_int("How many Rubbers: ");
        break;
      case 0:
        printf("Exiting...\n\n");
        break;
      default:
        printf("Invalid. Try again...\n");
        showItems();
        break;
    }
  } while(choice != 0);

  // Totals for each item
  book_total = book * book_qty;
  pencil_total = pencil * pencil_qty;
  rubber_total = rubber * rubber_qty;

  // Totals Overall
  total = book_total + pencil_total + rubber_total;
  // Total Items
  total_items = book_qty + pencil_qty + rubber_qty;

  // Show purchase summary
  if (total > 0) {
    printf("Total purchase: %i\n", total);
    cash = getCash(total);
    change = cash - total;

    dashesLineSpecial();
    printf("\tPURCHASE SUMMARY\n");
    dashesLine();
    printf(" Item\t\tQty\tPrice\n");
    dashesLine();
    if (book_qty > 0) {
      printf(" Book\t\t%i\t%i\n", book_qty, book_total);
    }
    if (pencil_qty > 0) {
      printf(" Pencil\t\t%i\t%i\n", pencil_qty, pencil_total);
    }
    if (rubber_qty > 0) {
      printf(" Rubber\t\t%i\t%i\n", rubber_qty, rubber_total);
    }

    dashesLine();
    printf("\n Totals: \t%i\n", total);
    printf(" Cash: \t\t%i\n", cash);
    printf(" Change: \t%i\n", change);
    printf("\n\n");
    printf(" Total Items: \t%i\n", total_items);
    dashesLine();
    printf(" Served by: \tCS50x Bot\n");
    dashesLine();
    printf(".. Thank you for shopping with us ..\n");
    dashesLineSpecial();
  }
}

void showItems(void) {
  printf("Available Items\n");
  starsLine();
  printf(" 1. Exercise Book @ KES 80\n");
  printf(" 2. Pencil @ KES 25\n");
  printf(" 3. Rubber @ KES 20\n");
}

int selectItem(void) {
  int n;
  do {
    n = get_int("\nSelect item [Type 0 to exit]: ");
    if(n < 0 || n > 3) {
      printf("Invalid. Try again!\n");
    }
  } while (n < 0 || n > 3);

  return n;
}

int getCash(int t) {
  int c;
  do {
    c = get_int("\nCash: ");
    if(c < t) {
      printf("Cash should be more or equal to Total purchase...");
    }
  } while (c < t);

  return c;
}

void showHeader(void){
  printf("\n*** CS50x Mini-Shop ***\n");
  printf("... WELCOME ...\n\n");
}
void starsLine(void){
  printf("******************\n");
}
void dashesLine(void){
  printf("----------------------------------------------\n");
}
void dashesLineSpecial(void){
  printf("==============================================\n");
}
