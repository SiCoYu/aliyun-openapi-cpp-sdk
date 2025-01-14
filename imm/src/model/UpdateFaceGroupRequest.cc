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

#include <alibabacloud/imm/model/UpdateFaceGroupRequest.h>

using AlibabaCloud::Imm::Model::UpdateFaceGroupRequest;

UpdateFaceGroupRequest::UpdateFaceGroupRequest()
    : RpcServiceRequest("imm", "2017-09-06", "UpdateFaceGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFaceGroupRequest::~UpdateFaceGroupRequest() {}

std::string UpdateFaceGroupRequest::getProject() const {
  return project_;
}

void UpdateFaceGroupRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

std::string UpdateFaceGroupRequest::getExternalId() const {
  return externalId_;
}

void UpdateFaceGroupRequest::setExternalId(const std::string &externalId) {
  externalId_ = externalId;
  setParameter(std::string("ExternalId"), externalId);
}

std::string UpdateFaceGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateFaceGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateFaceGroupRequest::getGroupId() const {
  return groupId_;
}

void UpdateFaceGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string UpdateFaceGroupRequest::getRemarksB() const {
  return remarksB_;
}

void UpdateFaceGroupRequest::setRemarksB(const std::string &remarksB) {
  remarksB_ = remarksB;
  setParameter(std::string("RemarksB"), remarksB);
}

std::string UpdateFaceGroupRequest::getRemarksA() const {
  return remarksA_;
}

void UpdateFaceGroupRequest::setRemarksA(const std::string &remarksA) {
  remarksA_ = remarksA;
  setParameter(std::string("RemarksA"), remarksA);
}

std::string UpdateFaceGroupRequest::getGroupName() const {
  return groupName_;
}

void UpdateFaceGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string UpdateFaceGroupRequest::getResetItems() const {
  return resetItems_;
}

void UpdateFaceGroupRequest::setResetItems(const std::string &resetItems) {
  resetItems_ = resetItems;
  setParameter(std::string("ResetItems"), resetItems);
}

std::string UpdateFaceGroupRequest::getRemarksArrayA() const {
  return remarksArrayA_;
}

void UpdateFaceGroupRequest::setRemarksArrayA(const std::string &remarksArrayA) {
  remarksArrayA_ = remarksArrayA;
  setParameter(std::string("RemarksArrayA"), remarksArrayA);
}

std::string UpdateFaceGroupRequest::getRemarksArrayB() const {
  return remarksArrayB_;
}

void UpdateFaceGroupRequest::setRemarksArrayB(const std::string &remarksArrayB) {
  remarksArrayB_ = remarksArrayB;
  setParameter(std::string("RemarksArrayB"), remarksArrayB);
}

std::string UpdateFaceGroupRequest::getRemarksD() const {
  return remarksD_;
}

void UpdateFaceGroupRequest::setRemarksD(const std::string &remarksD) {
  remarksD_ = remarksD;
  setParameter(std::string("RemarksD"), remarksD);
}

std::string UpdateFaceGroupRequest::getRemarksC() const {
  return remarksC_;
}

void UpdateFaceGroupRequest::setRemarksC(const std::string &remarksC) {
  remarksC_ = remarksC;
  setParameter(std::string("RemarksC"), remarksC);
}

std::string UpdateFaceGroupRequest::getSetId() const {
  return setId_;
}

void UpdateFaceGroupRequest::setSetId(const std::string &setId) {
  setId_ = setId;
  setParameter(std::string("SetId"), setId);
}

std::string UpdateFaceGroupRequest::getGroupCoverFaceId() const {
  return groupCoverFaceId_;
}

void UpdateFaceGroupRequest::setGroupCoverFaceId(const std::string &groupCoverFaceId) {
  groupCoverFaceId_ = groupCoverFaceId;
  setParameter(std::string("GroupCoverFaceId"), groupCoverFaceId);
}

