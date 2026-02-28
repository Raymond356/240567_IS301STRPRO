#include <stdio.h>

#define TV_PRICE  400.00
#define MONITOR_PRICE  220.00
#define FLASH_PRICE 35.20
#define HARD_PRICE 150.00
#define PRINTER_PRICE 300.00
#define TAX_RATE 0.0835

int main() {

    int tvQty, monitorQty, flashQty, hardQty, printerQty;

    float tvTotal, monitorTotal, flashTotal, hardTotal, printerTotal;
    float subtotal, tax, total;

    // User Input
    printf("How Many TVs Were Sold? ");
    scanf("%d", &tvQty);

    printf("How Many Monitors Were Sold? ");
    scanf("%d", &monitorQty);

    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &flashQty);

    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &hardQty);

    printf("How Many Deskjet Printers Were Sold? ");
    scanf("%d", &printerQty);

    // Calculations
    tvTotal = tvQty * TV_PRICE;
    monitorTotal = monitorQty * MONITOR_PRICE;
    flashTotal = flashQty * FLASH_PRICE;
    hardTotal = hardQty * HARD_PRICE;
    printerTotal = printerQty * PRINTER_PRICE;

    subtotal = tvTotal + monitorTotal + flashTotal + hardTotal + printerTotal;
    tax = subtotal * TAX_RATE;
    total = subtotal + tax;

    // Output
    printf("\nQTY  DESCRIPTION        UNIT PRICE   TOTAL PRICE\n");
    printf("-----------------------------------------------------------\n");

    printf("%-4d TV                 %8.2f   %10.2f\n", tvQty, TV_PRICE, tvTotal);
    printf("%-4d Monitor            %8.2f   %10.2f\n", monitorQty, MONITOR_PRICE, monitorTotal);
    printf("%-4d Flash Drive        %8.2f   %10.2f\n", flashQty, FLASH_PRICE, flashTotal);
    printf("%-4d Hard Drive         %8.2f   %10.2f\n", hardQty, HARD_PRICE, hardTotal);
    printf("%-4d Deskjet Printer    %8.2f   %10.2f\n", printerQty, PRINTER_PRICE, printerTotal);

    printf("-----------------------------------------------------------\n");
    printf("Subtotal: %37.2f\n", subtotal);
    printf("Tax:      %37.2f\n", tax);
    printf("Total:    %37.2f\n", total);
    printf("-----------------------------------------------------------\n");

    return 0;
}