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

#include "KEY_VALUE_INFORMATION_IMPL.hh"

#include <introvirt/core/memory/guest_ptr.hh>
#include <introvirt/windows/common/WStr.hh>
#include <introvirt/windows/kernel/nt/syscall/types/key_value_information/KEY_VALUE_PARTIAL_INFORMATION.hh>

#include <memory>

namespace introvirt {
namespace windows {
namespace nt {

namespace structs {

struct _KEY_VALUE_PARTIAL_INFORMATION {
    uint32_t TitleIndex;
    uint32_t Type;
    uint32_t DataLength;
    uint8_t Data[]; // DATA follows
};

static_assert(sizeof(_KEY_VALUE_PARTIAL_INFORMATION) == 0xC);

} // namespace structs

using KEY_VALUE_PARTIAL_INFORMATION_IMPL_BASE =
    KEY_VALUE_INFORMATION_IMPL<KEY_VALUE_PARTIAL_INFORMATION,
                               structs::_KEY_VALUE_PARTIAL_INFORMATION>;

class KEY_VALUE_PARTIAL_INFORMATION_IMPL final : public KEY_VALUE_PARTIAL_INFORMATION_IMPL_BASE {
  public:
    const KEY_VALUE* Data() const override { return Data_.get(); }
    KEY_VALUE* Data() override { return Data_.get(); }

    void write(std::ostream& os, const std::string& linePrefix = "") const override;

    Json::Value json() const override;

    KEY_VALUE_PARTIAL_INFORMATION_IMPL(const GuestVirtualAddress& gva, uint32_t buffer_size);

  private:
    std::unique_ptr<KEY_VALUE> Data_;
};

} // namespace nt
} // namespace windows
} // namespace introvirt