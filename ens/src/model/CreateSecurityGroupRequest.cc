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

#include <alibabacloud/ens/model/CreateSecurityGroupRequest.h>

using AlibabaCloud::Ens::Model::CreateSecurityGroupRequest;

CreateSecurityGroupRequest::CreateSecurityGroupRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateSecurityGroupRequest::~CreateSecurityGroupRequest() {}

std::string CreateSecurityGroupRequest::getDescription() const {
  return description_;
}

void CreateSecurityGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSecurityGroupRequest::getSecurityGroupName() const {
  return securityGroupName_;
}

void CreateSecurityGroupRequest::setSecurityGroupName(const std::string &securityGroupName) {
  securityGroupName_ = securityGroupName;
  setParameter(std::string("SecurityGroupName"), securityGroupName);
}

