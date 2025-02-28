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

#include <alibabacloud/rds/model/ModifyDBInstanceSpecRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceSpecRequest;

ModifyDBInstanceSpecRequest::ModifyDBInstanceSpecRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceSpecRequest::~ModifyDBInstanceSpecRequest() {}

long ModifyDBInstanceSpecRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifyDBInstanceSpecRequest::getDBInstanceStorage() const {
  return dBInstanceStorage_;
}

void ModifyDBInstanceSpecRequest::setDBInstanceStorage(int dBInstanceStorage) {
  dBInstanceStorage_ = dBInstanceStorage;
  setParameter(std::string("DBInstanceStorage"), std::to_string(dBInstanceStorage));
}

std::string ModifyDBInstanceSpecRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBInstanceSpecRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBInstanceSpecRequest::getEngineVersion() const {
  return engineVersion_;
}

void ModifyDBInstanceSpecRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string ModifyDBInstanceSpecRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceSpecRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceSpecRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyDBInstanceSpecRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

ModifyDBInstanceSpecRequest::ServerlessConfiguration ModifyDBInstanceSpecRequest::getServerlessConfiguration() const {
  return serverlessConfiguration_;
}

void ModifyDBInstanceSpecRequest::setServerlessConfiguration(const ModifyDBInstanceSpecRequest::ServerlessConfiguration &serverlessConfiguration) {
  serverlessConfiguration_ = serverlessConfiguration;
  setParameter(std::string("ServerlessConfiguration") + ".MinCapacity", std::to_string(serverlessConfiguration.minCapacity));
  setParameter(std::string("ServerlessConfiguration") + ".MaxCapacity", std::to_string(serverlessConfiguration.maxCapacity));
}

std::string ModifyDBInstanceSpecRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void ModifyDBInstanceSpecRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string ModifyDBInstanceSpecRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceSpecRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceSpecRequest::getSwitchTime() const {
  return switchTime_;
}

void ModifyDBInstanceSpecRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string ModifyDBInstanceSpecRequest::getDBInstanceStorageType() const {
  return dBInstanceStorageType_;
}

void ModifyDBInstanceSpecRequest::setDBInstanceStorageType(const std::string &dBInstanceStorageType) {
  dBInstanceStorageType_ = dBInstanceStorageType;
  setParameter(std::string("DBInstanceStorageType"), dBInstanceStorageType);
}

std::string ModifyDBInstanceSpecRequest::getSourceBiz() const {
  return sourceBiz_;
}

void ModifyDBInstanceSpecRequest::setSourceBiz(const std::string &sourceBiz) {
  sourceBiz_ = sourceBiz;
  setParameter(std::string("SourceBiz"), sourceBiz);
}

std::string ModifyDBInstanceSpecRequest::getDedicatedHostGroupId() const {
  return dedicatedHostGroupId_;
}

void ModifyDBInstanceSpecRequest::setDedicatedHostGroupId(const std::string &dedicatedHostGroupId) {
  dedicatedHostGroupId_ = dedicatedHostGroupId;
  setParameter(std::string("DedicatedHostGroupId"), dedicatedHostGroupId);
}

std::string ModifyDBInstanceSpecRequest::getDirection() const {
  return direction_;
}

void ModifyDBInstanceSpecRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::string ModifyDBInstanceSpecRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceSpecRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceSpecRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceSpecRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBInstanceSpecRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceSpecRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long ModifyDBInstanceSpecRequest::getUsedTime() const {
  return usedTime_;
}

void ModifyDBInstanceSpecRequest::setUsedTime(long usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

std::string ModifyDBInstanceSpecRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void ModifyDBInstanceSpecRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string ModifyDBInstanceSpecRequest::getZoneId() const {
  return zoneId_;
}

void ModifyDBInstanceSpecRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string ModifyDBInstanceSpecRequest::getCategory() const {
  return category_;
}

void ModifyDBInstanceSpecRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string ModifyDBInstanceSpecRequest::getPayType() const {
  return payType_;
}

void ModifyDBInstanceSpecRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

