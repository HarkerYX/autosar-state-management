#ifndef AUTOSAR_STATE_MANAGEMENT_EXECUTION_CLIENT_H
#define AUTOSAR_STATE_MANAGEMENT_EXECUTION_CLIENT_H
/** @file execution_client.h
 * @brief Execution Client header file. */

#include "sm_types.h"

namespace ara::exec {
    class ExecutionClient {
    public:
        /**
        * @brief ReportApplicationState
        * @details Provides functionality for a Process to report its execution state to Execution Management.
        * @param[in] FunctionGroupStateType - Internal Process state to propagate.
        */
        virtual void ReportApplicationState(sm::FunctionGroupStateType state) {};
        virtual ~ExecutionClient() = default;
    };
}

#endif //AUTOSAR_STATE_MANAGEMENT_EXECUTION_CLIENT_H
