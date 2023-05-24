#include <vector>
#include "Employment.h"

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTCOLLETION_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTCOLLETION_H

using std::vector;
class EmploymentCollection {
    vector<Employment*> Employment_repository;

public:

    void add_Employment(Employment* new_Employment);

    Employment* get_Employment();
};
#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTCOLLETION_H
