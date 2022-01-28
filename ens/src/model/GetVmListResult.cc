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

#include <alibabacloud/ens/model/GetVmListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

GetVmListResult::GetVmListResult() :
	ServiceResult()
{}

GetVmListResult::GetVmListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVmListResult::~GetVmListResult()
{}

void GetVmListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["Desc"].isNull())
		desc_ = value["Desc"].asString();

}

std::string GetVmListResult::getMsg()const
{
	return msg_;
}

std::string GetVmListResult::getDesc()const
{
	return desc_;
}

std::string GetVmListResult::getData()const
{
	return data_;
}

int GetVmListResult::getCode()const
{
	return code_;
}

