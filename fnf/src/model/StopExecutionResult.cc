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

#include <alibabacloud/fnf/model/StopExecutionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Fnf;
using namespace AlibabaCloud::Fnf::Model;

StopExecutionResult::StopExecutionResult() :
	ServiceResult()
{}

StopExecutionResult::StopExecutionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StopExecutionResult::~StopExecutionResult()
{}

void StopExecutionResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["FlowName"].isNull())
		flowName_ = value["FlowName"].asString();
	if(!value["FlowDefinition"].isNull())
		flowDefinition_ = value["FlowDefinition"].asString();
	if(!value["Input"].isNull())
		input_ = value["Input"].asString();
	if(!value["Output"].isNull())
		output_ = value["Output"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["StartedTime"].isNull())
		startedTime_ = value["StartedTime"].asString();
	if(!value["StoppedTime"].isNull())
		stoppedTime_ = value["StoppedTime"].asString();

}

std::string StopExecutionResult::getStatus()const
{
	return status_;
}

std::string StopExecutionResult::getInput()const
{
	return input_;
}

std::string StopExecutionResult::getStoppedTime()const
{
	return stoppedTime_;
}

std::string StopExecutionResult::getFlowName()const
{
	return flowName_;
}

std::string StopExecutionResult::getOutput()const
{
	return output_;
}

std::string StopExecutionResult::getStartedTime()const
{
	return startedTime_;
}

std::string StopExecutionResult::getFlowDefinition()const
{
	return flowDefinition_;
}

std::string StopExecutionResult::getName()const
{
	return name_;
}
