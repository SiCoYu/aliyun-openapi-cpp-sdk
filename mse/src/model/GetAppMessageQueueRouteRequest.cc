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

#include <alibabacloud/mse/model/GetAppMessageQueueRouteRequest.h>

using AlibabaCloud::Mse::Model::GetAppMessageQueueRouteRequest;

GetAppMessageQueueRouteRequest::GetAppMessageQueueRouteRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetAppMessageQueueRoute") {
  setMethod(HttpRequest::Method::Post);
}

GetAppMessageQueueRouteRequest::~GetAppMessageQueueRouteRequest() {}

std::string GetAppMessageQueueRouteRequest::getAppId() const {
  return appId_;
}

void GetAppMessageQueueRouteRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string GetAppMessageQueueRouteRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetAppMessageQueueRouteRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string GetAppMessageQueueRouteRequest::getRegion() const {
  return region_;
}

void GetAppMessageQueueRouteRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

