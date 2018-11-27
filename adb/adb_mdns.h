/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ADB_MDNS_H_
#define _ADB_MDNS_H_

#include <android-base/macros.h>

const char* kADBServiceType = "_adb._tcp";
const char* kADBSecurePairingServiceType = "_adb_secure_pairing._tcp";
const char* kADBSecureConnectServiceType = "_adb_secure_connect._tcp";

const int kADBTransportServiceRefIndex = 0;
const int kADBSecurePairingServiceRefIndex = 1;
const int kADBSecureConnectServiceRefIndex = 2;

const char* kADBDNSServices[] = {
        kADBServiceType,
        kADBSecurePairingServiceType,
        kADBSecureConnectServiceType,
};

const int kNumADBDNSServices = arraysize(kADBDNSServices);

#endif
