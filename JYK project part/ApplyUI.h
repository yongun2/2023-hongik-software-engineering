#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_APPLYUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_APPLYUI_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "EmploymentCollection.h"

using namespace std;

#define MAX_STRING 32

class ApplyUI {
private:
	FILE* input_file_pointer;
	FILE* output_file_pointer;
	EmploymentCollection* employment_control;

public:
	ApplyUI(FILE* in_fp, FILE* out_fp, EmploymentCollection* ec);

	void select_apply();
	void check_apply();
};

#endif