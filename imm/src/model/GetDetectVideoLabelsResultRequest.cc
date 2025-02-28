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

#include <alibabacloud/imm/model/GetDetectVideoLabelsResultRequest.h>

using AlibabaCloud::Imm::Model::GetDetectVideoLabelsResultRequest;

GetDetectVideoLabelsResultRequest::GetDetectVideoLabelsResultRequest()
    : RpcServiceRequest("imm", "2020-09-30", "GetDetectVideoLabelsResult") {
  setMethod(HttpRequest::Method::Post);
}

GetDetectVideoLabelsResultRequest::~GetDetectVideoLabelsResultRequest() {}

std::string GetDetectVideoLabelsResultRequest::getTaskId() const {
  return taskId_;
}

void GetDetectVideoLabelsResultRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string GetDetectVideoLabelsResultRequest::getProjectName() const {
  return projectName_;
}

void GetDetectVideoLabelsResultRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string GetDetectVideoLabelsResultRequest::getTaskType() const {
  return taskType_;
}

void GetDetectVideoLabelsResultRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

