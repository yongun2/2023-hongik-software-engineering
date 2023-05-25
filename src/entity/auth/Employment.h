#define MAX_STRING 32
#include <iostream>
#include <string>

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_Employment_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_Employment_H

using std::string;

/**
 * WriterName: �ǿ���
 * Description:  Employment�� ä������ ���� �� ��ȯ
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
    * WriterName: �ǿ���
    * Description: ȸ���̸� ������ȣ�� ��ȯ
    * WriteTime: 2023/05/25
    * @return: [string Companyinfo ȸ���̸� ����ڹ�ȣ�� ��ȯ]
    */
    string get_Companyinfo() const;


    /**
    * WriterName: �ǿ���
    * Description: ������ ��ȯ
    * WriteTime: 2023/05/25
    * @return: [string work ������ ��ȯ]
    */

    string get_work() const;


    /**
    * WriterName: �ǿ���
    * Description: �ο��� ��ȯ
    * WriteTime: 2023/05/25
    * @return: [string NumberPeople �ο��� ��ȯ]
    */


    string get_NumberPeople() const;

    /**
    * WriterName: �ǿ���
    * Description: �������� ��ȯ
    * WriteTime: 2023/05/25
    * @return: [string work �������� ��ȯ]
    */

    string get_Date() const;



};
#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_Employment_H