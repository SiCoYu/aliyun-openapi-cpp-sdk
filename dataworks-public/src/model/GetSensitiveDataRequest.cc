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

#include <alibabacloud/dataworks-public/model/GetSensitiveDataRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetSensitiveDataRequest;

GetSensitiveDataRequest::GetSensitiveDataRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetSensitiveData") {
  setMethod(HttpRequest::Method::Get);
}

GetSensitiveDataRequest::~GetSensitiveDataRequest() {}

int GetSensitiveDataRequest::getPageNo() const {
  return pageNo_;
}

void GetSensitiveDataRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

int GetSensitiveDataRequest::getPageSize() const {
  return pageSize_;
}

void GetSensitiveDataRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetSensitiveDataRequest::getName() const {
  return name_;
}

void GetSensitiveDataRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

