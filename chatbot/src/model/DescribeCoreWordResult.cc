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

#include <alibabacloud/chatbot/model/DescribeCoreWordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

DescribeCoreWordResult::DescribeCoreWordResult() :
	ServiceResult()
{}

DescribeCoreWordResult::DescribeCoreWordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCoreWordResult::~DescribeCoreWordResult()
{}

void DescribeCoreWordResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSynonyms = value["Synonyms"]["Synonym"];
	for (const auto &item : allSynonyms)
		synonyms_.push_back(item.asString());
	if(!value["CoreWordCode"].isNull())
		coreWordCode_ = value["CoreWordCode"].asString();
	if(!value["CoreWordName"].isNull())
		coreWordName_ = value["CoreWordName"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = value["ModifyTime"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();

}

std::vector<std::string> DescribeCoreWordResult::getSynonyms()const
{
	return synonyms_;
}

std::string DescribeCoreWordResult::getCoreWordName()const
{
	return coreWordName_;
}

std::string DescribeCoreWordResult::getModifyTime()const
{
	return modifyTime_;
}

std::string DescribeCoreWordResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeCoreWordResult::getCoreWordCode()const
{
	return coreWordCode_;
}

