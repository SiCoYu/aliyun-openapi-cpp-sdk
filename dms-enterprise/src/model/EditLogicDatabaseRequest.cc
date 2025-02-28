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

#include <alibabacloud/dms-enterprise/model/EditLogicDatabaseRequest.h>

using AlibabaCloud::Dms_enterprise::Model::EditLogicDatabaseRequest;

EditLogicDatabaseRequest::EditLogicDatabaseRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "EditLogicDatabase") {
  setMethod(HttpRequest::Method::Post);
}

EditLogicDatabaseRequest::~EditLogicDatabaseRequest() {}

long EditLogicDatabaseRequest::getLogicDbId() const {
  return logicDbId_;
}

void EditLogicDatabaseRequest::setLogicDbId(long logicDbId) {
  logicDbId_ = logicDbId;
  setParameter(std::string("LogicDbId"), std::to_string(logicDbId));
}

long EditLogicDatabaseRequest::getTid() const {
  return tid_;
}

void EditLogicDatabaseRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::vector<EditLogicDatabaseRequest::long> EditLogicDatabaseRequest::getDatabaseIds() const {
  return databaseIds_;
}

void EditLogicDatabaseRequest::setDatabaseIds(const std::vector<EditLogicDatabaseRequest::long> &databaseIds) {
  databaseIds_ = databaseIds;
  for(int dep1 = 0; dep1 != databaseIds.size(); dep1++) {
    setParameter(std::string("DatabaseIds") + "." + std::to_string(dep1 + 1), std::to_string(databaseIds[dep1]));
  }
}

std::string EditLogicDatabaseRequest::getAlias() const {
  return alias_;
}

void EditLogicDatabaseRequest::setAlias(const std::string &alias) {
  alias_ = alias;
  setParameter(std::string("Alias"), alias);
}

