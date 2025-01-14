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

#include <alibabacloud/sas/model/RefreshContainerAssetsRequest.h>

using AlibabaCloud::Sas::Model::RefreshContainerAssetsRequest;

RefreshContainerAssetsRequest::RefreshContainerAssetsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "RefreshContainerAssets") {
  setMethod(HttpRequest::Method::Post);
}

RefreshContainerAssetsRequest::~RefreshContainerAssetsRequest() {}

std::string RefreshContainerAssetsRequest::getSourceIp() const {
  return sourceIp_;
}

void RefreshContainerAssetsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string RefreshContainerAssetsRequest::getAssetType() const {
  return assetType_;
}

void RefreshContainerAssetsRequest::setAssetType(const std::string &assetType) {
  assetType_ = assetType;
  setParameter(std::string("AssetType"), assetType);
}

