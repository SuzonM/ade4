// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// RVintrarandtestCpp
arma::vec RVintrarandtestCpp(const arma::mat& X, const arma::mat& Y, Rcpp::IntegerVector fac, const int nrepet);
RcppExport SEXP _ade4_RVintrarandtestCpp(SEXP XSEXP, SEXP YSEXP, SEXP facSEXP, SEXP nrepetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fac(facSEXP);
    Rcpp::traits::input_parameter< const int >::type nrepet(nrepetSEXP);
    rcpp_result_gen = Rcpp::wrap(RVintrarandtestCpp(X, Y, fac, nrepet));
    return rcpp_result_gen;
END_RCPP
}
// RVrandtestCpp
arma::vec RVrandtestCpp(const arma::mat& X, const arma::mat& Y, const int nrepet);
RcppExport SEXP _ade4_RVrandtestCpp(SEXP XSEXP, SEXP YSEXP, SEXP nrepetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const int >::type nrepet(nrepetSEXP);
    rcpp_result_gen = Rcpp::wrap(RVrandtestCpp(X, Y, nrepet));
    return rcpp_result_gen;
END_RCPP
}
// procusterandtestCpp
arma::vec procusterandtestCpp(const arma::mat& X, const arma::mat& Y, const int nrepet);
RcppExport SEXP _ade4_procusterandtestCpp(SEXP XSEXP, SEXP YSEXP, SEXP nrepetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const int >::type nrepet(nrepetSEXP);
    rcpp_result_gen = Rcpp::wrap(procusterandtestCpp(X, Y, nrepet));
    return rcpp_result_gen;
END_RCPP
}