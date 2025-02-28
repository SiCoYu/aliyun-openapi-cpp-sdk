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

#include <alibabacloud/dataworks-public/model/CreateBusinessRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateBusinessRequest;

CreateBusinessRequest::CreateBusinessRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateBusiness") {
  setMethod(HttpRequest::Method::Post);
}

CreateBusinessRequest::~CreateBusinessRequest() {}

std::string CreateBusinessRequest::getOwner() const {
  return owner_;
}

void CreateBusinessRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

std::string CreateBusinessRequest::getBusinessName() const {
  return businessName_;
}

void CreateBusinessRequest::setBusinessName(const std::string &businessName) {
  businessName_ = businessName;
  setBodyParameter(std::string("BusinessName"), businessName);
}

std::string CreateBusinessRequest::getDescription() const {
  return description_;
}

void CreateBusinessRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

long CreateBusinessRequest::getProjectId() const {
  return projectId_;
}

void CreateBusinessRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string CreateBusinessRequest::getUseType() const {
  return useType_;
}

void CreateBusinessRequest::setUseType(const std::string &useType) {
  useType_ = useType;
  setBodyParameter(std::string("UseType"), useType);
}

std::string CreateBusinessRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void CreateBusinessRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

