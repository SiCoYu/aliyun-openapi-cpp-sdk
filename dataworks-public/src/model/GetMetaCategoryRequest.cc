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

#include <alibabacloud/dataworks-public/model/GetMetaCategoryRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaCategoryRequest;

GetMetaCategoryRequest::GetMetaCategoryRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaCategory") {
  setMethod(HttpRequest::Method::Post);
}

GetMetaCategoryRequest::~GetMetaCategoryRequest() {}

long GetMetaCategoryRequest::getParentCategoryId() const {
  return parentCategoryId_;
}

void GetMetaCategoryRequest::setParentCategoryId(long parentCategoryId) {
  parentCategoryId_ = parentCategoryId;
  setParameter(std::string("ParentCategoryId"), std::to_string(parentCategoryId));
}

int GetMetaCategoryRequest::getPageSize() const {
  return pageSize_;
}

void GetMetaCategoryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int GetMetaCategoryRequest::getPageNum() const {
  return pageNum_;
}

void GetMetaCategoryRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

