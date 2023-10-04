#include "Functionalities.h"
#include "type.h"
#include "Vehicle.h"

void CreateObjects(Vehicle *container[3])
{
    container[0] = new Vehicle("v101", "vivek", type::MARUTHI, 56.0f);
    container[1] = new Vehicle("v102", "Sri", type::SUZUKI);
    container[2] = new Vehicle("v103", "Nithin", type::SWIFT, 87.4f );
}

float AverageofPrize(Vehicle *container[3])
{
    float total = 0.0f;
    for(int i =0; i<3; i++)
    {
        total += (container[i])->getPrice();
    }
    return total/3;
}
