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

#include <alibabacloud/mse/model/ImportServicesRequest.h>

using AlibabaCloud::Mse::Model::ImportServicesRequest;

ImportServicesRequest::ImportServicesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ImportServices") {
  setMethod(HttpRequest::Method::Post);
}

ImportServicesRequest::~ImportServicesRequest() {}

std::string ImportServicesRequest::getSourceId() const {
  return sourceId_;
}

void ImportServicesRequest::setSourceId(const std::string &sourceId) {
  sourceId_ = sourceId;
  setParameter(std::string("SourceId"), sourceId);
}

std::string ImportServicesRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void ImportServicesRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::vector<ImportServicesRequest::ServiceList> ImportServicesRequest::getServiceList() const {
  return serviceList_;
}

void ImportServicesRequest::setServiceList(const std::vector<ImportServicesRequest::ServiceList> &serviceList) {
  serviceList_ = serviceList;
  for(int dep1 = 0; dep1 != serviceList.size(); dep1++) {
    setParameter(std::string("ServiceList") + "." + std::to_string(dep1 + 1) + ".ServiceProtocol", serviceList[dep1].serviceProtocol);
    setParameter(std::string("ServiceList") + "." + std::to_string(dep1 + 1) + ".Name", serviceList[dep1].name);
    setParameter(std::string("ServiceList") + "." + std::to_string(dep1 + 1) + ".Namespace", serviceList[dep1]._namespace);
    setParameter(std::string("ServiceList") + "." + std::to_string(dep1 + 1) + ".GroupName", serviceList[dep1].groupName);
    for(int dep2 = 0; dep2 != serviceList[dep1].ips.size(); dep2++) {
      setParameter(std::string("ServiceList") + "." + std::to_string(dep1 + 1) + ".Ips." + std::to_string(dep2 + 1), serviceList[dep1].ips[dep2]);
    }
    setParameter(std::string("ServiceList") + "." + std::to_string(dep1 + 1) + ".ServicePort", std::to_string(serviceList[dep1].servicePort));
  }
}

std::string ImportServicesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ImportServicesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string ImportServicesRequest::getSourceType() const {
  return sourceType_;
}

void ImportServicesRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

