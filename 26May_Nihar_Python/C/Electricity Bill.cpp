//PGVCL Electricity Bill
#include<stdio.h>
main()
{
    char cname[50], meterNo[20], billMonth[20], dueDate[15];
    long long int consumerNo;
    long int billNo;
    int prevReading, currReading, units;
    float fixedCharge, energyCharge, duty, finalAmount;
    printf("Enter Consumer Name: ");
    scanf(" %[^\n]", cname);
    printf("Enter Consumer Number: ");
    scanf("%lld", &consumerNo);
    printf("Enter Meter Number: ");
    scanf("%s", meterNo);
    printf("Enter Bill Number: ");
    scanf("%ld", &billNo);
    printf("Enter Bill Month: ");
    scanf("%s", billMonth);
    printf("Enter Due Date (DD-MM-YYYY): ");
    scanf("%s", dueDate);
    printf("Enter Previous Reading: ");
    scanf("%d", &prevReading);
    printf("Enter Current Reading: ");
    scanf("%d", &currReading);
    units = currReading - prevReading;
    fixedCharge = 100.00;
    if(units <= 100)
    {
        energyCharge = units * 3.00;
    }
    else if(units <= 200)
    {
        energyCharge = (100 * 3.00) + ((units - 100) * 4.50);
    }
    else if(units <= 300)
    {
        energyCharge = (100 * 3.00) + (100 * 4.50)
                     + ((units - 200) * 6.00);
    }
    else
    {
        energyCharge = (100 * 3.00) + (100 * 4.50)
                     + (100 * 6.00)
                     + ((units - 300) * 7.50);
    }
    duty = energyCharge * 0.05;
    finalAmount = fixedCharge + energyCharge + duty;
    printf("\n=====================================================\n");
    printf("\t\tPGVCL ELECTRICITY BILL\n");
    printf("=====================================================\n");
    printf("Consumer Name       : %s\n", cname);
    printf("Consumer Number     : %lld\n", consumerNo);
    printf("Meter Number        : %s\n", meterNo);
    printf("Bill Number         : %ld\n", billNo);
    printf("Bill Month          : %s\n", billMonth);
    printf("Due Date            : %s\n", dueDate);
    printf("-----------------------------------------------------\n");
    printf("Previous Reading    : %d kWh\n", prevReading);
    printf("Current Reading     : %d kWh\n", currReading);
    printf("Units Consumed      : %d kWh\n", units);
    printf("-----------------------------------------------------\n");
    printf("Fixed Charge        : Rs. %.2f\n", fixedCharge);
    printf("Energy Charge       : Rs. %.2f\n", energyCharge);
    printf("Electricity Duty    : Rs. %.2f\n", duty);
    printf("-----------------------------------------------------\n");
    printf("Final Amount Payable: Rs. %.2f\n", finalAmount);
    printf("=====================================================");
}
