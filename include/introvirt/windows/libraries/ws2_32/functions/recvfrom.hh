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
#include <introvirt/windows/libraries/WindowsFunctionCall.hh>
#include <introvirt/windows/libraries/ws2_32/types/SOCKADDR.hh>
#include <introvirt/windows/libraries/ws2_32/types/SOCKET.hh>

#include <memory>

namespace introvirt {
namespace windows {
namespace ws2_32 {

/**
 * @brief Handler for ws2_32!recvfrom
 *
 * @see https://docs.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-recvfrom
 */
class recvfrom : public WindowsFunctionCall {
  public:
    /* Input arguments */
    SOCKET s() const;
    void s(SOCKET s);

    GuestVirtualAddress pBuf() const;
    void pBuf(const GuestVirtualAddress& gva);

    int32_t len() const;
    void len(int32_t len);

    int32_t flags() const;
    void flags(int32_t flags);

    GuestVirtualAddress pFrom() const;
    void pFrom(const GuestVirtualAddress& gva);

    int32_t fromlen() const;
    void fromlen(int32_t fromlen);

    /* Helpers */
    const SOCKADDR* from() const;
    SOCKADDR* from();

    int32_t result() const;

    const std::string& function_name() const override;
    const std::string& library_name() const override;
    void write(std::ostream& os = std::cout) const override;

    recvfrom(Event& event);
    ~recvfrom() override;

    static constexpr int ArgumentCount = 6;
    inline static const std::string LibraryName = "ws2_32";
    inline static const std::string FunctionName = "recvfrom";

  private:
    SOCKET s_;
    GuestVirtualAddress pBuf_;
    int32_t len_;
    int32_t flags_;
    GuestVirtualAddress pFrom_;
    int32_t fromlen_;

    mutable std::unique_ptr<SOCKADDR> from_;
};

} // namespace ws2_32
} // namespace windows
} // namespace introvirt