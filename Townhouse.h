
#ifndef _TOWNHOUSE_H_ // If the variable _COMMON_H_ does not exist  //_FILENAMEINCAPITALS_H_
#define _TOWNHOUSE_H_ // Make the variable _COMMON_H_ exist
#define MAX_STR 32
#define NUM_TOWNHOUSES 5
#include <stdio.h>

struct Townhouses
{
    char address[MAX_STR];
    int number_of_rooms;
    int number_of_bathrooms;
    double purchase_price;
    double monthly_rent;
    double monthly_utilities;
    double monthly_condo_fees;
    double monthly_property_tax;
    double monthly_earnings1;
    double ROI;
    double current_value;
    double capital_gains;
};

void CalculateMonthlyEarningsForTownhouse(struct Townhouses* townhouses);
void CalculateROIForTownhouse(struct Townhouses* townhouses);
void CalculateCurrentValueForTownhouse(struct Townhouses* townhouses);
void CalculateCapitalGainsForTownhouse(struct Townhouses* townhouses);

#endif // _COMMON_H_ //End of the #ifndef block