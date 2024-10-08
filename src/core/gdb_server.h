// SPDX-FileCopyrightText: 2019-2024 Connor McLaughlin <stenzek@gmail.com> and contributors.
// SPDX-License-Identifier: PolyForm-Strict-1.0.0

#pragma once
#include <string_view>

namespace GDBServer {
bool Initialize(u16 port);
bool HasAnyClients();
void Shutdown();

void OnSystemPaused();
void OnSystemResumed();
} // namespace GDBServer
