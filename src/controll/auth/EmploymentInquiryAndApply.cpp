#include "EmploymentInquiryAndApply.h"

/**
 * WriterName: 김재윤
 * Description: EmploymentCollection에서 채용정보를 얻기위한 포인터
 * WriteTime: 2023/05/25
 */

EmploymentInquiryAndApply::EmploymentInquiryAndApply(EmploymentCollection* EmploymentCollection) : Employment_collection(EmploymentCollection) {}

/**
* WriterName: 김재윤
* Description:  Employment_collection에서 채용 정보 반환 함수
* WriteTime: 2023/05/25
* @return: [string 회사이름 사업자번호]
 */

string EmploymentInquiryAndApply::Companyinfo() {
	return Employment_collection->get_Employment()->get_Companyinfo();
}
/**
* WriterName: 김재윤
* Description:  Employment_collection에서 채용 정보 반환 함수
* WriteTime: 2023/05/25
* @return: [string 날짜]
 */
string EmploymentInquiryAndApply::EmploymentDate() {
	return Employment_collection->get_Employment()->get_Date();
}
/**
* WriterName: 김재윤
* Description:  Employment_collection에서 채용 정보 반환 함수
* WriteTime: 2023/05/25
* @return: [string 인원수]
 */
string EmploymentInquiryAndApply::EmploymentNumberPeople() {
	return Employment_collection->get_Employment()->get_NumberPeople();
}
/**
* WriterName: 김재윤
* Description:  Employment_collection에서 채용 정보 반환 함수
* WriteTime: 2023/05/25
* @return: [string 업무]
 */
string EmploymentInquiryAndApply::EmploymentWork() {
	return Employment_collection->get_Employment()->get_work();
}