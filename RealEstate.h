
#ifndef _REALESTATE_H_  //If the variable _COMMON_H_ does not exist  //_FILENAMEINCAPITALS_H_
#define _REALESTATE_H_  //Make the variable _COMMON_H_ exist
#define MAX_STR 32
#define NUM_UNITS 5
#include <stdio.h>

struct RealEstateCompany {
	char name[MAX_STR];
	char address[MAX_STR];
    struct Apartments apartment[NUM_UNITS];
    struct Townhouses townhouses[NUM_UNITS];
    struct SemiDetachedHouses semiDetachedHouses[NUM_UNITS];

    double monthly_earnings_for_apartments;
    double ROI_for_apartments;
    double current_value_for_apartments;
    double capital_gains_for_apartments;
    
    double monthly_earnings_for_townhouses;
    double ROI_for_townhouses;
    double current_value_for_townhouses;
    double capital_gains_for_townhouses;

    double monthly_earnings_for_semidetachedhouses;
    double ROI_for_semidetachedhouses;
    double current_value_for_semidetachedhouses;
    double capital_gains_for_semidetachedhouses;

};

void CalculateForApartments(struct RealEstateCompany* realEstateCompany);
void CalculateForTownhouses(struct RealEstateCompany* realEstateCompany);
void CalculateForSemiDetachedHouses(struct RealEstateCompany* realEstateCompany);
#endif// _COMMON_H_ //End of the #ifndef block
