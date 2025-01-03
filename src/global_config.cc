/**
 * Copyright 2020-2024, XGBoost Contributors
 * \file global_config.cc
 * \brief Global configuration for XGBoost
 * \author Hyunsu Cho
 */

#include <dmlc/thread_local.h>
#include "xgboost/global_config.h"

namespace xgboost {
DMLC_REGISTER_PARAMETER(GlobalConfiguration);

void InitNewThread::operator()() const { *GlobalConfigThreadLocalStore::Get() = config; }
}  // namespace xgboost
