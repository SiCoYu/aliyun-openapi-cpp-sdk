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

#include <alibabacloud/r-kvstore/model/CreateTairInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateTairInstanceRequest;

CreateTairInstanceRequest::CreateTairInstanceRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "CreateTairInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateTairInstanceRequest::~CreateTairInstanceRequest() {}

long CreateTairInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTairInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTairInstanceRequest::getSecondaryZoneId() const {
  return secondaryZoneId_;
}

void CreateTairInstanceRequest::setSecondaryZoneId(const std::string &secondaryZoneId) {
  secondaryZoneId_ = secondaryZoneId;
  setParameter(std::string("SecondaryZoneId"), secondaryZoneId);
}

std::string CreateTairInstanceRequest::getCouponNo() const {
  return couponNo_;
}

void CreateTairInstanceRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string CreateTairInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateTairInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string CreateTairInstanceRequest::getStorageType() const {
  return storageType_;
}

void CreateTairInstanceRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string CreateTairInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateTairInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateTairInstanceRequest::getPassword() const {
  return password_;
}

void CreateTairInstanceRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateTairInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateTairInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateTairInstanceRequest::getBusinessInfo() const {
  return businessInfo_;
}

void CreateTairInstanceRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

int CreateTairInstanceRequest::getShardCount() const {
  return shardCount_;
}

void CreateTairInstanceRequest::setShardCount(int shardCount) {
  shardCount_ = shardCount;
  setParameter(std::string("ShardCount"), std::to_string(shardCount));
}

std::string CreateTairInstanceRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateTairInstanceRequest::setAutoRenewPeriod(const std::string &autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), autoRenewPeriod);
}

int CreateTairInstanceRequest::getPeriod() const {
  return period_;
}

void CreateTairInstanceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string CreateTairInstanceRequest::getBackupId() const {
  return backupId_;
}

void CreateTairInstanceRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

long CreateTairInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTairInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTairInstanceRequest::getShardType() const {
  return shardType_;
}

void CreateTairInstanceRequest::setShardType(const std::string &shardType) {
  shardType_ = shardType;
  setParameter(std::string("ShardType"), shardType);
}

std::string CreateTairInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateTairInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateTairInstanceRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CreateTairInstanceRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string CreateTairInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void CreateTairInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string CreateTairInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateTairInstanceRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string CreateTairInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateTairInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateTairInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateTairInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateTairInstanceRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void CreateTairInstanceRequest::setAutoUseCoupon(const std::string &autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon);
}

int CreateTairInstanceRequest::getStorage() const {
  return storage_;
}

void CreateTairInstanceRequest::setStorage(int storage) {
  storage_ = storage;
  setParameter(std::string("Storage"), std::to_string(storage));
}

std::string CreateTairInstanceRequest::getInstanceClass() const {
  return instanceClass_;
}

void CreateTairInstanceRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string CreateTairInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateTairInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateTairInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateTairInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateTairInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void CreateTairInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

bool CreateTairInstanceRequest::getAutoPay() const {
  return autoPay_;
}

void CreateTairInstanceRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateTairInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTairInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTairInstanceRequest::getSrcDBInstanceId() const {
  return srcDBInstanceId_;
}

void CreateTairInstanceRequest::setSrcDBInstanceId(const std::string &srcDBInstanceId) {
  srcDBInstanceId_ = srcDBInstanceId;
  setParameter(std::string("SrcDBInstanceId"), srcDBInstanceId);
}

std::string CreateTairInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTairInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateTairInstanceRequest::getGlobalInstanceId() const {
  return globalInstanceId_;
}

void CreateTairInstanceRequest::setGlobalInstanceId(const std::string &globalInstanceId) {
  globalInstanceId_ = globalInstanceId;
  setParameter(std::string("GlobalInstanceId"), globalInstanceId);
}

std::string CreateTairInstanceRequest::getVpcId() const {
  return vpcId_;
}

void CreateTairInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateTairInstanceRequest::getChargeType() const {
  return chargeType_;
}

void CreateTairInstanceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

