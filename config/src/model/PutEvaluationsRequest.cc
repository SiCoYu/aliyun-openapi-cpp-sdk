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

#include <alibabacloud/config/model/PutEvaluationsRequest.h>

using AlibabaCloud::Config::Model::PutEvaluationsRequest;

PutEvaluationsRequest::PutEvaluationsRequest()
    : RpcServiceRequest("config", "2019-01-08", "PutEvaluations") {
  setMethod(HttpRequest::Method::Post);
}

PutEvaluationsRequest::~PutEvaluationsRequest() {}

std::string PutEvaluationsRequest::getEvaluations() const {
  return evaluations_;
}

void PutEvaluationsRequest::setEvaluations(const std::string &evaluations) {
  evaluations_ = evaluations;
  setBodyParameter(std::string("Evaluations"), evaluations);
}

bool PutEvaluationsRequest::getDeleteMode() const {
  return deleteMode_;
}

void PutEvaluationsRequest::setDeleteMode(bool deleteMode) {
  deleteMode_ = deleteMode;
  setBodyParameter(std::string("DeleteMode"), deleteMode ? "true" : "false");
}

std::string PutEvaluationsRequest::getResultToken() const {
  return resultToken_;
}

void PutEvaluationsRequest::setResultToken(const std::string &resultToken) {
  resultToken_ = resultToken;
  setBodyParameter(std::string("ResultToken"), resultToken);
}

