add_library(sample_bank_library "bank_account.cpp" "bank_account.h"
"atm.cpp" "atm.h" "customer.h" "customer.cpp")
add_executable(sample_bank_exe "main.cpp" "bank_account.cpp" "atm.cpp" "customer.cpp")