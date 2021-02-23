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
#pragma once

#include <cstdint>
#include <ostream>
#include <string>

namespace introvirt {
namespace windows {
namespace pe {

enum SubsystemType {
    /** Doesn't require a subsystem (such as a device driver) */
    NATIVE = 1,
    /** Runs in the Windows GUI subsystem */
    WINDOWS_GUI = 2,
    /** Runs in the Windows character subsystem (a console app) */
    WINDOWS_CUI = 3,
    /** Runs in the OS/2 character subsystem (OS/2 1.x apps only) */
    OS2_CUI = 5,
    /** Runs in the Posix character subsystem. */
    POSIX_CUI = 7,
};

const std::string& to_string(SubsystemType type);
std::ostream& operator<<(std::ostream& os, SubsystemType type);

} // namespace pe
} // namespace windows
} // namespace introvirt