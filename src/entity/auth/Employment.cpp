#include "Employment.h"


/**
 * WriterName: 권오선
 * Description:  Employment의 채용정보 정의 및 반환
 * WriteTime: 2023/05/25
 */

Employment::Employment(const char* Companyinfo, const char* work, const char* NumberPeople, const char* Date) {
    this->Companyinfo = Companyinfo;
    this->work = work;
    this->NumberPeople = NumberPeople;
    this->Date = Date;
}

/**
* WriterName: 권오선
* Description: 회사이름 사원사번호를 반환
* WriteTime: 2023/05/25
* @return: [string Companyinfo 회사이름 사업자번호를 반환]
*/

string Employment::get_Companyinfo() const{
    return this->Companyinfo;
}

/**
* WriterName: 권오선
* Description: 업무를 반환
* WriteTime: 2023/05/25
* @return: [string work 업무를 반환]
*/

string Employment::get_work() const {
    return this->work;
}

/**
* WriterName: 권오선
* Description: 인원을 반환
* WriteTime: 2023/05/25
* @return: [string NumberPeople 인원을 반환]
*/

string Employment::get_NumberPeople() const {
    return this->NumberPeople;
}

/**
* WriterName: 권오선
* Description: 마감일을 반환
* WriteTime: 2023/05/25
* @return: [string work 마감일을 반환]
*/

string Employment::get_Date() const {
    return this->Date;
}

Employment::~Employment() {

}