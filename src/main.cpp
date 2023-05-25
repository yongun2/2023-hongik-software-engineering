
#include <vector>
#include "boundary/auth/RegisterUI.h"
#include "controll/auth/Withdraw.h"
#include "boundary/auth/WithdrawalUI.h"
#include "controll/auth/Login.h"
#include "boundary/auth/LoginUI.h"
#include "controll/auth/Logout.h"
#include "boundary/auth/LogoutUI.h""
#include "boundary/auth/EmploymentInquiryAndApplyUI.h"
#include "boundary/auth/EmploymentinfoUI.h"
#include "boundary/auth/EmploymentWriteUI.h"
#include "controll/auth/EmploymentInquiryAndApply.h"
#include "controll/auth/EmploymentWrite.h"
#include "controll/auth/Employmentinfo.h"


using std::vector;
// �Լ� ����
void doTask();

/** ������ ��η� ���� �ϸ� �˴ϴ�.**/
#define INPUT_FILE_NAME "/Users/ko/Desktop/src/input.txt"
#define OUTPUT_FILE_NAME "/Users/ko/Desktop/src/output.txt"

/**
 * WriterName: 계용운
 * Description: 메인 함수, 비즈니스 로직 실행하는 함수 실행
 * WriteTime: 2023 05 26 02:00
 * @return: 0 정상 종료
 */
int main() {

    doTask();

    return 0;

}
/**
 * WriterName: 계용운
 * Description: 파일포인터 초기화 및 비즈니스 로직 실행
 * WriteTime: 2023 05 26 02:00
 */
void doTask() {

    /**
     * ���� ����� ����
     */
    FILE *in_fp = fopen(INPUT_FILE_NAME, "r");
    FILE *out_fp = fopen(OUTPUT_FILE_NAME, "w");

    /**
     * �α��� / ȸ������ / �α׾ƿ� / Ż��
     */
    //entity

    MemberCollection *member_collection = new MemberCollection();
    // control
    Register *register_control = new Register(member_collection);
    Login *login_control = new Login(member_collection);
    Logout *logout_control = new Logout(member_collection);
    Withdraw *withdraw_control = new Withdraw(member_collection);
    // boundary
    RegisterUI *register_ui = new RegisterUI(in_fp, out_fp, register_control);
    LoginUI *login_ui = new LoginUI(in_fp,out_fp, login_control);
    LogoutUI *logout_ui = new LogoutUI(out_fp, logout_control);
    WithdrawalUI *withdraw_ui = new WithdrawalUI(out_fp, withdraw_control);


    EmploymentCollection* Employment_collection = new EmploymentCollection();
    // control
    Employmentinfo* EmploymentInfo = new  Employmentinfo(Employment_collection);
    EmploymentWrite* Employmentwrite = new  EmploymentWrite(Employment_collection);
    EmploymentInquiryAndApply* EmploymentInquiryAndapply = new  EmploymentInquiryAndApply(Employment_collection);
    // boundary
    EmploymentWriteUI* EmploymentWrite_ui = new EmploymentWriteUI(member_collection,in_fp, out_fp, Employmentwrite);
    EmploymentinfoUI* Employmentinfo_ui = new EmploymentinfoUI(out_fp, EmploymentInfo);
    EmploymentInquiryAndApplyUI* EmploymentInquiryAndApply_ui = new EmploymentInquiryAndApplyUI(in_fp, out_fp, EmploymentInquiryAndapply);

    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit) {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1) {
            case 1: {
                switch (menu_level_2) {
                    case 1: {
                        /** 1.1 ȸ�� ���� **/
                        register_ui->select_register();
                        break;
                    }
                    case 2: {
                        /** 1.2 ȸ�� Ż�� **/
                        withdraw_ui->select_withdraw();
                        break;
                    }
                }
                break;
            }
            case 2: {
                switch (menu_level_2) {
                    case 1: {
                        /** 2.1 �α��� **/
                        login_ui->select_login();
                        break;
                    }
                    case 2: {
                        /** 2.2 �α׾ƿ� **/
                        logout_ui->select_logout();
                        break;
                    }
                }
                break;
            }
            case 3: {
                switch (menu_level_2) {
                    case 1: {
                        /** 3.1 ä�� ���� ��� **/
                        EmploymentWrite_ui->select_register();
                        break;
                    }
                    case 2: {
                        /** 3.2 ��ϵ� ä�� ���� ��ȸ **/
                        Employmentinfo_ui->Employment_View();
                        break;
                    }
                }
                break;
            }
            case 4: {
                switch (menu_level_2) {
                    case 1: {
                        /** 4.1 ä�� ���� �˻� **/
                        EmploymentInquiryAndApply_ui->Employment_View();
                        break;
                    }
                    case 2: {
                        /** 4.2 ä�� ���� **/
                        break;
                    }
                    case 3: {
                        /** 4.3 ���� ���� ��ȸ **/
                        break;
                    }
                    case 4: {
                        /** 4.4 ���� ��� **/
                        break;
                    }
                }
                break;
            }
            case 5: {
                switch (menu_level_2) {
                    case 1: {
                        /** 5.1 ���� ���� ��� **/
                        break;
                    }
                }
                break;
            }
            case 6: {
                switch (menu_level_2) {
                    case 1: {
                        /** 6.1 ���� **/
                        // �ؽ�Ʈ ���� ��� ����
                        fprintf(out_fp, "6.1. ����\n");

                        // ���� �Ҵ� ����
                        delete register_ui;
                        delete register_control;
                        delete withdraw_ui;
                        delete withdraw_control;
                        delete member_collection;

                        // ���� ������ �ݱ�
                        fclose(in_fp);
                        fclose(out_fp);

                        // ���� �÷��� Ȱ��ȭ
                        is_program_exit = 1;
                        break;
                    }
                }
                break;
            }
        }
    }
}
