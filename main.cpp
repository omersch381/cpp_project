#include <iostream>
using namespace std;

#include "Guard.h"
#include "Company.h"

int main()
{
    Company c;
    char* workingDays[] = {"Sunday", "Monday"};
    c.addGuard(Guard(0, "Guard", new Date(1,1,1970), new Date(1,1,2020), 10000, 0, workingDays, "07", new Pistol(29)));
    // c.addCleaner();
    // c.addEngineer();
    // c.addManager();
    return 0;
}