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

#include <alibabacloud/live/model/SetLiveStreamsNotifyUrlConfigRequest.h>

using AlibabaCloud::Live::Model::SetLiveStreamsNotifyUrlConfigRequest;

SetLiveStreamsNotifyUrlConfigRequest::SetLiveStreamsNotifyUrlConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "SetLiveStreamsNotifyUrlConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetLiveStreamsNotifyUrlConfigRequest::~SetLiveStreamsNotifyUrlConfigRequest()
{}

std::string SetLiveStreamsNotifyUrlConfigRequest::getAuthKey()const
{
	return authKey_;
}

void SetLiveStreamsNotifyUrlConfigRequest::setAuthKey(const std::string& authKey)
{
	authKey_ = authKey;
	setParameter("AuthKey", authKey);
}

std::string SetLiveStreamsNotifyUrlConfigRequest::getAuthType()const
{
	return authType_;
}

void SetLiveStreamsNotifyUrlConfigRequest::setAuthType(const std::string& authType)
{
	authType_ = authType;
	setParameter("AuthType", authType);
}

std::string SetLiveStreamsNotifyUrlConfigRequest::getNotifyReqAuth()const
{
	return notifyReqAuth_;
}

void SetLiveStreamsNotifyUrlConfigRequest::setNotifyReqAuth(const std::string& notifyReqAuth)
{
	notifyReqAuth_ = notifyReqAuth;
	setParameter("NotifyReqAuth", notifyReqAuth);
}

std::string SetLiveStreamsNotifyUrlConfigRequest::getNotifyUrl()const
{
	return notifyUrl_;
}

void SetLiveStreamsNotifyUrlConfigRequest::setNotifyUrl(const std::string& notifyUrl)
{
	notifyUrl_ = notifyUrl;
	setParameter("NotifyUrl", notifyUrl);
}

std::string SetLiveStreamsNotifyUrlConfigRequest::getNotifyType()const
{
	return notifyType_;
}

void SetLiveStreamsNotifyUrlConfigRequest::setNotifyType(const std::string& notifyType)
{
	notifyType_ = notifyType;
	setParameter("NotifyType", notifyType);
}

std::string SetLiveStreamsNotifyUrlConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetLiveStreamsNotifyUrlConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetLiveStreamsNotifyUrlConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLiveStreamsNotifyUrlConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetLiveStreamsNotifyUrlConfigRequest::getNotifyAuthKey()const
{
	return notifyAuthKey_;
}

void SetLiveStreamsNotifyUrlConfigRequest::setNotifyAuthKey(const std::string& notifyAuthKey)
{
	notifyAuthKey_ = notifyAuthKey;
	setParameter("NotifyAuthKey", notifyAuthKey);
}

