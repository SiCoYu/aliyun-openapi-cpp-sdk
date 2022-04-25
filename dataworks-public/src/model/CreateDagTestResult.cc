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

#include <alibabacloud/dataworks-public/model/CreateDagTestResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

CreateDagTestResult::CreateDagTestResult() :
	ServiceResult()
{}

CreateDagTestResult::CreateDagTestResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDagTestResult::~CreateDagTestResult()
{}

void CreateDagTestResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Data"].isNull())
		data_ = std::stol(value["Data"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int CreateDagTestResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

long CreateDagTestResult::getData()const
{
	return data_;
}

std::string CreateDagTestResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateDagTestResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateDagTestResult::getSuccess()const
{
	return success_;
}

