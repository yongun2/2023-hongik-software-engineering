#include "EmploymentCollection.h"


void EmploymentCollection::add_Employment(Employment* new_Employment) {
    Employment_repository.push_back(new_Employment);

    
      
}

Employment* EmploymentCollection::get_Employment() {
  
    return Employment_repository[0];
}
