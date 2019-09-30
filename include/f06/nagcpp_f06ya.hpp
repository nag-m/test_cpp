// Header for nagcpp::blas::dgemm (f06ya)

// Copyright 2019, Numerical Algorithms Group Ltd, Oxford, UK.
// Generated by cpp-ft-wrapper.xsl
// Version 27.0.0.0
#ifndef NAGCPP_F06YA_HPP
#define NAGCPP_F06YA_HPP

#include "utility/nagcpp_consts.hpp"
#include "utility/nagcpp_data_handling.hpp"
#include "utility/nagcpp_engine_routines.hpp"
#include "utility/nagcpp_engine_types.hpp"
#include "utility/nagcpp_error_handler.hpp"
#include "utility/nagcpp_utility_functions.hpp"
#include "utility/nagcpp_utility_optional.hpp"
#include <algorithm>
#include <cmath>

namespace nagcpp {
  namespace blas {
    // dgemm (f06ya)
    // Matrix-matrix product, two real rectangular matrices.

    // parameters:
    //   transa: std::string, scalar
    //     Specifies whether the operation involves A or A^T
    //   beta: double, scalar
    //     The scalar beta
    //   c: double, array, shape(m, n)
    //     Optionally, on entry: the m by n matrix C
    //     On exit, if not null on entry: the updated matrix C
    //   transb: std::string, scalar
    //     Specifies whether the operation involves B or B^T
    //   alpha: double, scalar
    //     The scalar alpha
    //   a: double, array, shape(if transa="N": m; if transa="T" or transa="C": k;
    //   otherwise: 0, if transa="N": k; if transa="T" or transa="C": m; otherwise:
    //   0)
    //     The matrix A; A is m by k if transa = "N", or k by m if transa = "T" or "C"
    //   b: double, array, shape(if transb="N": k; if transb="T" or transb="C": n;
    //   otherwise: 0, if transb="N": n; if transb="T" or transb="C": k; otherwise:
    //   0)
    //     The matrix B; B is k by n if transb = "N", or n by k if transb = "T" or "C"
    //   opt: blas::OptionalF06YA
    //     Optional parameter container, derived from utility::Optional.
    //     contains:
    //       fail: error_handler::ErrorHandler

    // error_handler::ErrorException
    //   (errorid 10601)
    //     On entry, argument <value> must be a <value> x <value> array.
    //     Supplied argument has <value> dimensions.
    //   (errorid 10601)
    //     On entry, argument <value> must be a <value> x <value> array.
    //     Supplied argument was a <value> x <value> array.
    //   (errorid 10601)
    //     On entry, argument <value> must be a <value> x <value> array.
    //     Not all of the sizes for the supplied array could be ascertained.
    //   (errorid 10602)
    //     On entry, the raw data component of <value> is null.
    //   (errorid 10603)
    //     On entry, unable to ascertain a value for <value>.
    //   (errorid 10604)
    //     On entry, the data in <value> is stored in <value> Major Order.
    //     The data was expected to be in <value> Major Order.
    //   (errorid -99)
    //     An unexpected error has been triggered by this routine.
    //   (errorid -999)
    //     Dynamic memory allocation failed.
    //   (errorid 1)
    //     On entry, error in parameter transa.
    //     Constraint: transa = "N", "T" or "C".
    //   (errorid 2)
    //     On entry, error in parameter transb.
    //     Constraint: transb = "N", "T" or "C".
    //   (errorid 3)
    //     On entry, error in parameter m.
    //     Constraint: m >= 0.
    //   (errorid 4)
    //     On entry, error in parameter n.
    //     Constraint: n >= 0.
    //   (errorid 5)
    //     On entry, error in parameter k.
    //     Constraint: k >= 0.

