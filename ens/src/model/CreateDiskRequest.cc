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

#include <alibabacloud/ens/model/CreateDiskRequest.h>

using AlibabaCloud::Ens::Model::CreateDiskRequest;

CreateDiskRequest::CreateDiskRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateDisk") {
  setMethod(HttpRequest::Method::Post);
}

CreateDiskRequest::~CreateDiskRequest() {}

std::string CreateDiskRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CreateDiskRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string CreateDiskRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateDiskRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string CreateDiskRequest::getSize() const {
  return size_;
}

void CreateDiskRequest::setSize(const std::string &size) {
  size_ = size;
  setParameter(std::string("Size"), size);
}

std::string CreateDiskRequest::getCategory() const {
  return category_;
}

void CreateDiskRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

