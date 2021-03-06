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

#include <introvirt/core/exception/TraceableException.hh>

#include <memory>

namespace introvirt {

/**
 * @brief Thrown when a hypervisor command fails.
 */
class CommandFailedException final : public TraceableException {
  public:
    /**
     * @brief Construct a new Event Poll Exception
     *
     * @param message The error message
     * @param err The errno value
     */
    CommandFailedException(const std::string& message, int err);

    /**
     * @brief Destroy the instance
     */
    ~CommandFailedException() override;

  private:
    class IMPL;
    std::unique_ptr<IMPL> pImpl_;
};

} // namespace introvirt