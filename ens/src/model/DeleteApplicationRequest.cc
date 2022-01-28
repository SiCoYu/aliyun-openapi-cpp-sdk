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

#include <alibabacloud/ens/model/DeleteApplicationRequest.h>

using AlibabaCloud::Ens::Model::DeleteApplicationRequest;

DeleteApplicationRequest::DeleteApplicationRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DeleteApplication") {
  setMethod(HttpRequest::Method::Post);
}

DeleteApplicationRequest::~DeleteApplicationRequest() {}

int DeleteApplicationRequest::getTimeout() const {
  return timeout_;
}

void DeleteApplicationRequest::setTimeout(int timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string DeleteApplicationRequest::getAppId() const {
  return appId_;
}

void DeleteApplicationRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

