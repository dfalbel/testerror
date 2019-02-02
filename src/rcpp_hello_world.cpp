#include <torch/torch.h>
#include <Rcpp.h> 

// [[Rcpp::export]]
void test_error () {  
  throw std::runtime_error("hi this is my error");
}

// [[Rcpp::export]]
void test_error2 () {  
  Rcpp::Rcout << torch::arange(1) << std::endl;
}

  