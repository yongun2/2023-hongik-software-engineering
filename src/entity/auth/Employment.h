#define MAX_STRING 32
#include <iostream>
#include <string>

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_Employment_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_Employment_H

using std::string;

class Employment {
private:
    string Companyinfo;
    string work;
    string NumberPeople;
    string Date;
public:
    Employment(const char* Companyinfo, const char* work, const char* NumberPeople, const char* Date);

    ~Employment();

    string get_Companyinfo() const;

    string get_work() const;

    string get_NumberPeople() const;

    string get_Date() const;

    string get_detail() const {
        return "";
    };

};
#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_Employment_H