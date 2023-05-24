#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITE_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITE_H

#include <vector>
#include "../../entity/auth/EmploymentCollection.h"

using std::vector;

class EmploymentWrite {
private:
    EmploymentCollection* Employment_collection;
public:
    explicit EmploymentWrite(EmploymentCollection* EmploymentCollection);

    void register_Employment(Employment* new_Employment);
};
#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITE_H