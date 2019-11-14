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

#include <alibabacloud/dysmsapi/model/ModifySmsSignRequest.h>

using AlibabaCloud::Dysmsapi::Model::ModifySmsSignRequest;

ModifySmsSignRequest::ModifySmsSignRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "ModifySmsSign")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySmsSignRequest::~ModifySmsSignRequest()
{}

long ModifySmsSignRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySmsSignRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySmsSignRequest::getRemark()const
{
	return remark_;
}

void ModifySmsSignRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string ModifySmsSignRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySmsSignRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifySmsSignRequest::getSignName()const
{
	return signName_;
}

void ModifySmsSignRequest::setSignName(const std::string& signName)
{
	signName_ = signName;
	setCoreParameter("SignName", signName);
}

std::vector<ModifySmsSignRequest::SignFileList> ModifySmsSignRequest::getSignFileList()const
{
	return signFileList_;
}

void ModifySmsSignRequest::setSignFileList(const std::vector<SignFileList>& signFileList)
{
	signFileList_ = signFileList;
	int i = 0;
	for(int i = 0; i!= signFileList.size(); i++)	{
		auto obj = signFileList.at(i);
		std::string str ="SignFileList."+ std::to_string(i);
		setCoreParameter(str + ".FileContents", obj.fileContents);
		setCoreParameter(str + ".FileSuffix", obj.fileSuffix);
	}
}

std::string ModifySmsSignRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySmsSignRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ModifySmsSignRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySmsSignRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int ModifySmsSignRequest::getSignSource()const
{
	return signSource_;
}

void ModifySmsSignRequest::setSignSource(int signSource)
{
	signSource_ = signSource;
	setCoreParameter("SignSource", std::to_string(signSource));
}

