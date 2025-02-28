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

#include <alibabacloud/eas/model/CreateResourceLogRequest.h>

using AlibabaCloud::Eas::Model::CreateResourceLogRequest;

CreateResourceLogRequest::CreateResourceLogRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/resources/[ClusterId]/[ResourceId]/log"};
  setMethod(HttpRequest::Method::Post);
}

CreateResourceLogRequest::~CreateResourceLogRequest() {}

string CreateResourceLogRequest::getResourceId() const {
  return resourceId_;
}

void CreateResourceLogRequest::setResourceId(string resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), std::to_string(resourceId));
}

string CreateResourceLogRequest::getClusterId() const {
  return clusterId_;
}

void CreateResourceLogRequest::setClusterId(string clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), std::to_string(clusterId));
}

std::string CreateResourceLogRequest::getBody() const {
  return body_;
}

void CreateResourceLogRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

