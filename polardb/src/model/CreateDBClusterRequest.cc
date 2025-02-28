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

#include <alibabacloud/polardb/model/CreateDBClusterRequest.h>

using AlibabaCloud::Polardb::Model::CreateDBClusterRequest;

CreateDBClusterRequest::CreateDBClusterRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateDBCluster") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBClusterRequest::~CreateDBClusterRequest() {}

long CreateDBClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDBClusterRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void CreateDBClusterRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string CreateDBClusterRequest::getCreationCategory() const {
  return creationCategory_;
}

void CreateDBClusterRequest::setCreationCategory(const std::string &creationCategory) {
  creationCategory_ = creationCategory;
  setParameter(std::string("CreationCategory"), creationCategory);
}

std::string CreateDBClusterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBClusterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDBClusterRequest::getDBNodeClass() const {
  return dBNodeClass_;
}

void CreateDBClusterRequest::setDBNodeClass(const std::string &dBNodeClass) {
  dBNodeClass_ = dBNodeClass;
  setParameter(std::string("DBNodeClass"), dBNodeClass);
}

std::string CreateDBClusterRequest::getCreationOption() const {
  return creationOption_;
}

void CreateDBClusterRequest::setCreationOption(const std::string &creationOption) {
  creationOption_ = creationOption;
  setParameter(std::string("CreationOption"), creationOption);
}

std::string CreateDBClusterRequest::getSourceResourceId() const {
  return sourceResourceId_;
}

void CreateDBClusterRequest::setSourceResourceId(const std::string &sourceResourceId) {
  sourceResourceId_ = sourceResourceId;
  setParameter(std::string("SourceResourceId"), sourceResourceId);
}

std::string CreateDBClusterRequest::getBackupRetentionPolicyOnClusterDeletion() const {
  return backupRetentionPolicyOnClusterDeletion_;
}

void CreateDBClusterRequest::setBackupRetentionPolicyOnClusterDeletion(const std::string &backupRetentionPolicyOnClusterDeletion) {
  backupRetentionPolicyOnClusterDeletion_ = backupRetentionPolicyOnClusterDeletion;
  setParameter(std::string("BackupRetentionPolicyOnClusterDeletion"), backupRetentionPolicyOnClusterDeletion);
}

std::string CreateDBClusterRequest::getPeriod() const {
  return period_;
}

void CreateDBClusterRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

long CreateDBClusterRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDBClusterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDBClusterRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBClusterRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateDBClusterRequest::getSecurityIPList() const {
  return securityIPList_;
}

void CreateDBClusterRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string CreateDBClusterRequest::getDBMinorVersion() const {
  return dBMinorVersion_;
}

void CreateDBClusterRequest::setDBMinorVersion(const std::string &dBMinorVersion) {
  dBMinorVersion_ = dBMinorVersion;
  setParameter(std::string("DBMinorVersion"), dBMinorVersion);
}

bool CreateDBClusterRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateDBClusterRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateDBClusterRequest::getZoneId() const {
  return zoneId_;
}

void CreateDBClusterRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

bool CreateDBClusterRequest::getTDEStatus() const {
  return tDEStatus_;
}

void CreateDBClusterRequest::setTDEStatus(bool tDEStatus) {
  tDEStatus_ = tDEStatus;
  setParameter(std::string("TDEStatus"), tDEStatus ? "true" : "false");
}

std::string CreateDBClusterRequest::getLowerCaseTableNames() const {
  return lowerCaseTableNames_;
}

void CreateDBClusterRequest::setLowerCaseTableNames(const std::string &lowerCaseTableNames) {
  lowerCaseTableNames_ = lowerCaseTableNames;
  setParameter(std::string("LowerCaseTableNames"), lowerCaseTableNames);
}

std::string CreateDBClusterRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBClusterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBClusterRequest::getDefaultTimeZone() const {
  return defaultTimeZone_;
}

void CreateDBClusterRequest::setDefaultTimeZone(const std::string &defaultTimeZone) {
  defaultTimeZone_ = defaultTimeZone;
  setParameter(std::string("DefaultTimeZone"), defaultTimeZone);
}

std::string CreateDBClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBClusterRequest::getClusterNetworkType() const {
  return clusterNetworkType_;
}

void CreateDBClusterRequest::setClusterNetworkType(const std::string &clusterNetworkType) {
  clusterNetworkType_ = clusterNetworkType;
  setParameter(std::string("ClusterNetworkType"), clusterNetworkType);
}

std::string CreateDBClusterRequest::getParameterGroupId() const {
  return parameterGroupId_;
}

void CreateDBClusterRequest::setParameterGroupId(const std::string &parameterGroupId) {
  parameterGroupId_ = parameterGroupId;
  setParameter(std::string("ParameterGroupId"), parameterGroupId);
}

std::string CreateDBClusterRequest::getRegionId() const {
  return regionId_;
}

void CreateDBClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBClusterRequest::getEngine() const {
  return engine_;
}

void CreateDBClusterRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CreateDBClusterRequest::getGDNId() const {
  return gDNId_;
}

void CreateDBClusterRequest::setGDNId(const std::string &gDNId) {
  gDNId_ = gDNId;
  setParameter(std::string("GDNId"), gDNId);
}

std::string CreateDBClusterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDBClusterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDBClusterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDBClusterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateDBClusterRequest::getUsedTime() const {
  return usedTime_;
}

void CreateDBClusterRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string CreateDBClusterRequest::getVPCId() const {
  return vPCId_;
}

void CreateDBClusterRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CreateDBClusterRequest::getDBType() const {
  return dBType_;
}

void CreateDBClusterRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

std::string CreateDBClusterRequest::getDBVersion() const {
  return dBVersion_;
}

void CreateDBClusterRequest::setDBVersion(const std::string &dBVersion) {
  dBVersion_ = dBVersion;
  setParameter(std::string("DBVersion"), dBVersion);
}

std::string CreateDBClusterRequest::getCloneDataPoint() const {
  return cloneDataPoint_;
}

void CreateDBClusterRequest::setCloneDataPoint(const std::string &cloneDataPoint) {
  cloneDataPoint_ = cloneDataPoint;
  setParameter(std::string("CloneDataPoint"), cloneDataPoint);
}

std::string CreateDBClusterRequest::getPayType() const {
  return payType_;
}

void CreateDBClusterRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

