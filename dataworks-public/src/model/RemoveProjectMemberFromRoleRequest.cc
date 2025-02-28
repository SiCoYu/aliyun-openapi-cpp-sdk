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

#include <alibabacloud/dataworks-public/model/RemoveProjectMemberFromRoleRequest.h>

using AlibabaCloud::Dataworks_public::Model::RemoveProjectMemberFromRoleRequest;

RemoveProjectMemberFromRoleRequest::RemoveProjectMemberFromRoleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "RemoveProjectMemberFromRole") {
  setMethod(HttpRequest::Method::Post);
}

RemoveProjectMemberFromRoleRequest::~RemoveProjectMemberFromRoleRequest() {}

std::string RemoveProjectMemberFromRoleRequest::getRoleCode() const {
  return roleCode_;
}

void RemoveProjectMemberFromRoleRequest::setRoleCode(const std::string &roleCode) {
  roleCode_ = roleCode;
  setParameter(std::string("RoleCode"), roleCode);
}

long RemoveProjectMemberFromRoleRequest::getProjectId() const {
  return projectId_;
}

void RemoveProjectMemberFromRoleRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string RemoveProjectMemberFromRoleRequest::getUserId() const {
  return userId_;
}

void RemoveProjectMemberFromRoleRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

