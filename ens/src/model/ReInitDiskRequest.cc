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

#include <alibabacloud/ens/model/ReInitDiskRequest.h>

using AlibabaCloud::Ens::Model::ReInitDiskRequest;

ReInitDiskRequest::ReInitDiskRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ReInitDisk") {
  setMethod(HttpRequest::Method::Post);
}

ReInitDiskRequest::~ReInitDiskRequest() {}

std::string ReInitDiskRequest::getImageId() const {
  return imageId_;
}

void ReInitDiskRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ReInitDiskRequest::getDiskId() const {
  return diskId_;
}

void ReInitDiskRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

