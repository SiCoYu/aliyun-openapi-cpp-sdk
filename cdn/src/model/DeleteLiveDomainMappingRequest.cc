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

#include <alibabacloud/cdn/model/DeleteLiveDomainMappingRequest.h>

using AlibabaCloud::Cdn::Model::DeleteLiveDomainMappingRequest;

DeleteLiveDomainMappingRequest::DeleteLiveDomainMappingRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DeleteLiveDomainMapping")
{}

DeleteLiveDomainMappingRequest::~DeleteLiveDomainMappingRequest()
{}

std::string DeleteLiveDomainMappingRequest::getPullDomain()const
{
	return pullDomain_;
}

void DeleteLiveDomainMappingRequest::setPullDomain(const std::string& pullDomain)
{
	pullDomain_ = pullDomain;
	setCoreParameter("PullDomain", pullDomain);
}

std::string DeleteLiveDomainMappingRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteLiveDomainMappingRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteLiveDomainMappingRequest::getPushDomain()const
{
	return pushDomain_;
}

void DeleteLiveDomainMappingRequest::setPushDomain(const std::string& pushDomain)
{
	pushDomain_ = pushDomain;
	setCoreParameter("PushDomain", pushDomain);
}

long DeleteLiveDomainMappingRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteLiveDomainMappingRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