    extern "C" {
#if defined(_WIN32) && defined(USE_STDCALL)
#define f06yaft_(call_vendor, en_data, transa, transb, m, n, k, alpha, a, lda, \
                 b, ldb, beta, c, ldc, routine_name, transa_length,            \
                 transb_length, routine_name_length)                           \
  F06YAFT(call_vendor, en_data, transa, transa_length, transb, transb_length,  \
          m, n, k, alpha, a, lda, b, ldb, beta, c, ldc, routine_name,          \
          routine_name_length)
#elif defined(_WIN32) || defined(_WIN64)
#define f06yaft_ F06YAFT
#else
#define F06YAFT f06yaft_
#endif
    extern void NAG_CALL F06YAFT(
      const types::f77_logical &call_vendor, types::engine_data &en_data,
      const char *transa NAG_STDCALL_LEN(transa_length),
      const char *transb NAG_STDCALL_LEN(transb_length),
      const types::f77_integer &m, const types::f77_integer &n,
      const types::f77_integer &k, const double &alpha, const double a[],
      const types::f77_integer &lda, const double b[],
      const types::f77_integer &ldb, const double &beta, double c[],
      const types::f77_integer &ldc,
      const char *routine_name NAG_STDCALL_LEN(routine_name_length)
        NAG_NSTDCALL_LEN(transa_length) NAG_NSTDCALL_LEN(transb_length)
          NAG_NSTDCALL_LEN(routine_name_length));
    }

    class OptionalF06YA : public utility::Optional {
    public:
      OptionalF06YA() : Optional() {}
      template <typename A, typename B, typename C>
      friend void dgemm(const std::string transa, const std::string transb,
                        const double alpha, const A &a, const B &b,
                        const double beta, C &&c, blas::OptionalF06YA &opt);
    };

