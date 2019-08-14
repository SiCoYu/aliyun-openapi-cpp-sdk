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

#include <alibabacloud/cr/model/GetNamespaceAuthorizationListRequest.h>

using AlibabaCloud::Cr::Model::GetNamespaceAuthorizationListRequest;

GetNamespaceAuthorizationListRequest::GetNamespaceAuthorizationListRequest() :
	RoaServiceRequest("cr", "2016-06-07")
{}

GetNamespaceAuthorizationListRequest::~GetNamespaceAuthorizationListRequest()
{}

std::string GetNamespaceAuthorizationListRequest::getRegionId()const
{
	return regionId_;
}

void GetNamespaceAuthorizationListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetNamespaceAuthorizationListRequest::get_Namespace()const
{
	return _namespace_;
}

void GetNamespaceAuthorizationListRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setCoreParameter("_Namespace", _namespace);
}

std::string GetNamespaceAuthorizationListRequest::getAuthorize()const
{
	return authorize_;
}

void GetNamespaceAuthorizationListRequest::setAuthorize(const std::string& authorize)
{
	authorize_ = authorize;
	setCoreParameter("Authorize", authorize);
}

