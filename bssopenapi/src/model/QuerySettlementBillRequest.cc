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

#include <alibabacloud/bssopenapi/model/QuerySettlementBillRequest.h>

using AlibabaCloud::BssOpenApi::Model::QuerySettlementBillRequest;

QuerySettlementBillRequest::QuerySettlementBillRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QuerySettlementBill") {
  setMethod(HttpRequest::Method::Post);
}

QuerySettlementBillRequest::~QuerySettlementBillRequest() {}

std::string QuerySettlementBillRequest::getProductCode() const {
  return productCode_;
}

void QuerySettlementBillRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

bool QuerySettlementBillRequest::getIsHideZeroCharge() const {
  return isHideZeroCharge_;
}

void QuerySettlementBillRequest::setIsHideZeroCharge(bool isHideZeroCharge) {
  isHideZeroCharge_ = isHideZeroCharge;
  setParameter(std::string("IsHideZeroCharge"), isHideZeroCharge ? "true" : "false");
}

std::string QuerySettlementBillRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void QuerySettlementBillRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

std::string QuerySettlementBillRequest::getEndTime() const {
  return endTime_;
}

void QuerySettlementBillRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string QuerySettlementBillRequest::getBillingCycle() const {
  return billingCycle_;
}

void QuerySettlementBillRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setParameter(std::string("BillingCycle"), billingCycle);
}

std::string QuerySettlementBillRequest::getStartTime() const {
  return startTime_;
}

void QuerySettlementBillRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long QuerySettlementBillRequest::getOwnerId() const {
  return ownerId_;
}

void QuerySettlementBillRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int QuerySettlementBillRequest::getPageNum() const {
  return pageNum_;
}

void QuerySettlementBillRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string QuerySettlementBillRequest::getType() const {
  return type_;
}

void QuerySettlementBillRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string QuerySettlementBillRequest::getProductType() const {
  return productType_;
}

void QuerySettlementBillRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

int QuerySettlementBillRequest::getPageSize() const {
  return pageSize_;
}

void QuerySettlementBillRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

