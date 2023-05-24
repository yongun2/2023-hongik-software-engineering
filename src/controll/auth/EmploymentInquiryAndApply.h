#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTINQUIRYANDAPPLY_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTINQUIRYANDAPPLY_H

#include <vector>
#include "../../entity/auth/EmploymentCollection.h"
using std::vector;

class EmploymentInquiryAndApply {
private:
    EmploymentCollection* Employment_collection;
public:

    explicit EmploymentInquiryAndApply(EmploymentCollection* EmploymentCollection);

    string Companyinfo();

    string EmploymentDate();

    string EmploymentNumberPeople();

    string EmploymentWork();

};
#endif 
