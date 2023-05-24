#include "EmploymentInquiryAndApply.h"


EmploymentInquiryAndApply::EmploymentInquiryAndApply(EmploymentCollection* EmploymentCollection) : Employment_collection(EmploymentCollection) {}


string EmploymentInquiryAndApply::Companyinfo() {
	return Employment_collection->get_Employment()->get_Companyinfo();
}

string EmploymentInquiryAndApply::EmploymentDate() {
	return Employment_collection->get_Employment()->get_Date();
}

string EmploymentInquiryAndApply::EmploymentNumberPeople() {
	return Employment_collection->get_Employment()->get_NumberPeople();
}

string EmploymentInquiryAndApply::EmploymentWork() {
	return Employment_collection->get_Employment()->get_work();
}