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

#include <alibabacloud/facebody/model/ListBodyDbsRequest.h>

using AlibabaCloud::Facebody::Model::ListBodyDbsRequest;

ListBodyDbsRequest::ListBodyDbsRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "ListBodyDbs") {
  setMethod(HttpRequest::Method::Get);
}

ListBodyDbsRequest::~ListBodyDbsRequest() {}

bool ListBodyDbsRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void ListBodyDbsRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

long ListBodyDbsRequest::getLimit() const {
  return limit_;
}

void ListBodyDbsRequest::setLimit(long limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListBodyDbsRequest::getOssFile() const {
  return ossFile_;
}

void ListBodyDbsRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

long ListBodyDbsRequest::getOffset() const {
  return offset_;
}

void ListBodyDbsRequest::setOffset(long offset) {
  offset_ = offset;
  setParameter(std::string("Offset"), std::to_string(offset));
}

std::string ListBodyDbsRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void ListBodyDbsRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

