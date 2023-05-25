#include "Employmentinfo.h"

/**
 * WriterName: 권오선
 * Description: EmploymentCollection에서 채용정보를 얻기위한 포인터 
 * WriteTime: 2023/05/25
 */

Employmentinfo::Employmentinfo(EmploymentCollection* EmploymentCollection) : Employment_collection(EmploymentCollection){}

/**
* WriterName: 권오선
* Description:  Employment_collection에서 특정 채용으로 포인터 반한 후 마감일 정보 포인터 반환 
* WriteTime: 2023/05/25
* @return: [string 마감일]
*/
string Employmentinfo::EmploymentDate() {
	return Employment_collection->get_Employment()->get_Date();
}
/**
* WriterName: 권오선
* Description:  Employment_collection에서 특정 채용으로 포인터 반한 후 인원 정보 포인터 반환
* WriteTime: 2023/05/25
* @return: [string 인원]
*/
string Employmentinfo::EmploymentNumberPeople() {
	return Employment_collection->get_Employment()->get_NumberPeople();
}
/**
* WriterName: 권오선
* Description:  Employment_collection에서 특정 채용으로 포인터 반한 후 업무 정보 포인터 반환
* WriteTime: 2023/05/25
* @return: [string 업무]
*/
string Employmentinfo::EmploymentWork() {
	return Employment_collection->get_Employment()->get_work();
}