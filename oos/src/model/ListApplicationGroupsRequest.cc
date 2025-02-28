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

#include <alibabacloud/oos/model/ListApplicationGroupsRequest.h>

using AlibabaCloud::Oos::Model::ListApplicationGroupsRequest;

ListApplicationGroupsRequest::ListApplicationGroupsRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListApplicationGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListApplicationGroupsRequest::~ListApplicationGroupsRequest() {}

std::string ListApplicationGroupsRequest::getRegionId() const {
  return regionId_;
}

void ListApplicationGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListApplicationGroupsRequest::getNextToken() const {
  return nextToken_;
}

void ListApplicationGroupsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListApplicationGroupsRequest::getDeployRegionId() const {
  return deployRegionId_;
}

void ListApplicationGroupsRequest::setDeployRegionId(const std::string &deployRegionId) {
  deployRegionId_ = deployRegionId;
  setParameter(std::string("DeployRegionId"), deployRegionId);
}

std::string ListApplicationGroupsRequest::getApplicationName() const {
  return applicationName_;
}

void ListApplicationGroupsRequest::setApplicationName(const std::string &applicationName) {
  applicationName_ = applicationName;
  setParameter(std::string("ApplicationName"), applicationName);
}

int ListApplicationGroupsRequest::getMaxResults() const {
  return maxResults_;
}

void ListApplicationGroupsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

