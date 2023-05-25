#include "EmploymentInquiryAndApply.h"

/**
 * WriterName: ������
 * Description: EmploymentCollection���� ä�������� ������� ������
 * WriteTime: 2023/05/25
 */

EmploymentInquiryAndApply::EmploymentInquiryAndApply(EmploymentCollection* EmploymentCollection) : Employment_collection(EmploymentCollection) {}

/**
* WriterName: ������
* Description:  Employment_collection���� ä�� ���� ��ȯ �Լ�
* WriteTime: 2023/05/25
* @return: [string ȸ���̸� ����ڹ�ȣ]
 */

string EmploymentInquiryAndApply::Companyinfo() {
	return Employment_collection->get_Employment()->get_Companyinfo();
}
/**
* WriterName: ������
* Description:  Employment_collection���� ä�� ���� ��ȯ �Լ�
* WriteTime: 2023/05/25
* @return: [string ��¥]
 */
string EmploymentInquiryAndApply::EmploymentDate() {
	return Employment_collection->get_Employment()->get_Date();
}
/**
* WriterName: ������
* Description:  Employment_collection���� ä�� ���� ��ȯ �Լ�
* WriteTime: 2023/05/25
* @return: [string �ο���]
 */
string EmploymentInquiryAndApply::EmploymentNumberPeople() {
	return Employment_collection->get_Employment()->get_NumberPeople();
}
/**
* WriterName: ������
* Description:  Employment_collection���� ä�� ���� ��ȯ �Լ�
* WriteTime: 2023/05/25
* @return: [string ����]
 */
string EmploymentInquiryAndApply::EmploymentWork() {
	return Employment_collection->get_Employment()->get_work();
}