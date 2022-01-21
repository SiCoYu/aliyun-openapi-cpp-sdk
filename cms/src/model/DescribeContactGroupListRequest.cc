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

#include <alibabacloud/cms/model/DescribeContactGroupListRequest.h>

using AlibabaCloud::Cms::Model::DescribeContactGroupListRequest;

DescribeContactGroupListRequest::DescribeContactGroupListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeContactGroupList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeContactGroupListRequest::~DescribeContactGroupListRequest() {}

int DescribeContactGroupListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeContactGroupListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeContactGroupListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeContactGroupListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

