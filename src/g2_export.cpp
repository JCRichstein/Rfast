// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace Rcpp;
using namespace std;
using namespace arma;


List g2Test(NumericMatrix data, int x, int y, IntegerVector cs, IntegerVector dc);
RcppExport SEXP Rfast_g2Test(SEXP dataSEXP,SEXP xSEXP,SEXP ySEXP,SEXP csSEXP,SEXP dcSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cs(csSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dc(dcSEXP);
    __result = g2Test(data,x,y,cs,dc);
    return __result;
END_RCPP
}

List g2Test_univariate_perm(NumericMatrix data, IntegerVector dc, int nperm);
RcppExport SEXP Rfast_g2Test_univariate_perm(SEXP dataSEXP,SEXP dcSEXP,SEXP npermSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dc(dcSEXP);
    Rcpp::traits::input_parameter< int >::type nperm(npermSEXP);
    __result = g2Test_univariate_perm(data,dc,nperm);
    return __result;
END_RCPP
}

List g2Test_univariate(NumericMatrix data, IntegerVector dc);
RcppExport SEXP Rfast_g2Test_univariate(SEXP dataSEXP,SEXP dcSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dc(dcSEXP);
    __result = g2Test_univariate(data,dc);
    return __result;
END_RCPP
}

List g2Test_perm(NumericMatrix data, int x, int y, IntegerVector cs, IntegerVector dc, int nperm);
RcppExport SEXP Rfast_g2Test_perm(SEXP dataSEXP,SEXP xSEXP,SEXP ySEXP,SEXP csSEXP,SEXP dcSEXP,SEXP npermSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cs(csSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dc(dcSEXP);
    Rcpp::traits::input_parameter< int >::type nperm(npermSEXP);
    __result = g2Test_perm(data,x,y,cs,dc,nperm);
    return __result;
END_RCPP
}

List g2tests_perm(NumericMatrix data,IntegerVector x, int y, IntegerVector dc, int nperm);
RcppExport SEXP Rfast_g2tests_perm(SEXP dataSEXP,SEXP xSEXP,SEXP ySEXP,SEXP dcSEXP,SEXP npermSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dc(dcSEXP);
    Rcpp::traits::input_parameter< int >::type nperm(npermSEXP);
    __result = g2tests_perm(data,x,y,dc,nperm);
    return __result;
END_RCPP
}

List g2tests(NumericMatrix data, IntegerVector x, int y, IntegerVector dc);
RcppExport SEXP Rfast_g2tests(SEXP dataSEXP,SEXP xSEXP,SEXP ySEXP,SEXP dcSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dc(dcSEXP);
    __result = g2tests(data,x,y,dc);
    return __result;
END_RCPP
}

List chi2Test(NumericMatrix data, int x, int y, IntegerVector cs, IntegerVector dc);
RcppExport SEXP Rfast_chi2Test(SEXP dataSEXP,SEXP xSEXP,SEXP ySEXP,SEXP csSEXP,SEXP dcSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cs(csSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dc(dcSEXP);
    __result = chi2Test(data,x,y,cs,dc);
    return __result;
END_RCPP
}

List chi2Test_univariate(NumericMatrix data, IntegerVector dc);
RcppExport SEXP Rfast_chi2Test_univariate(SEXP dataSEXP,SEXP dcSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dc(dcSEXP);
    __result = chi2Test_univariate(data,dc);
    return __result;
END_RCPP
}

List chi2tests(NumericMatrix data, IntegerVector x, int y, IntegerVector dc);
RcppExport SEXP Rfast_chi2tests(SEXP dataSEXP,SEXP xSEXP,SEXP ySEXP,SEXP dcSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dc(dcSEXP);
    __result = chi2tests(data,x,y,dc);
    return __result;
END_RCPP
}