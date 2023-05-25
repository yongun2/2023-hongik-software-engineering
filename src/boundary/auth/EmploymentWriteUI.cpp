#include "EmploymentWriteUI.h"

/**
 * WriterName: 권오선
 * Description:  ui로서 입력값과 출력값을 위한 매개변수를 받음
 * WriteTime: 2023/05/25
 */

EmploymentWriteUI::EmploymentWriteUI(MemberCollection* memberCollection,FILE* inputFilePointer, FILE* outputFilePointer, EmploymentWrite* EmploymentWriteControl) : 
    member_collection(memberCollection),input_file_pointer(inputFilePointer), output_file_pointer(outputFilePointer), register_control(EmploymentWriteControl) {}

/**
 * WriterName: 권오선
 * Description: MemberCollection에서 회사회원정보를 가져와서 채용정보외함께 Employment생성 후 EmploymentColletion에 저장 
 * WriteTime: 2023/05/25
 * @return: [void]
 */

void EmploymentWriteUI::select_register() {

    char work[MAX_STRING], NumberPeople[MAX_STRING], Date[MAX_STRING], Companyinfo[MAX_STRING];
   //

    string a= member_collection->get_login_member()->get_detail();
    
    strcpy(Companyinfo, a.c_str());

    fprintf(output_file_pointer, "3.1. 채용 정보 등록 \n");
    
    fscanf(input_file_pointer, "%s %s %s ", work, NumberPeople, Date);
   
    Employment* new_Employment = new Employment(Companyinfo, work, NumberPeople, Date);
   
    register_control->register_Employment(new_Employment);
 
    fprintf(output_file_pointer, "> %s %s %s \n", work, NumberPeople, Date);

}

