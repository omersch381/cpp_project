#include <iostream>

using namespace std;

#include "Guard.h"
#include "Company.h"
#include <string.h>

int main()
{
    Company c;

    // Initialize working days
    char* sunday = strdup("Sunday");
    char* monday = strdup("Monday");
    char* workingDays[] = {sunday, monday};

    Guard guard(0, "Guard", new Date(1,1,1970),
                      new Date(1,1,2020), 10000, 0, workingDays, "07", new Pistol(8));
    Cleaner cleaner(1, "Cleaner", new Date(2,1,1970),
                          new Date(1,1,2020), 10000, 0, workingDays);
    Engineer engineer(0, "Engineer", new Date(1,1,1970),
                            new Date(1,1,2020), 10000, 0, workingDays, "cpp");
    Manager manager(1, "Manager", new Date(2,1,1970),
                          new Date(1,1,2020), 10000, 0, workingDays, Manager::eDepartment::ENGINEERING);

    /* add all employees*/
    c.addGuard(guard);
    c.addCleaner(cleaner);
    c.addEngineer(engineer);
    c.addManager(manager);

    /* show all employees*/
    guard.showEmployee();
    manager.showEmployee();
    cleaner.showEmployee();
    engineer.showEmployee();

    /* update all employees*/
    c.updateGuard(guard);
    c.updateCleaner(cleaner);
    c.updateEngineer(engineer);
    c.updateManager(manager);

    c.showEmployeesWithHighestSalaries();
    c.sendBirthdayCards();
    c.addBonusToOutstandingEngineer(engineer, 10000000);
    c.printDailyShift("Sunday");

    /* remove all employees*/
    c.removeGuard(guard);
    c.removeCleaner(cleaner);
    c.removeEngineer(engineer);
    c.removeManager(manager);

    // delete all heap resources which were allocated on the main
    delete sunday;
    delete monday;

    return 0;
}
