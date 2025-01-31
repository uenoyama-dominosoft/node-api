/*
    Copyright (c) 2020 TOSHIBA Digital Solutions Corporation.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _ADDON_H_
#define _ADDON_H_
#include <napi.h>
#include "GSException.h"
#include "StoreFactory.h"
#include "ContainerInfo.h"
#include "ExpirationInfo.h"
#include "AggregationResult.h"
#include "Container.h"
#include "PartitionController.h"
#include "Query.h"
#include "RowSet.h"
#include "Store.h"

Napi::Object init(Napi::Env env, Napi::Object exports);

#endif // _ADDON_H_

using namespace griddb;

Napi::Object init(Napi::Env env, Napi::Object exports) {
    GSException::init(env, exports);
    StoreFactory::init(env, exports);
    Store::init(env, exports);
    ContainerInfo::init(env, exports);
    ExpirationInfo::init(env, exports);
    AggregationResult::init(env, exports);
    Container::init(env, exports);
    PartitionController::init(env, exports);
    Query::init(env, exports);
    RowSet::init(env, exports);
    return exports;
}

NODE_API_MODULE(addon, init);

