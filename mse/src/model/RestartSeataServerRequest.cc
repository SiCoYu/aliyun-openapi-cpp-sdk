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

#include <alibabacloud/mse/model/RestartSeataServerRequest.h>

using AlibabaCloud::Mse::Model::RestartSeataServerRequest;

RestartSeataServerRequest::RestartSeataServerRequest()
    : RpcServiceRequest("mse", "2019-05-31", "RestartSeataServer") {
  setMethod(HttpRequest::Method::Post);
}

RestartSeataServerRequest::~RestartSeataServerRequest() {}

std::string RestartSeataServerRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void RestartSeataServerRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string RestartSeataServerRequest::getSeataServerUniqueId() const {
  return seataServerUniqueId_;
}

void RestartSeataServerRequest::setSeataServerUniqueId(const std::string &seataServerUniqueId) {
  seataServerUniqueId_ = seataServerUniqueId;
  setParameter(std::string("SeataServerUniqueId"), seataServerUniqueId);
}

