// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// eigenMapMatMult
SEXP eigenMapMatMult(const Eigen::Map<Eigen::MatrixXd> A, Eigen::Map<Eigen::MatrixXd> B, int nthreads);
RcppExport SEXP _fwildclusterboot_eigenMapMatMult(SEXP ASEXP, SEXP BSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenMapMatMult(A, B, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// sample_weights
arma::mat sample_weights(int G, int type);
RcppExport SEXP _fwildclusterboot_sample_weights(SEXP GSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_weights(G, type));
    return rcpp_result_gen;
END_RCPP
}
// wildboottestHC
List wildboottestHC(const arma::vec& y, const arma::mat& X, const arma::mat& R, const double& r, const int& B, const int& N_G_bootcluster, const int& cores, const int& type, const double& small_sample_correction, const int& seed);
RcppExport SEXP _fwildclusterboot_wildboottestHC(SEXP ySEXP, SEXP XSEXP, SEXP RSEXP, SEXP rSEXP, SEXP BSEXP, SEXP N_G_bootclusterSEXP, SEXP coresSEXP, SEXP typeSEXP, SEXP small_sample_correctionSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type R(RSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const int& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const int& >::type N_G_bootcluster(N_G_bootclusterSEXP);
    Rcpp::traits::input_parameter< const int& >::type cores(coresSEXP);
    Rcpp::traits::input_parameter< const int& >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const double& >::type small_sample_correction(small_sample_correctionSEXP);
    Rcpp::traits::input_parameter< const int& >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(wildboottestHC(y, X, R, r, B, N_G_bootcluster, cores, type, small_sample_correction, seed));
    return rcpp_result_gen;
END_RCPP
}
// wildboottestCL
List wildboottestCL(const arma::vec& y, const arma::mat& X, const arma::mat& R, const double& r, const int& B, const int& N_G_bootcluster, const int& cores, const int& type, const arma::vec& cluster, const double& small_sample_correction, const int& seed);
RcppExport SEXP _fwildclusterboot_wildboottestCL(SEXP ySEXP, SEXP XSEXP, SEXP RSEXP, SEXP rSEXP, SEXP BSEXP, SEXP N_G_bootclusterSEXP, SEXP coresSEXP, SEXP typeSEXP, SEXP clusterSEXP, SEXP small_sample_correctionSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type R(RSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const int& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const int& >::type N_G_bootcluster(N_G_bootclusterSEXP);
    Rcpp::traits::input_parameter< const int& >::type cores(coresSEXP);
    Rcpp::traits::input_parameter< const int& >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type cluster(clusterSEXP);
    Rcpp::traits::input_parameter< const double& >::type small_sample_correction(small_sample_correctionSEXP);
    Rcpp::traits::input_parameter< const int& >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(wildboottestCL(y, X, R, r, B, N_G_bootcluster, cores, type, cluster, small_sample_correction, seed));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fwildclusterboot_eigenMapMatMult", (DL_FUNC) &_fwildclusterboot_eigenMapMatMult, 3},
    {"_fwildclusterboot_sample_weights", (DL_FUNC) &_fwildclusterboot_sample_weights, 2},
    {"_fwildclusterboot_wildboottestHC", (DL_FUNC) &_fwildclusterboot_wildboottestHC, 10},
    {"_fwildclusterboot_wildboottestCL", (DL_FUNC) &_fwildclusterboot_wildboottestCL, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_fwildclusterboot(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
