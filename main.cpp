#include <iostream>


using namespace std;

#include "Guard.h"
#include "Company.h"

int main()
{
    Company c;

    char* workingDays[] = {"Sunday", "Monday"};
    const Guard guard(0, "Guard", new Date(1,1,1970),
                      new Date(1,1,2020), 10000, 0, workingDays, "07", new Pistol(29));
    const Cleaner cleaner(1, "Cleaner", new Date(2,1,1970),
                          new Date(1,1,2020), 10000, 0, workingDays);
    const Engineer engineer(0, "Engineer", new Date(1,1,1970),
                            new Date(1,1,2020), 10000, 0, workingDays, "cpp");
    const Manager manager(1, "Manager", new Date(2,1,1970),
                          new Date(1,1,2020), 10000, 0, workingDays,Manager::eDepartment::ENGINEERING);
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

    return 0;
}
