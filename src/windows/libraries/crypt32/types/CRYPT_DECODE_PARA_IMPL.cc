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

#include "CRYPT_DECODE_PARA_IMPL.hh"

#include <introvirt/core/domain/Vcpu.hh>

namespace introvirt {
namespace windows {
namespace crypt32 {

std::unique_ptr<CRYPT_DECODE_PARA> CRYPT_DECODE_PARA::make_unique(const GuestVirtualAddress& gva,
                                                                  bool x64) {
    if (x64) {
        return std::make_unique<CRYPT_DECODE_PARA_IMPL<uint64_t>>(gva);
    }
    return std::make_unique<CRYPT_DECODE_PARA_IMPL<uint32_t>>(gva);
}

size_t CRYPT_DECODE_PARA::size(bool x64) {
    if (x64) {
        return sizeof(structs::_CRYPT_DECODE_PARA<uint64_t>);
    }
    return sizeof(structs::_CRYPT_DECODE_PARA<uint32_t>);
}

size_t CRYPT_DECODE_PARA::size(const Vcpu& vcpu) {
    return CRYPT_DECODE_PARA::size(vcpu.long_mode() && !vcpu.long_compatibility_mode());
}

} // namespace crypt32
} // namespace windows
} // namespace introvirt