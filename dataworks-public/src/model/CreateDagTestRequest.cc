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

#include <alibabacloud/dataworks-public/model/CreateDagTestRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateDagTestRequest;

CreateDagTestRequest::CreateDagTestRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateDagTest") {
  setMethod(HttpRequest::Method::Post);
}

CreateDagTestRequest::~CreateDagTestRequest() {}

std::string CreateDagTestRequest::getProjectEnv() const {
  return projectEnv_;
}

void CreateDagTestRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

std::string CreateDagTestRequest::getBizdate() const {
  return bizdate_;
}

void CreateDagTestRequest::setBizdate(const std::string &bizdate) {
  bizdate_ = bizdate;
  setBodyParameter(std::string("Bizdate"), bizdate);
}

std::string CreateDagTestRequest::getName() const {
  return name_;
}

void CreateDagTestRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateDagTestRequest::getNodeParams() const {
  return nodeParams_;
}

void CreateDagTestRequest::setNodeParams(const std::string &nodeParams) {
  nodeParams_ = nodeParams;
  setBodyParameter(std::string("NodeParams"), nodeParams);
}

long CreateDagTestRequest::getNodeId() const {
  return nodeId_;
}

void CreateDagTestRequest::setNodeId(long nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), std::to_string(nodeId));
}

