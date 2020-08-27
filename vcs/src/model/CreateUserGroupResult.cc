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

#include <alibabacloud/vcs/model/CreateUserGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

CreateUserGroupResult::CreateUserGroupResult() :
	ServiceResult()
{}

CreateUserGroupResult::CreateUserGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateUserGroupResult::~CreateUserGroupResult()
{}

void CreateUserGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["UserGroupName"].isNull())
		data_.userGroupName = dataNode["UserGroupName"].asString();
	if(!dataNode["IsvSubId"].isNull())
		data_.isvSubId = dataNode["IsvSubId"].asString();
	if(!dataNode["UserGroupId"].isNull())
		data_.userGroupId = std::stol(dataNode["UserGroupId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateUserGroupResult::getMessage()const
{
	return message_;
}

CreateUserGroupResult::Data CreateUserGroupResult::getData()const
{
	return data_;
}

std::string CreateUserGroupResult::getCode()const
{
	return code_;
}

