#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTONFO_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTONFO_H

#include <vector>
#include "../../entity/auth/EmploymentCollection.h"
using std::vector;

class Employmentinfo {
private:
    EmploymentCollection * Employment_collection;
public:

    explicit Employmentinfo(EmploymentCollection * EmploymentCollection);

    string EmploymentDate();

    string EmploymentNumberPeople();

    string EmploymentWork();

};
#endif 