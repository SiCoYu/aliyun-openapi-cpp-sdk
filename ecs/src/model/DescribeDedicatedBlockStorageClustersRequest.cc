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

#include <alibabacloud/ecs/model/DescribeDedicatedBlockStorageClustersRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDedicatedBlockStorageClustersRequest;

DescribeDedicatedBlockStorageClustersRequest::DescribeDedicatedBlockStorageClustersRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeDedicatedBlockStorageClusters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedBlockStorageClustersRequest::~DescribeDedicatedBlockStorageClustersRequest() {}

long DescribeDedicatedBlockStorageClustersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDedicatedBlockStorageClustersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDedicatedBlockStorageClustersRequest::getRegionId() const {
  return regionId_;
}

void DescribeDedicatedBlockStorageClustersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDedicatedBlockStorageClustersRequest::getNextToken() const {
  return nextToken_;
}

void DescribeDedicatedBlockStorageClustersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> DescribeDedicatedBlockStorageClustersRequest::getDedicatedBlockStorageClusterId() const {
  return dedicatedBlockStorageClusterId_;
}

void DescribeDedicatedBlockStorageClustersRequest::setDedicatedBlockStorageClusterId(const std::vector<std::string> &dedicatedBlockStorageClusterId) {
  dedicatedBlockStorageClusterId_ = dedicatedBlockStorageClusterId;
}

std::string DescribeDedicatedBlockStorageClustersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDedicatedBlockStorageClustersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDedicatedBlockStorageClustersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDedicatedBlockStorageClustersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDedicatedBlockStorageClustersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDedicatedBlockStorageClustersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDedicatedBlockStorageClustersRequest::getZoneId() const {
  return zoneId_;
}

void DescribeDedicatedBlockStorageClustersRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

int DescribeDedicatedBlockStorageClustersRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeDedicatedBlockStorageClustersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeDedicatedBlockStorageClustersRequest::getCategory() const {
  return category_;
}

void DescribeDedicatedBlockStorageClustersRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::vector<std::string> DescribeDedicatedBlockStorageClustersRequest::getStatus() const {
  return status_;
}

void DescribeDedicatedBlockStorageClustersRequest::setStatus(const std::vector<std::string> &status) {
  status_ = status;
}

