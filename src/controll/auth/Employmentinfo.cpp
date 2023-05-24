#include "Employmentinfo.h"


Employmentinfo::Employmentinfo(EmploymentCollection* EmploymentCollection) : Employment_collection(EmploymentCollection){}


string Employmentinfo::EmploymentDate() {
	return Employment_collection->get_Employment()->get_Date();
}

string Employmentinfo::EmploymentNumberPeople() {
	return Employment_collection->get_Employment()->get_NumberPeople();
}

string Employmentinfo::EmploymentWork() {
	return Employment_collection->get_Employment()->get_work();
}