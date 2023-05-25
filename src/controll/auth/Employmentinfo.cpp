#include "Employmentinfo.h"

/**
 * WriterName: �ǿ���
 * Description: EmploymentCollection���� ä�������� ������� ������ 
 * WriteTime: 2023/05/25
 */

Employmentinfo::Employmentinfo(EmploymentCollection* EmploymentCollection) : Employment_collection(EmploymentCollection){}

/**
* WriterName: �ǿ���
* Description:  Employment_collection���� Ư�� ä������ ������ ���� �� ������ ���� ������ ��ȯ 
* WriteTime: 2023/05/25
* @return: [string ������]
*/
string Employmentinfo::EmploymentDate() {
	return Employment_collection->get_Employment()->get_Date();
}
/**
* WriterName: �ǿ���
* Description:  Employment_collection���� Ư�� ä������ ������ ���� �� �ο� ���� ������ ��ȯ
* WriteTime: 2023/05/25
* @return: [string �ο�]
*/
string Employmentinfo::EmploymentNumberPeople() {
	return Employment_collection->get_Employment()->get_NumberPeople();
}
/**
* WriterName: �ǿ���
* Description:  Employment_collection���� Ư�� ä������ ������ ���� �� ���� ���� ������ ��ȯ
* WriteTime: 2023/05/25
* @return: [string ����]
*/
string Employmentinfo::EmploymentWork() {
	return Employment_collection->get_Employment()->get_work();
}