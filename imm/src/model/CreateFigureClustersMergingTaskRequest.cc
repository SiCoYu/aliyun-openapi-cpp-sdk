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

#include <alibabacloud/imm/model/CreateFigureClustersMergingTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateFigureClustersMergingTaskRequest;

CreateFigureClustersMergingTaskRequest::CreateFigureClustersMergingTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateFigureClustersMergingTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateFigureClustersMergingTaskRequest::~CreateFigureClustersMergingTaskRequest() {}

std::string CreateFigureClustersMergingTaskRequest::getUserData() const {
  return userData_;
}

void CreateFigureClustersMergingTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string CreateFigureClustersMergingTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateFigureClustersMergingTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateFigureClustersMergingTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateFigureClustersMergingTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::string CreateFigureClustersMergingTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateFigureClustersMergingTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateFigureClustersMergingTaskRequest::getDatasetName() const {
  return datasetName_;
}

void CreateFigureClustersMergingTaskRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string CreateFigureClustersMergingTaskRequest::getFrom() const {
  return from_;
}

void CreateFigureClustersMergingTaskRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string CreateFigureClustersMergingTaskRequest::getTo() const {
  return to_;
}

void CreateFigureClustersMergingTaskRequest::setTo(const std::string &to) {
  to_ = to;
  setParameter(std::string("To"), to);
}

std::map<std::string, std::string> CreateFigureClustersMergingTaskRequest::getTags() const {
  return tags_;
}

void CreateFigureClustersMergingTaskRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

