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

#include <alibabacloud/rds/model/DescribePGHbaConfigRequest.h>

using AlibabaCloud::Rds::Model::DescribePGHbaConfigRequest;

DescribePGHbaConfigRequest::DescribePGHbaConfigRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribePGHbaConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribePGHbaConfigRequest::~DescribePGHbaConfigRequest() {}

long DescribePGHbaConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePGHbaConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePGHbaConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePGHbaConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePGHbaConfigRequest::getClientToken() const {
  return clientToken_;
}

void DescribePGHbaConfigRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribePGHbaConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePGHbaConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribePGHbaConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePGHbaConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribePGHbaConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePGHbaConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribePGHbaConfigRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribePGHbaConfigRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

