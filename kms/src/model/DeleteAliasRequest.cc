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

#include <alibabacloud/kms/model/DeleteAliasRequest.h>

using AlibabaCloud::Kms::Model::DeleteAliasRequest;

DeleteAliasRequest::DeleteAliasRequest() :
	RpcServiceRequest("kms", "2016-01-20", "DeleteAlias")
{}

DeleteAliasRequest::~DeleteAliasRequest()
{}

std::string DeleteAliasRequest::getAliasName()const
{
	return aliasName_;
}

void DeleteAliasRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setCoreParameter("AliasName", aliasName);
}

