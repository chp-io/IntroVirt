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

#include <introvirt/windows/kernel/condrv/condrv.hh>
#include <introvirt/windows/kernel/nt/nt.hh>
#include <introvirt/windows/kernel/win32k/win32k.hh>

#include <introvirt/windows/kernel/ServiceDescriptorTable.hh>
#include <introvirt/windows/kernel/ServiceTable.hh>
#include <introvirt/windows/kernel/SystemCallConverter.hh>
#include <introvirt/windows/kernel/SystemCallIndex.hh>
#include <introvirt/windows/kernel/WindowsSystemCall.hh>
