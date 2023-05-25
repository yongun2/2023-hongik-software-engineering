#define MAX_STRING 32
#include <iostream>
#include <string>

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_Employment_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_Employment_H

using std::string;

/**
 * WriterName: 권오선
 * Description:  Employment의 채용정보 정의 및 반환
 * WriteTime: 2023/05/25
 */


class Employment {
private:
    string Companyinfo;
    string work;
    string NumberPeople;
    string Date;
public:
    Employment(const char* Companyinfo, const char* work, const char* NumberPeople, const char* Date);

    ~Employment();

    /**
    * WriterName: 권오선
    * Description: 회사이름 사원사번호를 반환
    * WriteTime: 2023/05/25
    * @return: [string Companyinfo 회사이름 사업자번호를 반환]
    */
    string get_Companyinfo() const;


    /**
    * WriterName: 권오선
    * Description: 업무를 반환
    * WriteTime: 2023/05/25
    * @return: [string work 업무를 반환]
    */

    string get_work() const;


    /**
    * WriterName: 권오선
    * Description: 인원을 반환
    * WriteTime: 2023/05/25
    * @return: [string NumberPeople 인원을 반환]
    */


    string get_NumberPeople() const;

    /**
    * WriterName: 권오선
    * Description: 마감일을 반환
    * WriteTime: 2023/05/25
    * @return: [string work 마감일을 반환]
    */

    string get_Date() const;



};
#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_Employment_H