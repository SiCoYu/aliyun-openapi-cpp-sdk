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

#include <alibabacloud/ecs/model/ReplaceSystemDiskRequest.h>

using AlibabaCloud::Ecs::Model::ReplaceSystemDiskRequest;

ReplaceSystemDiskRequest::ReplaceSystemDiskRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ReplaceSystemDisk") {
  setMethod(HttpRequest::Method::Post);
}

ReplaceSystemDiskRequest::~ReplaceSystemDiskRequest() {}

long ReplaceSystemDiskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReplaceSystemDiskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReplaceSystemDiskRequest::getImageId() const {
  return imageId_;
}

void ReplaceSystemDiskRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ReplaceSystemDiskRequest::getClientToken() const {
  return clientToken_;
}

void ReplaceSystemDiskRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ReplaceSystemDiskRequest::getSecurityEnhancementStrategy() const {
  return securityEnhancementStrategy_;
}

void ReplaceSystemDiskRequest::setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy) {
  securityEnhancementStrategy_ = securityEnhancementStrategy;
  setParameter(std::string("SecurityEnhancementStrategy"), securityEnhancementStrategy);
}

std::string ReplaceSystemDiskRequest::getKeyPairName() const {
  return keyPairName_;
}

void ReplaceSystemDiskRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::string ReplaceSystemDiskRequest::getPlatform() const {
  return platform_;
}

void ReplaceSystemDiskRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string ReplaceSystemDiskRequest::getPassword() const {
  return password_;
}

void ReplaceSystemDiskRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

bool ReplaceSystemDiskRequest::getLoginAsNonRoot() const {
  return loginAsNonRoot_;
}

void ReplaceSystemDiskRequest::setLoginAsNonRoot(bool loginAsNonRoot) {
  loginAsNonRoot_ = loginAsNonRoot;
  setParameter(std::string("LoginAsNonRoot"), loginAsNonRoot ? "true" : "false");
}

bool ReplaceSystemDiskRequest::getPasswordInherit() const {
  return passwordInherit_;
}

void ReplaceSystemDiskRequest::setPasswordInherit(bool passwordInherit) {
  passwordInherit_ = passwordInherit;
  setParameter(std::string("PasswordInherit"), passwordInherit ? "true" : "false");
}

std::string ReplaceSystemDiskRequest::getDiskId() const {
  return diskId_;
}

void ReplaceSystemDiskRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

std::string ReplaceSystemDiskRequest::getArchitecture() const {
  return architecture_;
}

void ReplaceSystemDiskRequest::setArchitecture(const std::string &architecture) {
  architecture_ = architecture;
  setParameter(std::string("Architecture"), architecture);
}

std::string ReplaceSystemDiskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReplaceSystemDiskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReplaceSystemDiskRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReplaceSystemDiskRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReplaceSystemDiskRequest::getOwnerId() const {
  return ownerId_;
}

void ReplaceSystemDiskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ReplaceSystemDiskRequest::getInstanceId() const {
  return instanceId_;
}

void ReplaceSystemDiskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ReplaceSystemDiskRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void ReplaceSystemDiskRequest::setSystemDiskSize(int systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDisk.Size"), std::to_string(systemDiskSize));
}

bool ReplaceSystemDiskRequest::getUseAdditionalService() const {
  return useAdditionalService_;
}

void ReplaceSystemDiskRequest::setUseAdditionalService(bool useAdditionalService) {
  useAdditionalService_ = useAdditionalService;
  setParameter(std::string("UseAdditionalService"), useAdditionalService ? "true" : "false");
}

