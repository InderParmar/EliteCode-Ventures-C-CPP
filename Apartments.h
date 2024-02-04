/* Each apartment has an address, a number of rooms, a number of bathrooms, a purchase price, monthly rent, monthly condo fees, monthly earnings, annual return on investment, current value, and capital gains.
To determing the performance of each apartment:
monthly earnings = monthly rent - monthly condo fees.
return on investment (percent) = 100 x 12 x monthly earnings / purchase price.
current value = 12 x monthly earnings / interest rate. The interest rate is hard-coded to 5% (or 0.05).
capital gains = current value - purchase price.

 */
#ifndef _APARTMENTS_H_  //If the variable _COMMON_H_ does not exist  //_FILENAMEINCAPITALS_H_
#define _APARTMENTS_H_  //Make the variable _COMMON_H_ exist
#define MAX_STR 32
#define NUM_APARTMENTS 5
#include <stdio.h>

struct Apartments {
	char address[MAX_STR];
	int number_of_rooms;
    int number_of_bathrooms;
    double purchase_price;
    double monthly_rent;
    double monthly_condo_fees;
    double monthly_earnings;
    double ROI;
    double current_value;
    double capital_gains;
};

void CalculateMonthlyEarningsForApartment(struct Apartments* apartments);
void CalculateROIForApartment(struct Apartments* apartments);
void CalculateCurrentValueForApartment(struct Apartments* apartments);
void CalculateCapitalGainsForApartment(struct Apartments* apartments);

#endif// _COMMON_H_ //End of the #ifndef block
