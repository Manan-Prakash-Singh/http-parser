#include "../include/parser_err.h"

const char* _err_str[] = {
    "Invalid Request Line",
    "Incomplete Header",
    "Invalid Version",
    "Not terminated by CRLF",
    "Invalid method",
    "Invalid/No Seperator",
    "Buffer too small. Consider increasing the size.",
    "Content-length too large",
    "Space between header field and :",
    "Expected colon after header field",
    "Field not recognized/supported"
};

int err_num = 0;

const char* err_str(int err_num){
    return _err_str[err_num];
}
