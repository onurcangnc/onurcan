#define _CRT_SECURE_NO_WARNINGS
/* Calculate HOP drive pricing and approximate distance that driven for each session.
I used each constant macro data from my driving experiences and default electric data... 
The AVG_SPEED data taken from 2 driving sessions AVERAGE.*/

#define START_FEE 1.99 // Opening Fee.
#define PER_MINUTE 1.69 // Cost that you will pay per minute.
#define CO2_EMS_PERkWh 385.5535 // Carbondioxide emission per kWh in grams.
#define ENG_CONS_PER_H 0.2304 // Energy consumption of HOP scooter in KiloWath per hour.
#define CRB_FT_PT 3.5 // The value of carbon footprint calculated with electricity price.
#include <stdio.h>

int main(void) {

    int Minute;              // How many minutes do you spend time on HOP scooter ? 
    int list = 1;            // Implies that the main variable of the environmental pollution chart.
    double totalCost,        // Total cost for each driving session (openning fee included.)  
           energyCons,       // Total energy consumption of HOP scooter per hour by kilowatt-hour      
           cEms,             // Total CO2 emission per hour in grams.
           cEms2,            // Total CO2 emission per hour in kilograms 
           CFp;              // Carbon Footprint variable that implies your pollution level by using HOP
    
    printf("↓↓↓ Input the 'Duration Time' on HOP session ↓↓↓\n\n");
    scanf("%d", &Minute);

    while (Minute <= 0 || Minute >= 60)     // Looping session for program so as not to stop itself.
    {
        printf("You typed wrong number range !\n\n");     // Wrong choice text.
        printf("Please check it again !\n\n");          
        printf("\nInput the 'Duration Time' on HOP session: "); // How many minutes do you drive HOP scooter.
        scanf("%d\n", &Minute);
    }
    

    printf("\nTotal wasted time on this session in seconds: %d\n\n", Minute * 60);  // print wasted time in seconds.

    totalCost = START_FEE + (PER_MINUTE * Minute);  // Calculation of openning fee of HOP.

    printf("\nYou have to pay %.1lf liras.\n\n", totalCost); // Print total cost of the session.

    energyCons = ENG_CONS_PER_H * Minute; // Calculate the energy consumption by kw.

    printf("\nEnergy consumption by Kilowatt-hour: %.1lf\n\n", energyCons); // Print the energy consumption by kW-hour

    cEms = (CO2_EMS_PERkWh * ENG_CONS_PER_H * Minute / 60); // Calculate the carbon emission by grams
    
    cEms2 = (CO2_EMS_PERkWh / 1000 * ENG_CONS_PER_H * Minute / 60); // Calculate the carbon emission by kilograms

    printf("\nAccording to kWh consumption, you released CO2 in %.0lf grams and %.2lf in kilograms\n\n", cEms, cEms2); // Print the CO2 emission in grams and kilograms. 

    CFp = (PER_MINUTE * Minute) * 0.00243;
    
    // Decide whether your pollution level on environment very low, low, average or extreme.
    if (CFp < 6000)
    {
        printf("\n\n“Very Low” Carbon Footprint Pollution Interval -------->  Under 6000\n\n");
        printf("Your Carbon Footprint status: Very Low\n\n");
    
    } else if (CFp > 6000 && CFp < 15.999)
    {
        printf("\n\n“Low” Carbon Footprint Pollution Interval -------->  (6000 - 15,999)\n");
        printf("Your Carbon Footprint status: Low");
    } else if (CFp > 16.000)
    {
        printf("\n\n“Average” Carbon Footprint Pollution Interval -------->  (16,000 - 22,000)\n");
        printf("Your Carbon Footprint status: Average");
    } else {

        printf("\n\n“Extreme” Carbon Footprint Pollution Value -------->  Greater than 22,000\n");
        printf("Your Carbon Footprint status: Extreme");

    }
        
    return (0);

}