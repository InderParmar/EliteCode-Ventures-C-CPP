
#ifndef _SEMIDETACHEDHOUSE_H_ // If the variable _COMMON_H_ does not exist  //_FILENAMEINCAPITALS_H_
#define _SEMIDETACHEDHOUSE_H_ // Make the variable _COMMON_H_ exist
#define MAX_STR 32
#define NUM_SEMIDETACHEDHOUSES 5
#include <stdio.h>

struct SemiDetachedHouses
{
    char address[MAX_STR];
    int number_of_rooms;
    int number_of_bathrooms;
    double purchase_price;
    double monthly_rent;
    double monthly_utilities;
    double monthly_property_tax;
    double monthly_earnings;
    double ROI;
    double current_value;
    double capital_gains;
};

void CalculateMonthlyEarningsForSemiDetachedHouse(struct SemiDetachedHouses* semiDetachedHouses);
void CalculateROIForSemiDetachedHouse(struct SemiDetachedHouses* semiDetachedHouses);
void CalculateCurrentValueForSemiDetachedHouse(struct SemiDetachedHouses* semiDetachedHouses);
void CalculateCapitalGainsForSemiDetachedHouse(struct SemiDetachedHouses* semiDetachedHouses);

#endif // _COMMON_H_ //End of the #ifndef block