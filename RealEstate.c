#include <stdio.h>
#include <stdbool.h>
#define INTEREST_RATE 0.05

#include "Apartments.h"
#include "Townhouse.h"
#include "Semidetachedhouse.h"
#include "RealEstate.h"

void CalculateMonthlyEarningsForApartment(struct Apartments* apartments)
{
   // monthly earnings = monthly rent - monthly condo fees.
    apartments->monthly_earnings = apartments->monthly_rent - apartments->monthly_condo_fees;
}
void CalculateROIForApartment(struct Apartments* apartments)
{
    //return on investment (percent) = 100 x 12 x monthly earnings / purchase price.
    apartments->ROI = 100 * 12 * apartments->monthly_earnings/ apartments->purchase_price;

}
void CalculateCurrentValueForApartment(struct Apartments* apartments)
{
    //current value = 12 x monthly earnings / interest rate. The interest rate is hard-coded to 5% (or 0.05).
    apartments->current_value = 12 * apartments->monthly_earnings / INTEREST_RATE;

}
void CalculateCapitalGainsForApartment(struct Apartments* apartments)
{
    //capital gains = current value - purchase price.
    apartments->capital_gains = apartments->current_value - apartments->purchase_price;
}

void CalculateMonthlyEarningsForTownhouse(struct Townhouses* townhouses)
{
townhouses->monthly_earnings1 = townhouses->monthly_rent - townhouses->monthly_utilities - townhouses->monthly_condo_fees - townhouses->monthly_property_tax ;
}
void CalculateROIForTownhouse(struct Townhouses* townhouses)
{
    townhouses->ROI = 100 * 12* townhouses->monthly_earnings1 / townhouses->purchase_price;
}
void CalculateCurrentValueForTownhouse(struct Townhouses* townhouses)
{
    townhouses->current_value = 12 * townhouses->monthly_earnings1 / INTEREST_RATE;
}
void CalculateCapitalGainsForTownhouse(struct Townhouses* townhouses)
{
    townhouses->capital_gains = townhouses->current_value - townhouses->purchase_price;
}

void CalculateMonthlyEarningsForSemiDetachedHouse(struct SemiDetachedHouses* semiDetachedHouses)
{
    semiDetachedHouses->monthly_earnings = semiDetachedHouses->monthly_rent - semiDetachedHouses->monthly_utilities - semiDetachedHouses->monthly_property_tax;
}
void CalculateROIForSemiDetachedHouse(struct SemiDetachedHouses* semiDetachedHouses)
{
    semiDetachedHouses->ROI = 100 * 12 * semiDetachedHouses->monthly_earnings / semiDetachedHouses->purchase_price;
}
void CalculateCurrentValueForSemiDetachedHouse(struct SemiDetachedHouses* semiDetachedHouses)
{
    semiDetachedHouses->current_value = 12 * semiDetachedHouses->monthly_earnings / INTEREST_RATE;
}
void CalculateCapitalGainsForSemiDetachedHouse(struct SemiDetachedHouses* semiDetachedHouses)
{
    semiDetachedHouses->capital_gains = semiDetachedHouses->current_value - semiDetachedHouses->purchase_price;
}


void CalculateForApartments(struct RealEstateCompany* realEstateCompany)
{
for (int i = 0; i < NUM_UNITS; i++)
{
realEstateCompany->monthly_earnings_for_apartments += realEstateCompany->apartment[i].monthly_earnings;
realEstateCompany->ROI_for_apartments += realEstateCompany->apartment[i].ROI;
realEstateCompany->current_value_for_apartments += realEstateCompany->apartment[i].current_value;
realEstateCompany->capital_gains_for_apartments += realEstateCompany->apartment[i].capital_gains;
}

}
void CalculateForTownhouses(struct RealEstateCompany* realEstateCompany)
{
for (int i = 0; i < NUM_UNITS; i++)
{
realEstateCompany->monthly_earnings_for_townhouses += realEstateCompany->townhouses[i].monthly_earnings1;
realEstateCompany->ROI_for_townhouses += realEstateCompany->townhouses[i].ROI;
realEstateCompany->current_value_for_townhouses += realEstateCompany->townhouses[i].current_value;
realEstateCompany->capital_gains_for_townhouses += realEstateCompany->townhouses[i].capital_gains;
}
}
void CalculateForSemiDetachedHouses(struct RealEstateCompany* realEstateCompany)
{
for (int i = 0; i < NUM_UNITS; i++)
{
realEstateCompany->monthly_earnings_for_semidetachedhouses += realEstateCompany->semiDetachedHouses[i].monthly_earnings;
realEstateCompany->ROI_for_semidetachedhouses += realEstateCompany->semiDetachedHouses[i].ROI;
realEstateCompany->current_value_for_semidetachedhouses += realEstateCompany->semiDetachedHouses[i].current_value;
realEstateCompany->capital_gains_for_semidetachedhouses += realEstateCompany->semiDetachedHouses[i].capital_gains;
}
}
