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

#include <alibabacloud/cbn/model/ListTransitRouterMulticastDomainVSwitchesRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterMulticastDomainVSwitchesRequest;

ListTransitRouterMulticastDomainVSwitchesRequest::ListTransitRouterMulticastDomainVSwitchesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterMulticastDomainVSwitches") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterMulticastDomainVSwitchesRequest::~ListTransitRouterMulticastDomainVSwitchesRequest() {}

long ListTransitRouterMulticastDomainVSwitchesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterMulticastDomainVSwitchesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterMulticastDomainVSwitchesRequest::getCenId() const {
  return cenId_;
}

void ListTransitRouterMulticastDomainVSwitchesRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::vector<std::string> ListTransitRouterMulticastDomainVSwitchesRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void ListTransitRouterMulticastDomainVSwitchesRequest::setVSwitchIds(const std::vector<std::string> &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
}

std::string ListTransitRouterMulticastDomainVSwitchesRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterMulticastDomainVSwitchesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTransitRouterMulticastDomainVSwitchesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterMulticastDomainVSwitchesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterMulticastDomainVSwitchesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterMulticastDomainVSwitchesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterMulticastDomainVSwitchesRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterMulticastDomainVSwitchesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterMulticastDomainVSwitchesRequest::getVpcId() const {
  return vpcId_;
}

void ListTransitRouterMulticastDomainVSwitchesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

int ListTransitRouterMulticastDomainVSwitchesRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterMulticastDomainVSwitchesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

