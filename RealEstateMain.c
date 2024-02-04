// RealEstateMain.c - main program for real estate companies

// 02-Mar-21  M. Watler         Created

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "RealEstate.c"
#include "Apartments.h"
#include "Townhouse.h"
#include "Semidetachedhouse.h"
#include "RealEstate.h"
#define MAX_STR 32
#define NUM_UNITS 5
int main(void)
{
    // Read the data for all companies from a file

struct RealEstateCompany company = {0}; // Zero-initialize all members
    FILE *fp = fopen("Apartments.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1; // or handle the error as appropriate
    }
    for (int i = 0; i < NUM_UNITS; ++i)
    {

        fscanf(fp, "%[^\n]s", company.apartment[i].address);
        fscanf(fp, "%d", &company.apartment[i].number_of_rooms);
        fscanf(fp, "%d", &company.apartment[i].number_of_bathrooms);
        fscanf(fp, "%lf", &company.apartment[i].purchase_price);
        fscanf(fp, "%lf", &company.apartment[i].monthly_rent);
        fscanf(fp, "%lf", &company.apartment[i].monthly_condo_fees);
        while (fgetc(fp) != '\n')
            ; // clear the file buffer before the next fscanf()
    }
    fclose(fp);

    // Retrieve data for townhouses
    fp = fopen("Townhouses.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1; // or handle the error as appropriate
    }
    for (int i = 0; i < 5; ++i)
    {
        fscanf(fp, "%[^\n]s", company.townhouses[i].address);
        fscanf(fp, "%d", &company.townhouses[i].number_of_rooms);
        fscanf(fp, "%d", &company.townhouses[i].number_of_bathrooms);
        fscanf(fp, "%lf", &company.townhouses[i].purchase_price);
        fscanf(fp, "%lf", &company.townhouses[i].monthly_rent);
        fscanf(fp, "%lf", &company.townhouses[i].monthly_utilities);
        fscanf(fp, "%lf", &company.townhouses[i].monthly_condo_fees);
        fscanf(fp, "%lf", &company.townhouses[i].monthly_property_tax);
        while (fgetc(fp) != '\n')
            ; // clear the file buffer before the next fscanf()
    }
    fclose(fp);
    // Retrieve data for semi-detached houses
    fp = fopen("SemiDetachedHouses.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1; // or handle the error as appropriate
    }
    for (int i = 0; i < 5; ++i)
    {
        fscanf(fp, "%[^\n]s", company.semiDetachedHouses[i].address);
        fscanf(fp, "%d", &company.semiDetachedHouses[i].number_of_rooms);
        fscanf(fp, "%d", &company.semiDetachedHouses[i].number_of_bathrooms);
        fscanf(fp, "%lf", &company.semiDetachedHouses[i].purchase_price);
        fscanf(fp, "%lf", &company.semiDetachedHouses[i].monthly_rent);
        fscanf(fp, "%lf", &company.semiDetachedHouses[i].monthly_utilities);
        fscanf(fp, "%lf", &company.semiDetachedHouses[i].monthly_property_tax);
        while (fgetc(fp) != '\n')
            ; // clear the file buffer before the next fscanf()
    }
    fclose(fp);
    for (int i = 0; i < NUM_UNITS; i++)
    {
        CalculateMonthlyEarningsForApartment(&company.apartment[i]);
        CalculateROIForApartment(&company.apartment[i]);
        CalculateCurrentValueForApartment(&company.apartment[i]);
        CalculateCapitalGainsForApartment(&company.apartment[i]);

        CalculateMonthlyEarningsForTownhouse(&company.townhouses[i]);
        CalculateROIForTownhouse(&company.townhouses[i]);
        CalculateCurrentValueForTownhouse(&company.townhouses[i]);
        CalculateCapitalGainsForTownhouse(&company.townhouses[i]);

        CalculateMonthlyEarningsForSemiDetachedHouse(&company.semiDetachedHouses[i]);
        CalculateROIForSemiDetachedHouse(&company.semiDetachedHouses[i]);
        CalculateCurrentValueForSemiDetachedHouse(&company.semiDetachedHouses[i]);
        CalculateCapitalGainsForSemiDetachedHouse(&company.semiDetachedHouses[i]);
    }
    CalculateForApartments(&company);
    CalculateForTownhouses(&company);
    CalculateForSemiDetachedHouses(&company);
    strcpy(company.name, "Brookfield Asset Management");
    strcpy(company.address, "11 Yonge Street");

    printf("The following are financial stats for %s, %s.\n", company.name, company.address);
    printf("For the apartments, the monthly earnings are $%.2lf, the roi is %.2lf%%,\n",
           company.monthly_earnings_for_apartments, company.ROI_for_apartments/5);
    printf("the total value is $%.2lf and the capital gains are $%.2lf \n",
           company.current_value_for_apartments, company.capital_gains_for_apartments);

    printf("For the townhouses, the monthly earnings are $%.2lf, the roi is %.2lf%%,\n",
           company.monthly_earnings_for_townhouses, company.ROI_for_townhouses/5);
    printf("the total value is $%.2lf and the capital gains are $%.2lf \n",
           company.current_value_for_townhouses, company.capital_gains_for_townhouses);

    printf("For the semidetached houses, the monthly earnings are $%.2lf, the roi is %.2lf%%,\n",
           company.monthly_earnings_for_semidetachedhouses, company.ROI_for_semidetachedhouses/5);
    printf("the total value is $%.2lf and the capital gains are $%.2lf \n",
           company.current_value_for_semidetachedhouses, company.capital_gains_for_semidetachedhouses);

    printf("Press enter to exit...");
    getchar(); // Wait for key press */
    return 0;
}