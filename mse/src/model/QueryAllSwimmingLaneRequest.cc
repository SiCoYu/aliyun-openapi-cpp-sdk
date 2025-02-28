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

#include <alibabacloud/mse/model/QueryAllSwimmingLaneRequest.h>

using AlibabaCloud::Mse::Model::QueryAllSwimmingLaneRequest;

QueryAllSwimmingLaneRequest::QueryAllSwimmingLaneRequest()
    : RpcServiceRequest("mse", "2019-05-31", "QueryAllSwimmingLane") {
  setMethod(HttpRequest::Method::Post);
}

QueryAllSwimmingLaneRequest::~QueryAllSwimmingLaneRequest() {}

long QueryAllSwimmingLaneRequest::getGroupId() const {
  return groupId_;
}

void QueryAllSwimmingLaneRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

std::string QueryAllSwimmingLaneRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void QueryAllSwimmingLaneRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

