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

#include <alibabacloud/live/model/SetLiveDomainSpecialConfigRequest.h>

using AlibabaCloud::Live::Model::SetLiveDomainSpecialConfigRequest;

SetLiveDomainSpecialConfigRequest::SetLiveDomainSpecialConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "SetLiveDomainSpecialConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetLiveDomainSpecialConfigRequest::~SetLiveDomainSpecialConfigRequest()
{}

std::string SetLiveDomainSpecialConfigRequest::getValue()const
{
	return value_;
}

void SetLiveDomainSpecialConfigRequest::setValue(const std::string& value)
{
	value_ = value;
	setParameter("Value", value);
}

std::string SetLiveDomainSpecialConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetLiveDomainSpecialConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetLiveDomainSpecialConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLiveDomainSpecialConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetLiveDomainSpecialConfigRequest::getName()const
{
	return name_;
}

void SetLiveDomainSpecialConfigRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

