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

#include <alibabacloud/dataworks-public/model/QueryPublicModelEngineRequest.h>

using AlibabaCloud::Dataworks_public::Model::QueryPublicModelEngineRequest;

QueryPublicModelEngineRequest::QueryPublicModelEngineRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "QueryPublicModelEngine") {
  setMethod(HttpRequest::Method::Post);
}

QueryPublicModelEngineRequest::~QueryPublicModelEngineRequest() {}

std::string QueryPublicModelEngineRequest::getText() const {
  return text_;
}

void QueryPublicModelEngineRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("Text"), text);
}

std::string QueryPublicModelEngineRequest::getProjectId() const {
  return projectId_;
}

void QueryPublicModelEngineRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

