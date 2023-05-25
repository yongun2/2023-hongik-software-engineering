#include "Employment.h"


/**
 * WriterName: �ǿ���
 * Description:  Employment�� ä������ ���� �� ��ȯ
 * WriteTime: 2023/05/25
 */

Employment::Employment(const char* Companyinfo, const char* work, const char* NumberPeople, const char* Date) {
    this->Companyinfo = Companyinfo;
    this->work = work;
    this->NumberPeople = NumberPeople;
    this->Date = Date;
}

/**
* WriterName: �ǿ���
* Description: ȸ���̸� ������ȣ�� ��ȯ
* WriteTime: 2023/05/25
* @return: [string Companyinfo ȸ���̸� ����ڹ�ȣ�� ��ȯ]
*/

string Employment::get_Companyinfo() const{
    return this->Companyinfo;
}

/**
* WriterName: �ǿ���
* Description: ������ ��ȯ
* WriteTime: 2023/05/25
* @return: [string work ������ ��ȯ]
*/

string Employment::get_work() const {
    return this->work;
}

/**
* WriterName: �ǿ���
* Description: �ο��� ��ȯ
* WriteTime: 2023/05/25
* @return: [string NumberPeople �ο��� ��ȯ]
*/

string Employment::get_NumberPeople() const {
    return this->NumberPeople;
}

/**
* WriterName: �ǿ���
* Description: �������� ��ȯ
* WriteTime: 2023/05/25
* @return: [string work �������� ��ȯ]
*/

string Employment::get_Date() const {
    return this->Date;
}

Employment::~Employment() {

}