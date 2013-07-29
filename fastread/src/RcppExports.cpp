// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// read_csv
List read_csv(std::string file, int n, CharacterVector classes);
RcppExport SEXP fastread_read_csv(SEXP fileSEXP, SEXP nSEXP, SEXP classesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        std::string file = Rcpp::as<std::string >(fileSEXP);
        int n = Rcpp::as<int >(nSEXP);
        CharacterVector classes = Rcpp::as<CharacterVector >(classesSEXP);
        List __result = read_csv(file, n, classes);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// read_all_lines_ifstream
void read_all_lines_ifstream(std::string filename, int n);
RcppExport SEXP fastread_read_all_lines_ifstream(SEXP filenameSEXP, SEXP nSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        std::string filename = Rcpp::as<std::string >(filenameSEXP);
        int n = Rcpp::as<int >(nSEXP);
        read_all_lines_ifstream(filename, n);
    }
    return R_NilValue;
END_RCPP
}
// read_all_lines_FILE
void read_all_lines_FILE(std::string filename);
RcppExport SEXP fastread_read_all_lines_FILE(SEXP filenameSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        std::string filename = Rcpp::as<std::string >(filenameSEXP);
        read_all_lines_FILE(filename);
    }
    return R_NilValue;
END_RCPP
}