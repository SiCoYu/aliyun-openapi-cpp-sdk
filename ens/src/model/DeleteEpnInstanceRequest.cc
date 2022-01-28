/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
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

#include <alibabacloud/ens/model/DeleteEpnInstanceRequest.h>

using AlibabaCloud::Ens::Model::DeleteEpnInstanceRequest;

DeleteEpnInstanceRequest::DeleteEpnInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DeleteEpnInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEpnInstanceRequest::~DeleteEpnInstanceRequest() {}

std::string DeleteEpnInstanceRequest::getEPNInstanceId() const {
  return ePNInstanceId_;
}

void DeleteEpnInstanceRequest::setEPNInstanceId(const std::string &ePNInstanceId) {
  ePNInstanceId_ = ePNInstanceId;
  setParameter(std::string("EPNInstanceId"), ePNInstanceId);
}

