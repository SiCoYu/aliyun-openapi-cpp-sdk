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

#include <alibabacloud/sas/model/ValidateHcWarningsRequest.h>

using AlibabaCloud::Sas::Model::ValidateHcWarningsRequest;

ValidateHcWarningsRequest::ValidateHcWarningsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ValidateHcWarnings") {
  setMethod(HttpRequest::Method::Post);
}

ValidateHcWarningsRequest::~ValidateHcWarningsRequest() {}

std::string ValidateHcWarningsRequest::getRiskIds() const {
  return riskIds_;
}

void ValidateHcWarningsRequest::setRiskIds(const std::string &riskIds) {
  riskIds_ = riskIds;
  setParameter(std::string("RiskIds"), riskIds);
}

std::string ValidateHcWarningsRequest::getSourceIp() const {
  return sourceIp_;
}

void ValidateHcWarningsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ValidateHcWarningsRequest::getUuids() const {
  return uuids_;
}

void ValidateHcWarningsRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