    template <typename A, typename B, typename C>
    void dgemm(const std::string transa, const std::string transb,
               const double alpha, const A &a, const B &b, const double beta,
               C &&c, blas::OptionalF06YA &opt) {
      opt.fail.prepare("blas::dgemm (f06ya)", false);
      types::engine_data en_data;
      engine_routines::y90haan_(en_data);
      en_data.allocate_workspace = constants::NAG_ED_YES;
      data_handling::RawData<double, data_handling::IN,
                             typename std::remove_reference<A>::type>
        local_a(a);
      data_handling::RawData<double, data_handling::IN,
                             typename std::remove_reference<B>::type>
        local_b(b);
      data_handling::RawData<double, data_handling::INOUT,
                             typename std::remove_reference<C>::type>
        local_c(c);

      types::f77_logical local_call_vendor = 1;
      data_handling::StringRawData<data_handling::IN> local_transa(transa);
      data_handling::StringRawData<data_handling::IN> local_transb(transb);
      types::f77_integer local_m;
      if (utility::streq(transa, "T", 1) || utility::streq(transa, "C", 1)) {
        local_m = data_handling::get_size(opt.fail, "m", local_a, 2);
      } else if (utility::streq(transa, "N", 1)) {
        local_m = data_handling::get_size(opt.fail, "m", local_a, 1);
      } else {
        local_m = 0;
      }
      types::f77_integer local_n;
      if (utility::streq(transb, "T", 1) || utility::streq(transb, "C", 1)) {
        local_n = data_handling::get_size(opt.fail, "n", local_b, 1);
      } else if (utility::streq(transb, "N", 1)) {
        local_n = data_handling::get_size(opt.fail, "n", local_b, 2);
      } else {
        local_n = 0;
      }
      types::f77_integer local_k;
      if (utility::streq(transa, "T", 1) || utility::streq(transa, "C", 1)) {
        local_k = data_handling::get_size(opt.fail, "k", local_a, 1);
      } else if (utility::streq(transa, "N", 1)) {
        local_k = data_handling::get_size(opt.fail, "k", local_a, 2);
      } else {
        local_k = 0;
      }
      if (!(local_c.data)) {
        if (std::abs(beta) > 0) {
          opt.fail.raise_error_array_null("c");
          if (opt.fail.error_thrown) {
            return;
          }
        }
        local_c.resize(c, local_m, local_n);
      }
      data_handling::StringRawData<data_handling::IN> local_routine_name(
        "blas::dgemm");
      types::f77_integer local_storage_order =
        data_handling::get_storage_order(opt.default_to_col_major, local_a,
                                         local_b, local_c);
      en_data.storage_order = local_storage_order;

      types::f77_integer local_ldc =
        std::max(static_cast<types::f77_integer>(1),
                 local_c.get_LD(local_storage_order));
      local_c.check(opt.fail, "c", true, local_storage_order, local_m, local_n);
      if (opt.fail.error_thrown) {
        return;
      }
      types::f77_integer local_ldb =
        std::max(static_cast<types::f77_integer>(1),
                 local_b.get_LD(local_storage_order));
      types::f77_integer local_b_dim1;
      if (utility::streq(transb, "N", 1)) {
        local_b_dim1 = local_k;
      } else if (utility::streq(transb, "T", 1) ||
                 utility::streq(transb, "C", 1)) {
        local_b_dim1 = local_n;
      } else {
        local_b_dim1 = 0;
      }
      types::f77_integer local_b_dim2;
      if (utility::streq(transb, "N", 1)) {
        local_b_dim2 = local_n;
      } else if (utility::streq(transb, "T", 1) ||
                 utility::streq(transb, "C", 1)) {
        local_b_dim2 = local_k;
      } else {
        local_b_dim2 = 0;
      }
      local_b.check(opt.fail, "b", true, local_storage_order, local_b_dim1,
                    local_b_dim2);
      if (opt.fail.error_thrown) {
        return;
      }
      types::f77_integer local_lda =
        std::max(static_cast<types::f77_integer>(1),
                 local_a.get_LD(local_storage_order));
      types::f77_integer local_a_dim1;
      if (utility::streq(transa, "N", 1)) {
        local_a_dim1 = local_m;
      } else if (utility::streq(transa, "T", 1) ||
                 utility::streq(transa, "C", 1)) {
        local_a_dim1 = local_k;
      } else {
        local_a_dim1 = 0;
      }
      types::f77_integer local_a_dim2;
      if (utility::streq(transa, "N", 1)) {
        local_a_dim2 = local_k;
      } else if (utility::streq(transa, "T", 1) ||
                 utility::streq(transa, "C", 1)) {
        local_a_dim2 = local_m;
      } else {
        local_a_dim2 = 0;
      }
      local_a.check(opt.fail, "a", true, local_storage_order, local_a_dim1,
                    local_a_dim2);
      if (opt.fail.error_thrown) {
        return;
      }

      if (!((utility::streq(transa, "N", 1) || utility::streq(transa, "T", 1) ||
             utility::streq(transa, "C", 1)))) {
        opt.fail.set_errorid(1, error_handler::ErrorCategory::Error,
                             error_handler::ErrorType::GeneralError);
        opt.fail.append_msg(true, "On entry, error in parameter transa.");
        opt.fail.append_msg(false, "Constraint: transa = \"N\", \"T\" or "
                                   "\"C\".");
        opt.fail.throw_error();
      }
      if (!((utility::streq(transb, "N", 1) || utility::streq(transb, "T", 1) ||
             utility::streq(transb, "C", 1)))) {
        opt.fail.set_errorid(2, error_handler::ErrorCategory::Error,
                             error_handler::ErrorType::GeneralError);
        opt.fail.append_msg(true, "On entry, error in parameter transb.");
        opt.fail.append_msg(false, "Constraint: transb = \"N\", \"T\" or "
                                   "\"C\".");
        opt.fail.throw_error();
      }
      if (!(local_m >= 0)) {
        opt.fail.set_errorid(3, error_handler::ErrorCategory::Error,
                             error_handler::ErrorType::GeneralError);
        opt.fail.append_msg(true, "On entry, error in parameter m.");
        opt.fail.append_msg(false, "Constraint: m >= 0.");
        opt.fail.throw_error();
      }
      if (!(local_n >= 0)) {
        opt.fail.set_errorid(4, error_handler::ErrorCategory::Error,
                             error_handler::ErrorType::GeneralError);
        opt.fail.append_msg(true, "On entry, error in parameter n.");
        opt.fail.append_msg(false, "Constraint: n >= 0.");
        opt.fail.throw_error();
      }
      if (!(local_k >= 0)) {
        opt.fail.set_errorid(5, error_handler::ErrorCategory::Error,
                             error_handler::ErrorType::GeneralError);
        opt.fail.append_msg(true, "On entry, error in parameter k.");
        opt.fail.append_msg(false, "Constraint: k >= 0.");
        opt.fail.throw_error();
      }

      f06yaft_(local_call_vendor, en_data, local_transa.data, local_transb.data,
               local_m, local_n, local_k, alpha, local_a.data, local_lda,
               local_b.data, local_ldb, beta, local_c.data, local_ldc,
               local_routine_name.data, local_transa.string_length,
               local_transb.string_length, local_routine_name.string_length);

      local_c.copy_back(c);
    }

    // alt-1
    template <typename A, typename B, typename C>
    void dgemm(const std::string transa, const std::string transb,
               const double alpha, const A &a, const B &b, const double beta,
               C &&c) {
      blas::OptionalF06YA local_opt;

      dgemm(transa, transb, alpha, a, b, beta, c, local_opt);
    }
  }
}
#define f06ya blas::dgemm
#endif
