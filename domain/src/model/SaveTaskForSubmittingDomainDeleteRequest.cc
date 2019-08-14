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

#include <alibabacloud/domain/model/SaveTaskForSubmittingDomainDeleteRequest.h>

using AlibabaCloud::Domain::Model::SaveTaskForSubmittingDomainDeleteRequest;

SaveTaskForSubmittingDomainDeleteRequest::SaveTaskForSubmittingDomainDeleteRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveTaskForSubmittingDomainDelete")
{}

SaveTaskForSubmittingDomainDeleteRequest::~SaveTaskForSubmittingDomainDeleteRequest()
{}

std::string SaveTaskForSubmittingDomainDeleteRequest::getInstanceId()const
{
	return instanceId_;
}

void SaveTaskForSubmittingDomainDeleteRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string SaveTaskForSubmittingDomainDeleteRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveTaskForSubmittingDomainDeleteRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SaveTaskForSubmittingDomainDeleteRequest::getLang()const
{
	return lang_;
}

void SaveTaskForSubmittingDomainDeleteRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

