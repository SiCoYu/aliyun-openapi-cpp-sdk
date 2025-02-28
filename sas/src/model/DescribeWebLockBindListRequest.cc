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

#include <alibabacloud/sas/model/DescribeWebLockBindListRequest.h>

using AlibabaCloud::Sas::Model::DescribeWebLockBindListRequest;

DescribeWebLockBindListRequest::DescribeWebLockBindListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeWebLockBindList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWebLockBindListRequest::~DescribeWebLockBindListRequest() {}

std::string DescribeWebLockBindListRequest::getRemark() const {
  return remark_;
}

void DescribeWebLockBindListRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

int DescribeWebLockBindListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeWebLockBindListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeWebLockBindListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeWebLockBindListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeWebLockBindListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeWebLockBindListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeWebLockBindListRequest::getLang() const {
  return lang_;
}

void DescribeWebLockBindListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeWebLockBindListRequest::getStatus() const {
  return status_;
}

void DescribeWebLockBindListRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

