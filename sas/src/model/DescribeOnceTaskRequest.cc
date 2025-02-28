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

#include <alibabacloud/sas/model/DescribeOnceTaskRequest.h>

using AlibabaCloud::Sas::Model::DescribeOnceTaskRequest;

DescribeOnceTaskRequest::DescribeOnceTaskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeOnceTask") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOnceTaskRequest::~DescribeOnceTaskRequest() {}

std::string DescribeOnceTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeOnceTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeOnceTaskRequest::getRootTaskId() const {
  return rootTaskId_;
}

void DescribeOnceTaskRequest::setRootTaskId(const std::string &rootTaskId) {
  rootTaskId_ = rootTaskId;
  setParameter(std::string("RootTaskId"), rootTaskId);
}

long DescribeOnceTaskRequest::getEndTimeQuery() const {
  return endTimeQuery_;
}

void DescribeOnceTaskRequest::setEndTimeQuery(long endTimeQuery) {
  endTimeQuery_ = endTimeQuery;
  setParameter(std::string("EndTimeQuery"), std::to_string(endTimeQuery));
}

int DescribeOnceTaskRequest::getPageSize() const {
  return pageSize_;
}

void DescribeOnceTaskRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeOnceTaskRequest::getTaskType() const {
  return taskType_;
}

void DescribeOnceTaskRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

long DescribeOnceTaskRequest::getStartTimeQuery() const {
  return startTimeQuery_;
}

void DescribeOnceTaskRequest::setStartTimeQuery(long startTimeQuery) {
  startTimeQuery_ = startTimeQuery;
  setParameter(std::string("StartTimeQuery"), std::to_string(startTimeQuery));
}

int DescribeOnceTaskRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeOnceTaskRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

