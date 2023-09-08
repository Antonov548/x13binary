#include <iostream>
#include <Rcpp.h>

using namespace Rcpp;

extern "C" void x13_entry_();

// [[Rcpp::export]]
void run_x13()
{
    std::cout << "Run x-13 entry" << std::endl;
    x13_entry_();
}
