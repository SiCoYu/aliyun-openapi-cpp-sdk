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

#include <alibabacloud/dataworks-public/model/ListNodeIORequest.h>

using AlibabaCloud::Dataworks_public::Model::ListNodeIORequest;

ListNodeIORequest::ListNodeIORequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListNodeIO") {
  setMethod(HttpRequest::Method::Post);
}

ListNodeIORequest::~ListNodeIORequest() {}

std::string ListNodeIORequest::getProjectEnv() const {
  return projectEnv_;
}

void ListNodeIORequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

long ListNodeIORequest::getNodeId() const {
  return nodeId_;
}

void ListNodeIORequest::setNodeId(long nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), std::to_string(nodeId));
}

std::string ListNodeIORequest::getIoType() const {
  return ioType_;
}

void ListNodeIORequest::setIoType(const std::string &ioType) {
  ioType_ = ioType;
  setBodyParameter(std::string("IoType"), ioType);
}

