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

#include <alibabacloud/rds/model/DeleteParameterGroupRequest.h>

using AlibabaCloud::Rds::Model::DeleteParameterGroupRequest;

DeleteParameterGroupRequest::DeleteParameterGroupRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteParameterGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteParameterGroupRequest::~DeleteParameterGroupRequest() {}

long DeleteParameterGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteParameterGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteParameterGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteParameterGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DeleteParameterGroupRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteParameterGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteParameterGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteParameterGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteParameterGroupRequest::getParameterGroupId() const {
  return parameterGroupId_;
}

void DeleteParameterGroupRequest::setParameterGroupId(const std::string &parameterGroupId) {
  parameterGroupId_ = parameterGroupId;
  setParameter(std::string("ParameterGroupId"), parameterGroupId);
}

std::string DeleteParameterGroupRequest::getRegionId() const {
  return regionId_;
}

void DeleteParameterGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

