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

#include <alibabacloud/ens/model/DescribeARMServerInstancesRequest.h>

using AlibabaCloud::Ens::Model::DescribeARMServerInstancesRequest;

DescribeARMServerInstancesRequest::DescribeARMServerInstancesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeARMServerInstances") {
  setMethod(HttpRequest::Method::Get);
}

DescribeARMServerInstancesRequest::~DescribeARMServerInstancesRequest() {}

int DescribeARMServerInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeARMServerInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeARMServerInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeARMServerInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeARMServerInstancesRequest::std::string> DescribeARMServerInstancesRequest::getEnsRegionIds() const {
  return ensRegionIds_;
}

void DescribeARMServerInstancesRequest::setEnsRegionIds(const std::vector<DescribeARMServerInstancesRequest::std::string> &ensRegionIds) {
  ensRegionIds_ = ensRegionIds;
  for(int dep1 = 0; dep1 != ensRegionIds.size(); dep1++) {
    setParameter(std::string("EnsRegionIds") + "." + std::to_string(dep1 + 1), ensRegionIds[dep1]);
  }
}

std::vector<DescribeARMServerInstancesRequest::std::string> DescribeARMServerInstancesRequest::getServerIds() const {
  return serverIds_;
}

void DescribeARMServerInstancesRequest::setServerIds(const std::vector<DescribeARMServerInstancesRequest::std::string> &serverIds) {
  serverIds_ = serverIds;
  for(int dep1 = 0; dep1 != serverIds.size(); dep1++) {
    setParameter(std::string("ServerIds") + "." + std::to_string(dep1 + 1), serverIds[dep1]);
  }
}

