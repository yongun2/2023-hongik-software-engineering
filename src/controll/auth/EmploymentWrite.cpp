#include "EmploymentWrite.h"

EmploymentWrite::EmploymentWrite(EmploymentCollection* EmploymentCollection) : Employment_collection(EmploymentCollection) {}

void EmploymentWrite::register_Employment(Employment* new_Employment) {
    Employment_collection->add_Employment(new_Employment);
    //return new_Employment->getDate() + " " + new_Employment->getNumberPeople() + " " + new_Employment->getWork();
}