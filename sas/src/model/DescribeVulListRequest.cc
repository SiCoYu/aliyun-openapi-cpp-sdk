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

#include <alibabacloud/sas/model/DescribeVulListRequest.h>

using AlibabaCloud::Sas::Model::DescribeVulListRequest;

DescribeVulListRequest::DescribeVulListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeVulList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVulListRequest::~DescribeVulListRequest() {}

int DescribeVulListRequest::getMinScore() const {
  return minScore_;
}

void DescribeVulListRequest::setMinScore(int minScore) {
  minScore_ = minScore;
  setParameter(std::string("MinScore"), std::to_string(minScore));
}

std::string DescribeVulListRequest::getAttachTypes() const {
  return attachTypes_;
}

void DescribeVulListRequest::setAttachTypes(const std::string &attachTypes) {
  attachTypes_ = attachTypes;
  setParameter(std::string("AttachTypes"), attachTypes);
}

std::string DescribeVulListRequest::getType() const {
  return type_;
}

void DescribeVulListRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeVulListRequest::getVpcInstanceIds() const {
  return vpcInstanceIds_;
}

void DescribeVulListRequest::setVpcInstanceIds(const std::string &vpcInstanceIds) {
  vpcInstanceIds_ = vpcInstanceIds;
  setParameter(std::string("VpcInstanceIds"), vpcInstanceIds);
}

long DescribeVulListRequest::getCreateTsStart() const {
  return createTsStart_;
}

void DescribeVulListRequest::setCreateTsStart(long createTsStart) {
  createTsStart_ = createTsStart;
  setParameter(std::string("CreateTsStart"), std::to_string(createTsStart));
}

std::string DescribeVulListRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void DescribeVulListRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string DescribeVulListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeVulListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribeVulListRequest::getModifyTsEnd() const {
  return modifyTsEnd_;
}

void DescribeVulListRequest::setModifyTsEnd(long modifyTsEnd) {
  modifyTsEnd_ = modifyTsEnd;
  setParameter(std::string("ModifyTsEnd"), std::to_string(modifyTsEnd));
}

std::string DescribeVulListRequest::getLevel() const {
  return level_;
}

void DescribeVulListRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeVulListRequest::getResource() const {
  return resource_;
}

void DescribeVulListRequest::setResource(const std::string &resource) {
  resource_ = resource;
  setParameter(std::string("Resource"), resource);
}

std::string DescribeVulListRequest::getGroupId() const {
  return groupId_;
}

void DescribeVulListRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeVulListRequest::getAliasName() const {
  return aliasName_;
}

void DescribeVulListRequest::setAliasName(const std::string &aliasName) {
  aliasName_ = aliasName;
  setParameter(std::string("AliasName"), aliasName);
}

std::string DescribeVulListRequest::getName() const {
  return name_;
}

void DescribeVulListRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeVulListRequest::getIds() const {
  return ids_;
}

void DescribeVulListRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setParameter(std::string("Ids"), ids);
}

long DescribeVulListRequest::getCreateTsEnd() const {
  return createTsEnd_;
}

void DescribeVulListRequest::setCreateTsEnd(long createTsEnd) {
  createTsEnd_ = createTsEnd;
  setParameter(std::string("CreateTsEnd"), std::to_string(createTsEnd));
}

std::string DescribeVulListRequest::getNecessity() const {
  return necessity_;
}

void DescribeVulListRequest::setNecessity(const std::string &necessity) {
  necessity_ = necessity;
  setParameter(std::string("Necessity"), necessity);
}

std::string DescribeVulListRequest::getUuids() const {
  return uuids_;
}

void DescribeVulListRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

std::string DescribeVulListRequest::getStatusList() const {
  return statusList_;
}

void DescribeVulListRequest::setStatusList(const std::string &statusList) {
  statusList_ = statusList;
  setParameter(std::string("StatusList"), statusList);
}

std::string DescribeVulListRequest::getTargetType() const {
  return targetType_;
}

void DescribeVulListRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string DescribeVulListRequest::getRemark() const {
  return remark_;
}

void DescribeVulListRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribeVulListRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void DescribeVulListRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

int DescribeVulListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVulListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeVulListRequest::getModifyTsStart() const {
  return modifyTsStart_;
}

void DescribeVulListRequest::setModifyTsStart(long modifyTsStart) {
  modifyTsStart_ = modifyTsStart;
  setParameter(std::string("ModifyTsStart"), std::to_string(modifyTsStart));
}

std::string DescribeVulListRequest::getLang() const {
  return lang_;
}

void DescribeVulListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeVulListRequest::getDealed() const {
  return dealed_;
}

void DescribeVulListRequest::setDealed(const std::string &dealed) {
  dealed_ = dealed;
  setParameter(std::string("Dealed"), dealed);
}

int DescribeVulListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeVulListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeVulListRequest::getClusterId() const {
  return clusterId_;
}

void DescribeVulListRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeVulListRequest::getBatchName() const {
  return batchName_;
}

void DescribeVulListRequest::setBatchName(const std::string &batchName) {
  batchName_ = batchName;
  setParameter(std::string("BatchName"), batchName);
}

