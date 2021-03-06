/*
 * Copyright 2021 Assured Information Security, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <introvirt/windows/kernel/nt/const/SHUTDOWN_ACTION.hh>

namespace introvirt {
namespace windows {
namespace nt {

const std::string& to_string(SHUTDOWN_ACTION infoClass) {
    static const std::string ShutdownNoRebootStr("ShutdownNoReboot");
    static const std::string ShutdownRebootStr("ShutdownReboot");
    static const std::string ShutdownPowerOffStr("ShutdownPowerOff");
    static const std::string UnknownShutdownActionStr("UnknownShutdownAction");

    switch (infoClass) {
    case SHUTDOWN_ACTION::ShutdownNoReboot:
        return ShutdownNoRebootStr;
    case SHUTDOWN_ACTION::ShutdownReboot:
        return ShutdownRebootStr;
    case SHUTDOWN_ACTION::ShutdownPowerOff:
        return ShutdownPowerOffStr;
    case SHUTDOWN_ACTION::UnknownShutdownAction:
        break;
    }

    return UnknownShutdownActionStr;
}

} /* namespace nt */
} /* namespace windows */
} /* namespace introvirt */
