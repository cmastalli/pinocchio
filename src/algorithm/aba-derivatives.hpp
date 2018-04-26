//
// Copyright (c) 2018 CNRS
//
// This file is part of Pinocchio
// Pinocchio is free software: you can redistribute it
// and/or modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation, either version
// 3 of the License, or (at your option) any later version.
//
// Pinocchio is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Lesser Public License for more details. You should have
// received a copy of the GNU Lesser General Public License along with
// Pinocchio If not, see
// <http://www.gnu.org/licenses/>.

#ifndef __se3_aba_derivatives_hpp__
#define __se3_aba_derivatives_hpp__

#include "pinocchio/multibody/model.hpp"

namespace se3
{
  ///
  /// \brief The derivatives of the Articulated-Body algorithm.
  ///
  /// \param[in] model The model structure of the rigid body system.
  /// \param[in] data The data structure of the rigid body system.
  /// \param[in] q The joint configuration vector (dim model.nq).
  /// \param[in] v The joint velocity vector (dim model.nv).
  /// \param[in] tau The joint torque vector (dim model.nv).
  /// \param[out] aba_partial_dq Partial derivative of the generalized torque vector with respect to the joint configuration.
  /// \param[out] aba_partial_dv Partial derivative of the generalized torque vector with respect to the joint velocity.
  /// \param[out] aba_partial_dtau Partial derivative of the generalized torque vector with respect to the joint acceleration.
  ///
  /// \sa se3::aba
  ///
  inline void computeABADerivatives(const Model & model,
                                    Data & data,
                                    const Eigen::VectorXd & q,
                                    const Eigen::VectorXd & v,
                                    const Eigen::VectorXd & tau,
                                    Eigen::MatrixXd & aba_partial_dq,
                                    Eigen::MatrixXd & aba_partial_dv,
                                    Data::RowMatrixXd & aba_partial_dtau);
  

} // namespace se3

/* --- Details -------------------------------------------------------------------- */
#include "pinocchio/algorithm/aba-derivatives.hxx"

#endif // ifndef __se3_aba_derivatives_hpp__