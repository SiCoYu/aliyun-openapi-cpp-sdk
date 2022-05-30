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

#include <alibabacloud/dataworks-public/model/ListCurrentTasksForResourceGroupRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListCurrentTasksForResourceGroupRequest;

ListCurrentTasksForResourceGroupRequest::ListCurrentTasksForResourceGroupRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListCurrentTasksForResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListCurrentTasksForResourceGroupRequest::~ListCurrentTasksForResourceGroupRequest() {}

std::string ListCurrentTasksForResourceGroupRequest::getProjectEnv() const {
  return projectEnv_;
}

void ListCurrentTasksForResourceGroupRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

int ListCurrentTasksForResourceGroupRequest::getPageSize() const {
  return pageSize_;
}

void ListCurrentTasksForResourceGroupRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCurrentTasksForResourceGroupRequest::getResourceGroupIdentifier() const {
  return resourceGroupIdentifier_;
}

void ListCurrentTasksForResourceGroupRequest::setResourceGroupIdentifier(const std::string &resourceGroupIdentifier) {
  resourceGroupIdentifier_ = resourceGroupIdentifier;
  setBodyParameter(std::string("ResourceGroupIdentifier"), resourceGroupIdentifier);
}

int ListCurrentTasksForResourceGroupRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCurrentTasksForResourceGroupRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListCurrentTasksForResourceGroupRequest::getStatus() const {
  return status_;
}

void ListCurrentTasksForResourceGroupRequest::setStatus(int status) {
  status_ = status;
  setBodyParameter(std::string("Status"), std::to_string(status));
}

