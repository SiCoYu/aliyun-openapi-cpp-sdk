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

#include <alibabacloud/dataworks-public/model/TerminateDISyncInstanceRequest.h>

using AlibabaCloud::Dataworks_public::Model::TerminateDISyncInstanceRequest;

TerminateDISyncInstanceRequest::TerminateDISyncInstanceRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "TerminateDISyncInstance") {
  setMethod(HttpRequest::Method::Post);
}

TerminateDISyncInstanceRequest::~TerminateDISyncInstanceRequest() {}

std::string TerminateDISyncInstanceRequest::getTaskType() const {
  return taskType_;
}

void TerminateDISyncInstanceRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

long TerminateDISyncInstanceRequest::getProjectId() const {
  return projectId_;
}

void TerminateDISyncInstanceRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

long TerminateDISyncInstanceRequest::getFileId() const {
  return fileId_;
}

void TerminateDISyncInstanceRequest::setFileId(long fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), std::to_string(fileId));
}

