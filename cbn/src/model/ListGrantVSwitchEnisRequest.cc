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

#include <alibabacloud/cbn/model/ListGrantVSwitchEnisRequest.h>

using AlibabaCloud::Cbn::Model::ListGrantVSwitchEnisRequest;

ListGrantVSwitchEnisRequest::ListGrantVSwitchEnisRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListGrantVSwitchEnis") {
  setMethod(HttpRequest::Method::Post);
}

ListGrantVSwitchEnisRequest::~ListGrantVSwitchEnisRequest() {}

long ListGrantVSwitchEnisRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListGrantVSwitchEnisRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListGrantVSwitchEnisRequest::getCenId() const {
  return cenId_;
}

void ListGrantVSwitchEnisRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

int ListGrantVSwitchEnisRequest::getPageNumber() const {
  return pageNumber_;
}

void ListGrantVSwitchEnisRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListGrantVSwitchEnisRequest::getPageSize() const {
  return pageSize_;
}

void ListGrantVSwitchEnisRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListGrantVSwitchEnisRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListGrantVSwitchEnisRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListGrantVSwitchEnisRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListGrantVSwitchEnisRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListGrantVSwitchEnisRequest::getOwnerId() const {
  return ownerId_;
}

void ListGrantVSwitchEnisRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListGrantVSwitchEnisRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ListGrantVSwitchEnisRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string ListGrantVSwitchEnisRequest::getVpcId() const {
  return vpcId_;
}

void ListGrantVSwitchEnisRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

