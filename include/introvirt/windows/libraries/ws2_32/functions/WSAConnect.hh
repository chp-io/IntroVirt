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
 * @brief Handler for ws2_32!WSAConnect
 *
 * @see https://docs.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-wsaconnect
 */
class WSAConnect : public WindowsFunctionCall {
  public:
    /* Input arguments */
    SOCKET s() const;
    void s(SOCKET s);

    GuestVirtualAddress pName() const;
    void pName(const GuestVirtualAddress& gva);

    int32_t namelen() const;
    void namelen(int32_t namelen);

    GuestVirtualAddress lpCallerData() const;
    void lpCallerData(const GuestVirtualAddress& gva);

    GuestVirtualAddress lpCalleeData() const;
    void lpCalleeData(const GuestVirtualAddress& gva);

    GuestVirtualAddress lpSQOS() const;
    void lpSQOS(const GuestVirtualAddress& gva);

    GuestVirtualAddress lpGQOS() const;
    void lpGQOS(const GuestVirtualAddress& gva);

    /* Helpers */
    const SOCKADDR* name() const;
    SOCKADDR* name();

    int32_t result() const;

    const std::string& function_name() const override;
    const std::string& library_name() const override;
    void write(std::ostream& os = std::cout) const override;

    WSAConnect(Event& event);
    ~WSAConnect() override;

    static constexpr int ArgumentCount = 7;
    inline static const std::string LibraryName = "ws2_32";
    inline static const std::string FunctionName = "WSAConnect";

  private:
    SOCKET s_;
    GuestVirtualAddress pName_;
    int32_t namelen_;
    GuestVirtualAddress lpCallerData_;
    GuestVirtualAddress lpCalleeData_;
    GuestVirtualAddress lpSQOS_;
    GuestVirtualAddress lpGQOS_;

    mutable std::unique_ptr<SOCKADDR> name_;
};

} // namespace ws2_32
} // namespace windows
} // namespace introvirt