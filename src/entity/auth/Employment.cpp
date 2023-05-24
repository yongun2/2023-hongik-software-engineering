#include "Employment.h"

Employment::Employment(const char* Companyinfo, const char* work, const char* NumberPeople, const char* Date) {
    this->Companyinfo = Companyinfo;
    this->work = work;
    this->NumberPeople = NumberPeople;
    this->Date = Date;
}

string Employment::get_Companyinfo() const{
    return this->Companyinfo;
}

string Employment::get_work() const {
    return this->work;
}

string Employment::get_NumberPeople() const {
    return this->NumberPeople;
}

string Employment::get_Date() const {
    return this->Date;
}

Employment::~Employment() {

}