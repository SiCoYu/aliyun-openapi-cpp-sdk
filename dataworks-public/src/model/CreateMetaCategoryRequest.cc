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

#include <alibabacloud/dataworks-public/model/CreateMetaCategoryRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateMetaCategoryRequest;

CreateMetaCategoryRequest::CreateMetaCategoryRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateMetaCategory") {
  setMethod(HttpRequest::Method::Post);
}

CreateMetaCategoryRequest::~CreateMetaCategoryRequest() {}

std::string CreateMetaCategoryRequest::getName() const {
  return name_;
}

void CreateMetaCategoryRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateMetaCategoryRequest::getComment() const {
  return comment_;
}

void CreateMetaCategoryRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setBodyParameter(std::string("Comment"), comment);
}

long CreateMetaCategoryRequest::getParentId() const {
  return parentId_;
}

void CreateMetaCategoryRequest::setParentId(long parentId) {
  parentId_ = parentId;
  setBodyParameter(std::string("ParentId"), std::to_string(parentId));
}

