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

#include <alibabacloud/config/model/DescribeConfigRuleRequest.h>

using AlibabaCloud::Config::Model::DescribeConfigRuleRequest;

DescribeConfigRuleRequest::DescribeConfigRuleRequest()
    : RpcServiceRequest("config", "2019-01-08", "DescribeConfigRule") {
  setMethod(HttpRequest::Method::Post);
}

DescribeConfigRuleRequest::~DescribeConfigRuleRequest() {}

std::string DescribeConfigRuleRequest::getConfigRuleId() const {
  return configRuleId_;
}

void DescribeConfigRuleRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setParameter(std::string("ConfigRuleId"), configRuleId);
}

bool DescribeConfigRuleRequest::getMultiAccount() const {
  return multiAccount_;
}

void DescribeConfigRuleRequest::setMultiAccount(bool multiAccount) {
  multiAccount_ = multiAccount;
  setParameter(std::string("MultiAccount"), multiAccount ? "true" : "false");
}

long DescribeConfigRuleRequest::getMemberId() const {
  return memberId_;
}

void DescribeConfigRuleRequest::setMemberId(long memberId) {
  memberId_ = memberId;
  setParameter(std::string("MemberId"), std::to_string(memberId));
}

