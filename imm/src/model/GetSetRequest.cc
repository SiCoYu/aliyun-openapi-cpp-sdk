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

#include <alibabacloud/imm/model/GetSetRequest.h>

using AlibabaCloud::Imm::Model::GetSetRequest;

GetSetRequest::GetSetRequest()
    : RpcServiceRequest("imm", "2017-09-06", "GetSet") {
  setMethod(HttpRequest::Method::Post);
}

GetSetRequest::~GetSetRequest() {}

std::string GetSetRequest::getProject() const {
  return project_;
}

void GetSetRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

std::string GetSetRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetSetRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetSetRequest::getSetId() const {
  return setId_;
}

void GetSetRequest::setSetId(const std::string &setId) {
  setId_ = setId;
  setParameter(std::string("SetId"), setId);
}

