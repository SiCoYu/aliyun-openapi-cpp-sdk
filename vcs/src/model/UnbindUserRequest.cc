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

#include <alibabacloud/vcs/model/UnbindUserRequest.h>

using AlibabaCloud::Vcs::Model::UnbindUserRequest;

UnbindUserRequest::UnbindUserRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "UnbindUser")
{
	setMethod(HttpRequest::Method::Post);
}

UnbindUserRequest::~UnbindUserRequest()
{}

std::string UnbindUserRequest::getIsvSubId()const
{
	return isvSubId_;
}

void UnbindUserRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string UnbindUserRequest::getCorpId()const
{
	return corpId_;
}

void UnbindUserRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

long UnbindUserRequest::getUserId()const
{
	return userId_;
}

void UnbindUserRequest::setUserId(long userId)
{
	userId_ = userId;
	setBodyParameter("UserId", std::to_string(userId));
}

