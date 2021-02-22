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

#include <introvirt/core/fwd.hh>

#include <cstdint>
#include <string>

namespace introvirt {

/**
 * @brief An interface for event process information
 */
class EventTaskInformation {
  public:
    /**
     * @return The PID of the current process
     */
    virtual uint64_t pid() const = 0;

    /**
     * @return The TID of the current thread (os-level)
     */
    virtual uint64_t tid() const = 0;

    /**
     * @return The name of the currently running process
     */
    virtual std::string process_name() const = 0;
};

} // namespace introvirt