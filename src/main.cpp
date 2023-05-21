
#include <vector>
#include "boundary/auth/RegisterUI.h"
#include "entity/auth/GeneralMember.h"
#include "entity/auth/CompanyMember.h"


using std::vector;
// 함수 선언
void doTask();

/** 본인의 경로로 수정 하면 됩니다.**/
#define INPUT_FILE_NAME "/Users/gyeyong-un/develop/2023-1/software/2023-hongik-software-engineering/src/input.txt"
#define OUTPUT_FILE_NAME "/Users/gyeyong-un/develop/2023-1/software/2023-hongik-software-engineering/src/output.txt"


int main() {

    doTask();

    return 0;

}

void doTask() {

    /**
     * 파일 입출력 변수
     */
    FILE *in_fp = fopen(INPUT_FILE_NAME, "r");
    FILE *out_fp = fopen(OUTPUT_FILE_NAME, "w");

    /**
     * 로그인 / 회원가입 / 로그아웃 / 탈퇴
     */
    //entity
    vector<GeneralMember> general_member_repository;
    vector<CompanyMember> company_member_repository;
    // control
    Register *register_control = new Register(&company_member_repository, &general_member_repository);
    // boundary
    RegisterUI *register_ui = new RegisterUI(in_fp, out_fp, register_control);


    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit) {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1) {
            case 1: {
                switch (menu_level_2) {
                    case 1: {
                        /** 1.1 회원 가입 **/
                        register_ui->select_register();
                        break;
                    }
                    case 2: {
                        /** 1.2 회원 탈퇴 **/
                        break;
                    }
                }
                break;
            }
            case 2: {
                switch (menu_level_2) {
                    case 1: {
                        /** 2.1 로그인 **/
                        break;
                    }
                    case 2: {
                        /** 2.2 로그아웃 **/
                        break;
                    }
                }
                break;
            }
            case 3: {
                switch (menu_level_2) {
                    case 1: {
                        /** 3.1 채용 정보 등록 **/
                        break;
                    }
                    case 2: {
                        /** 3.2 등록된 채용 정보 조회 **/
                        break;
                    }
                }
                break;
            }
            case 4: {
                switch (menu_level_2) {
                    case 1: {
                        /** 4.1 채용 정보 검색 **/
                        break;
                    }
                    case 2: {
                        /** 4.2 채용 지원 **/
                        break;
                    }
                    case 3: {
                        /** 4.3 지원 정보 조회 **/
                        break;
                    }
                    case 4: {
                        /** 4.4 지원 취소 **/
                        break;
                    }
                }
                break;
            }
            case 5: {
                switch (menu_level_2) {
                    case 1: {
                        /** 5.1 지원 정보 통계 **/
                        break;
                    }
                }
                break;
            }
            case 6: {
                switch (menu_level_2) {
                    case 1: {
                        /** 6.1 종료 **/
                        // 텍스트 파일 출력 문구
                        fprintf(out_fp, "6.1. 종료\n");

                        // 동적 할당 정리
                        delete register_ui;
                        delete register_control;

                        // 파일 포인터 닫기
                        fclose(in_fp);
                        fclose(out_fp);

                        // 종료 플래그 활성화
                        is_program_exit = 1;
                        break;
                    }
                }
                break;
            }
        }
    }
}
